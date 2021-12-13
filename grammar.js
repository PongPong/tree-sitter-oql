// Generate case insentitive match for SQL keyword
// In case of multiple word keyword provide a seq matcher
const kw = (keyword) => {
  const reserved = (regex) => token(prec(1, new RegExp(regex)))

  const caseInsensitive = (word) => word.split('')
    .map(letter => `[${letter}${letter.toLowerCase()}]`)
    .join('')

  return alias(reserved(caseInsensitive(keyword)), keyword);
}

module.exports = grammar({
  name: "oql",
  word: $ => $.identifier,
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
      'exists',
      'membership',
      'in',
      'like',
      'or',
      'assignment'
    ]
  ],
  rules: {
    source_file: $ => repeat($._statement),

    keyword_describe: _$ => kw("DESCRIBE"),
    keyword_select: _$ => kw("SELECT"),
    keyword_as: _$ => kw("AS"),
    keyword_from: _$ => kw("FROM"),
    keyword_left: _$ => kw("LEFT"),
    keyword_right: _$ => kw("RIGHT"),
    keyword_full: _$ => kw("FULL"),
    keyword_inner: _$ => kw("INNER"),
    keyword_outer: _$ => kw("OUTER"),
    keyword_where: _$ => kw("WHERE"),
    keyword_having: _$ => kw("HAVING"),
    keyword_groupby: _$ => kw("GROUP BY"),
    keyword_orderby: _$ => kw("ORDER BY"),
    keyword_asc: _$ => kw("ASC"),
    keyword_desc: _$ => kw("DESC"),
    keyword_offset: _$ => kw("OFFSET"),
    keyword_limit: _$ => kw("LIMIT"),
    keyword_join: _$ => kw("JOIN"),
    keyword_on: _$ => kw("ON"),
    keyword_null: _$ => kw("NULL"),
    keyword_true: _$ => kw("TRUE"),
    keyword_false: _$ => kw("FALSE"),
    keyword_not: _$ => kw("NOT"),
    keyword_and: _$ => kw("AND"),
    keyword_or: _$ => kw("OR"),
    keyword_between: _$ => kw("BETWEEN"),
    keyword_is: _$ => kw("IS"),
    keyword_in: _$ => kw("IN"),
    keyword_like: _$ => kw("LIKE"),
    keyword_regexp: _$ => kw("REGEXP"),
    keyword_exists: _$ => kw("EXISTS"),

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
    describe_statement: $ => seq($.keyword_describe, $.identifier),

    /** 
      * Statements and Clauses
      */
    select_statement: $ => $._subquery,
    _subquery: $ => prec.left(
      seq(
        $.select_clause,
        $.from_clause,
        optional(repeat($.join_clause)),
        optional($.where_clause),
        optional($.group_by_clause),
        optional($.order_by_clause),
        optional($.limit_clause)
      )),
    select_clause: $ =>
      prec.left(seq($.keyword_select, choice(
        '*',
        commaSep1($._aliasable_expression),
      ))),
    _aliased_expression: $ => seq($._expression, optional($.keyword_as), $.identifier),
    _aliasable_expression: $ =>
      choice($._expression, alias($._aliased_expression, $.alias)),
    _query_table_expression_clause: $ => choice(
      $._aliasable_expression,
      $._parenthesized_subquery
    ),
    from_clause: $ => prec.left(seq(
      $.keyword_from,
      commaSep1($._query_table_expression_clause)
    )),
    join_type: $ =>
      seq(
        choice(
          $.keyword_inner,
          seq(
            choice($.keyword_left, $.keyword_right, $.keyword_full),
            optional($.keyword_outer),
          ),
        ),
      ),
    join_clause: $ =>
      seq(
        optional($.join_type),
        $.keyword_join,
        $.identifier,
        $.keyword_on,
        $._expression,
      ),
    where_clause: $ => seq($.keyword_where, $._condition),
    having_condition: $ => seq($.keyword_having, $._condition),
    group_by_clause: $ => prec.left(
      seq($.keyword_groupby, commaSep1($._expression), optional($.having_condition))),
    order_by_clause: $ => prec.left(
      seq($.keyword_orderby, commaSep1($._expression),
        optional(choice($.keyword_asc, $.keyword_desc)))),
    _offset_clause: $ => seq($.keyword_offset, field("offset", $._number)),
    limit_clause: $ => prec.left(choice(
      seq($.keyword_limit, field("limit", $._number), optional($._offset_clause)),
      $._offset_clause,
      seq($.keyword_limit, field("offset", $._number), ",", field("limit", $._number)),
    )),
    parameter: $ => seq($.identifier, $._type),
    parameters: $ => seq("(", commaSep1($.parameter), ")"),
    NULL: $ => $.keyword_null,
    TRUE: $ => $.keyword_true,
    FALSE: $ => $.keyword_false,
    integer: _$ => token(/[+-]?[0-9]+/),
    _number: $ => choice(
      $.integer,
    ),
    identifier: _$ => /[a-zA-Z]+[.a-zA-Z0-9_]*/,
    string: _$ =>
      choice(
        seq("'", field("content", /[^']*/), "'"),
        seq("$$", field("content", /(\$?[^$]+)+/), "$$"), // FIXME empty string test, maybe read a bit more into c comments answer
      ),
    bind_param: $ =>
      seq('&', $.identifier),
    field_access: $ => seq($.identifier, "->>", $.string),
    ordered_expression: $ =>
      seq($._expression, field("order", choice($.keyword_asc, $.keyword_desc))),
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
        prec.left('logical_not', seq($.keyword_not, $._condition)),
        prec.left('logical_and', seq($._condition, $.keyword_and, $._condition)),
        prec.left('logical_or', seq($._condition, $.keyword_or, $._condition)),
      ),
    range_condition: $ =>
      prec.left(seq(
        $._expression,
        optional($.keyword_not),
        $.keyword_between,
        $._expression,
        $.keyword_and,
        $._expression)),
    null_condition: $ =>
      prec.left(choice(
        $._expression,
        seq($._expression, $.keyword_is, optional($.keyword_not), $.keyword_null)
      )),
    membership_condition: $ =>
      prec.left('membership',
        choice(
          seq($._expression, optional($.keyword_not), $.keyword_in,
            choice(
              $._expression_list,
              $._parenthesized_subquery
            )),
          seq($._expression_list, optional($.keyword_not), $.keyword_in, '(',
            commaSep1(choice($._expression_list, $._subquery)), ')')
        )
      ),
    like_condition: $ =>
      prec.left(seq($._expression, optional($.keyword_not), $.keyword_like, $._expression)),
    regexp_condition: $ =>
      prec.left(seq($._expression, optional($.keyword_not), $.keyword_regexp, $._expression)),
    pattern_matching_condition: $ => choice(
      $.like_condition,
      $.regexp_condition,
    ),
    _parenthesized_subquery: $ => seq('(', $._subquery, ')'),
    exists_condition: $ =>
      prec.left('exists', seq(
        // optional($.keyword_not), // convered by compound condition
        $.keyword_exists,
        $._parenthesized_subquery,
      )),
    _condition: $ =>
      choice(
        $.comparison_condition,
        $.compound_condition,
        $.pattern_matching_condition,
        $.range_condition,
        $.null_condition,
        $.membership_condition,
        $.exists_condition
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
    aggregate_function: _$ =>
      choice(
        kw("MIN"),
        kw("MAX"),
        kw("COUNT"),
        kw("AVG"),
        kw("SUM"),
        kw("STDDEV"),
        kw("CURRENT_TIME"),
        kw("CURRENT_DATE"),
      ),
    built_in_function_expression: $ =>
      seq(
        field("function", alias($.aggregate_function, $.function)),
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
