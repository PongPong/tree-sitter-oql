// Generate case insentitive match for SQL keyword
// In case of multiple word keyword provide a seq matcher
function kw(keyword) {
  if (keyword.toUpperCase() != keyword) {
    throw new Error(`Expected upper case keyword got ${keyword}`);
  }
  const words = keyword.split(" ");
  const regExps = words.map(createCaseInsensitiveRegex);

  if (regExps.length == 1) {
    return alias(regExps[0], keyword);
  } else {
    return alias(seq(...regExps), keyword.replace(/ /g, "_"));
  }
}


function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join(""),
  );
}

module.exports = grammar({
  name: "oql",
  extras: $ => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],
  precedences: _$ => [
    [
      'string',
      'comment',
      'comparison_operator',
      'logical_not',
      'logical_and',
      'logical_or',
      'between',
      'in',
      'like',
      'or',
      'assignment'
    ]
  ],
  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ =>
      seq(
        choice(
          $.select_statement,
        ),
        optional(";"),
      ),

    /** 
      * Statements and Clauses
      */
    select_statement: $ => $._subquery,
    _subquery: $ =>
      seq(
        $.select_clause,
        $.from_clause,
        optional(repeat($.join_clause)),
        optional($.where_clause),
        optional($.group_by_clause),
        optional($.order_by_clause),
        optional($.limit_clause)
      ),
    select_clause: $ =>
      prec.left(seq(kw("SELECT"), choice(
        '*',
        commaSep1($._aliasable_expression),
      ))),
    _aliased_expression: $ => seq($._expression, optional(kw("AS")), $.identifier),
    _aliasable_expression: $ =>
      choice($._expression, alias($._aliased_expression, $.alias)),
    _query_table_expression_clause: $ => choice(
      $._aliasable_expression,
      // seq('(', $._subquery, ')')
    ),
    from_clause: $ => seq(
      kw("FROM"),
      commaSep1($._query_table_expression_clause)
    ),
    join_type: _$ =>
      seq(
        choice(
          kw("INNER"),
          seq(
            choice(kw("LEFT"), kw("RIGHT"), kw("FULL")),
            optional(kw("OUTER")),
          ),
        ),
      ),
    join_clause: $ =>
      seq(
        optional($.join_type),
        kw("JOIN"),
        $.identifier,
        kw("ON"),
        $._expression,
      ),
    select_subexpression: $ => seq("(", $.select_statement, ")"),
    where_clause: $ => seq(kw("WHERE"), $._condition),
    group_by_clause_body: $ => commaSep1($._expression),
    group_by_clause: $ => seq(kw("GROUP BY"), $.group_by_clause_body),
    order_by_clause_body: $ => commaSep1($._expression),
    order_by_clause: $ => seq(kw("ORDER BY"), $.order_by_clause_body),
    _offset_clause: $ => seq(kw("OFFSET"), field("offset", $._number)),
    limit_clause: $ => choice(
      seq(kw("LIMIT"), field("limit", $._number), optional($._offset_clause)),
      $._offset_clause,
      seq(kw("LIMIT"), field("offset", $._number), ",", field("limit", $._number)),
    ),

    tuple: $ =>
      seq(
        // TODO: maybe collapse with function arguments, but make sure to preserve clarity
        "(",
        field("elements", commaSep1($._expression)),
        ")",
      ),
    parameter: $ => seq($.identifier, $._type),
    parameters: $ => seq("(", commaSep1($.parameter), ")"),
    _parenthesized_expression: $ => seq("(", $._expression, ")"),
    NULL: _$ => kw("NULL"),
    TRUE: _$ => kw("TRUE"),
    FALSE: _$ => kw("FALSE"),
    integer: _$ => token(/[+-]?[0-9]+/),
    _number: $ => choice(
      $.integer,
    ),
    identifier: _$ => /[a-zA-Z0-9_]+[.a-zA-Z0-9_]*/,
    string: _$ =>
      choice(
        seq("'", field("content", /[^']*/), "'"),
        seq("$$", field("content", /(\$?[^$]+)+/), "$$"), // FIXME empty string test, maybe read a bit more into c comments answer
      ),
    bind_param: $ =>
      seq('&', $.identifier),
    field_access: $ => seq($.identifier, "->>", $.string),
    ordered_expression: $ =>
      seq($._expression, field("order", choice(kw("ASC"), kw("DESC")))),
    _type_alias: $ => alias($.identifier, $.type),
    array_type: $ => seq($._type, "[", "]"),
    _type: $ => choice($._type_alias, $.array_type),
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _$ =>
      token(
        choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
    array_element_access: $ =>
      seq(choice($.identifier, $.argument_reference), "[", $._expression, "]"),
    binary_expression: $ =>
      prec.left(
        choice(
          seq($._expression, "~", $._expression),
          seq($._expression, "+", $._expression),
        ),
      ),
    argument_reference: _$ => seq("$", /\d+/),
    /** 
     * Conditions specifies a combination of one or more expressions and 
     * logical (Boolean) operators and returns a value of TRUE, FALSE, or UNKNOWN.
     */
    comparison_condition: $ =>
      prec.left(
        'comparison_operator',
        seq(
          field("left", $._expression),
          field("operator", choice("=", "!=", "<>", "<", ">", ">=", "<=")),
          field("right", $._expression),
        ),
      ),
    logical_condition: $ =>
      choice(
        prec.left('logical_not', seq(kw("NOT"), $._expression)),
        prec.left('logical_and', seq($._expression, kw("AND"), $._expression)),
        prec.left('logical_or', seq($._expression, kw("OR"), $._expression)),
      ),
    between_condition: $ =>
      prec.left('between', seq($._expression, optional(kw('NOT')), kw('BETWEEN'), $._expression, 'AND', $._expression)),
    in_condition: $ =>
      prec.left('in', seq($._expression, optional(kw("NOT")), kw("IN"), $.tuple)),
    pattern_matching_condition: $ =>
      prec.left('like', seq($._expression, optional(kw('NOT')), kw('LIKE'), $._expression)),
    _condition: $ =>
      choice(
        $.comparison_condition,
        $.logical_condition,
        $.pattern_matching_condition,
        $.between_condition,
        $.in_condition,
      ),
    /** Expressions **/
    simple_expression: $ =>
      choice(
        $.string,
        $._number,
        $.NULL,
      ),
    function_call: $ =>
      seq(
        field("function", $.identifier),
        "(",
        optional(field("arguments", choice("*", commaSep1($._expression)))),
        ")",
      ),
    _expression: $ =>
      choice(
        $.simple_expression,
        $.function_call,
        $.bind_param,
        $.field_access,
        $.TRUE,
        $.FALSE,
        $.identifier,
        $._parenthesized_expression,
        $.binary_expression,
        $.array_element_access,
        $.argument_reference,
        $.select_subexpression,
        $._condition,
      ),
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
