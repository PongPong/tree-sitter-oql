// Generate case insentitive match for SQL keyword
// In case of multiple word keyword provide a seq matcher
function kw(keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map((a) => {
      const ca = a.charCodeAt(0);
      if (ca >= 97 && ca <= 122) return `[${a}${a.toUpperCase()}]`;
      if (ca >= 65 && ca <= 90) return `[${a.toLowerCase()}${a}]`;
      return a;
    })
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}

module.exports = grammar({
  name: "oql",
  // word: $ => $.identifier,
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
      'null',
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
          $.describe_statement
        ),
        optional(";"),
      ),

    /**
      * Describe table
      */
    describe_statement: $ => seq(kw("DESCRIBE"), $.identifier),

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
      seq('(', $._subquery, ')')
    ),
    from_clause: $ => prec.left(seq(
      kw("FROM"),
      commaSep1($._query_table_expression_clause)
    )),
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
    where_clause: $ => seq(kw("WHERE"), $._condition),
    having_condition: $ => seq(kw("HAVING", $._condition)),
    group_by_clause: $ => prec.left(
      seq(kw("GROUP BY"), commaSep1($._expression), optional($.having_condition))),
    order_by_clause: $ => prec.left(
      seq(kw("ORDER BY"), commaSep1($._expression),
        optional(choice(kw("ASC"), kw("DESC"))))),
    _offset_clause: $ => seq(kw("OFFSET"), field("offset", $._number)),
    limit_clause: $ => prec.left(choice(
      seq(kw("LIMIT"), field("limit", $._number), optional($._offset_clause)),
      $._offset_clause,
      seq(kw("LIMIT"), field("offset", $._number), ",", field("limit", $._number)),
    )),
    parameter: $ => seq($.identifier, $._type),
    parameters: $ => seq("(", commaSep1($.parameter), ")"),
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
          field("right", choice(
            $._expression,
            seq('(', $._subquery, ')')
          )),
        ),
      ),
    compound_condition: $ =>
      choice(
        prec.left(seq('(', $._condition, ')')),
        prec.left('logical_not', seq(kw("NOT"), $._condition)),
        prec.left('logical_and', seq($._condition, kw("AND"), $._condition)),
        prec.left('logical_or', seq($._condition, kw("OR"), $._condition)),
      ),
    range_condition: $ =>
      prec.left(seq(
        $._expression,
        optional(kw("NOT")),
        kw("BETWEEN"),
        $._expression,
        kw('AND'),
        $._expression)),
    null_condition: $ =>
      prec.left(choice(
        $._expression, seq($._expression, kw("IS"), optional(kw("NOT")), kw("NULL")))),
    membership_condition: $ =>
      prec.left(
        choice(
          seq($._expression, optional(kw("NOT")), kw("IN"),
            choice(
              $._expression_list,
              seq('(', $._subquery, ')')
            )),
          seq($._expression_list, optional(kw("NOT")), kw("IN"), '(',
            commaSep1(choice($._expression_list, $._subquery)), ')')
        )
      ),
    like_condition: $ =>
      prec.left(seq($._expression, optional(kw('NOT')), kw('LIKE'), $._expression)),
    regexp_condition: $ =>
      prec.left(seq($._expression, optional(kw('NOT')), kw('REGEXP'), $._expression)),
    pattern_matching_condition: $ => choice(
      $.like_condition,
      $.regexp_condition,
    ),
    _condition: $ =>
      choice(
        $.comparison_condition,
        $.compound_condition,
        $.pattern_matching_condition,
        $.range_condition,
        $.null_condition,
        $.membership_condition,
      ),
    /** Expressions **/
    _simple_expression: $ =>
      choice(
        $.string,
        $._number,
        $.NULL,
      ),
    arguments: $ => seq(
      "(",
      optional(field("arguments", choice("*", commaSep1($._expression)))),
      ")",
    ),
    built_in_function_expression: $ =>
      seq(
        field("function", alias($.identifier, $.function)),
        $.arguments
      ),
    _expression_list: $ => seq('(', commaSep1($._expression), ')'),
    _expression: $ =>
      choice(
        $._simple_expression,
        $.built_in_function_expression,
        $.bind_param,
        $.field_access,
        $.TRUE,
        $.FALSE,
        $.identifier,
        $.binary_expression,
        $.array_element_access,
        $.argument_reference,
      ),
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
