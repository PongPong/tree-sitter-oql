#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 407
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_SEMI = 1,
  aux_sym_describe_statement_token1 = 2,
  aux_sym_select_clause_token1 = 3,
  anon_sym_STAR = 4,
  anon_sym_COMMA = 5,
  aux_sym__aliased_expression_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_from_clause_token1 = 9,
  aux_sym_join_type_token1 = 10,
  aux_sym_join_type_token2 = 11,
  aux_sym_join_type_token3 = 12,
  aux_sym_join_type_token4 = 13,
  aux_sym_join_type_token5 = 14,
  aux_sym_join_clause_token1 = 15,
  aux_sym_join_clause_token2 = 16,
  aux_sym_where_clause_token1 = 17,
  aux_sym_having_condition_token1 = 18,
  aux_sym_group_by_clause_token1 = 19,
  aux_sym_order_by_clause_token1 = 20,
  aux_sym_order_by_clause_token2 = 21,
  aux_sym_order_by_clause_token3 = 22,
  aux_sym__offset_clause_token1 = 23,
  aux_sym_limit_clause_token1 = 24,
  aux_sym_NULL_token1 = 25,
  aux_sym_TRUE_token1 = 26,
  aux_sym_FALSE_token1 = 27,
  sym_integer = 28,
  sym_identifier = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_string_token1 = 31,
  anon_sym_DOLLAR_DOLLAR = 32,
  aux_sym_string_token2 = 33,
  anon_sym_AMP = 34,
  anon_sym_DASH_GT_GT = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  sym_comment = 38,
  anon_sym_TILDE = 39,
  anon_sym_PLUS = 40,
  anon_sym_DOLLAR = 41,
  aux_sym_argument_reference_token1 = 42,
  anon_sym_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_LT_GT = 45,
  anon_sym_LT = 46,
  anon_sym_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  aux_sym_compound_condition_token1 = 50,
  aux_sym_compound_condition_token2 = 51,
  aux_sym_compound_condition_token3 = 52,
  aux_sym_range_condition_token1 = 53,
  aux_sym_null_condition_token1 = 54,
  aux_sym_membership_condition_token1 = 55,
  aux_sym_like_condition_token1 = 56,
  aux_sym_regexp_condition_token1 = 57,
  sym_source_file = 58,
  sym__statement = 59,
  sym_describe_statement = 60,
  sym_select_statement = 61,
  sym__subquery = 62,
  sym_select_clause = 63,
  sym__aliased_expression = 64,
  sym__aliasable_expression = 65,
  sym__query_table_expression_clause = 66,
  sym_from_clause = 67,
  sym_join_type = 68,
  sym_join_clause = 69,
  sym_where_clause = 70,
  sym_having_condition = 71,
  sym_group_by_clause = 72,
  sym_order_by_clause = 73,
  sym__offset_clause = 74,
  sym_limit_clause = 75,
  sym_NULL = 76,
  sym_TRUE = 77,
  sym_FALSE = 78,
  sym__number = 79,
  sym_string = 80,
  sym_bind_param = 81,
  sym_field_access = 82,
  sym_array_element_access = 83,
  sym_binary_expression = 84,
  sym_argument_reference = 85,
  sym_comparison_condition = 86,
  sym_compound_condition = 87,
  sym_range_condition = 88,
  sym_null_condition = 89,
  sym_membership_condition = 90,
  sym_like_condition = 91,
  sym_regexp_condition = 92,
  sym_pattern_matching_condition = 93,
  sym__condition = 94,
  sym__simple_expression = 95,
  sym_arguments = 96,
  sym_built_in_function_expression = 97,
  sym__expression_list = 98,
  sym__expression = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym__subquery_repeat1 = 101,
  aux_sym_select_clause_repeat1 = 102,
  aux_sym_from_clause_repeat1 = 103,
  aux_sym_group_by_clause_repeat1 = 104,
  aux_sym_membership_condition_repeat1 = 105,
  alias_sym_function = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_describe_statement_token1] = "DESCRIBE",
  [aux_sym_select_clause_token1] = "SELECT",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [aux_sym__aliased_expression_token1] = "AS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_join_type_token1] = "INNER",
  [aux_sym_join_type_token2] = "LEFT",
  [aux_sym_join_type_token3] = "RIGHT",
  [aux_sym_join_type_token4] = "FULL",
  [aux_sym_join_type_token5] = "OUTER",
  [aux_sym_join_clause_token1] = "JOIN",
  [aux_sym_join_clause_token2] = "ON",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_having_condition_token1] = "HAVING",
  [aux_sym_group_by_clause_token1] = "GROUP BY",
  [aux_sym_order_by_clause_token1] = "ORDER BY",
  [aux_sym_order_by_clause_token2] = "ASC",
  [aux_sym_order_by_clause_token3] = "DESC",
  [aux_sym__offset_clause_token1] = "OFFSET",
  [aux_sym_limit_clause_token1] = "LIMIT",
  [aux_sym_NULL_token1] = "NULL",
  [aux_sym_TRUE_token1] = "TRUE",
  [aux_sym_FALSE_token1] = "FALSE",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_AMP] = "&",
  [anon_sym_DASH_GT_GT] = "->>",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_argument_reference_token1] = "argument_reference_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [aux_sym_compound_condition_token1] = "NOT",
  [aux_sym_compound_condition_token2] = "AND",
  [aux_sym_compound_condition_token3] = "OR",
  [aux_sym_range_condition_token1] = "BETWEEN",
  [aux_sym_null_condition_token1] = "IS",
  [aux_sym_membership_condition_token1] = "IN",
  [aux_sym_like_condition_token1] = "LIKE",
  [aux_sym_regexp_condition_token1] = "REGEXP",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_describe_statement] = "describe_statement",
  [sym_select_statement] = "select_statement",
  [sym__subquery] = "_subquery",
  [sym_select_clause] = "select_clause",
  [sym__aliased_expression] = "alias",
  [sym__aliasable_expression] = "_aliasable_expression",
  [sym__query_table_expression_clause] = "_query_table_expression_clause",
  [sym_from_clause] = "from_clause",
  [sym_join_type] = "join_type",
  [sym_join_clause] = "join_clause",
  [sym_where_clause] = "where_clause",
  [sym_having_condition] = "having_condition",
  [sym_group_by_clause] = "group_by_clause",
  [sym_order_by_clause] = "order_by_clause",
  [sym__offset_clause] = "_offset_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_NULL] = "NULL",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym__number] = "_number",
  [sym_string] = "string",
  [sym_bind_param] = "bind_param",
  [sym_field_access] = "field_access",
  [sym_array_element_access] = "array_element_access",
  [sym_binary_expression] = "binary_expression",
  [sym_argument_reference] = "argument_reference",
  [sym_comparison_condition] = "comparison_condition",
  [sym_compound_condition] = "compound_condition",
  [sym_range_condition] = "range_condition",
  [sym_null_condition] = "null_condition",
  [sym_membership_condition] = "membership_condition",
  [sym_like_condition] = "like_condition",
  [sym_regexp_condition] = "regexp_condition",
  [sym_pattern_matching_condition] = "pattern_matching_condition",
  [sym__condition] = "_condition",
  [sym__simple_expression] = "_simple_expression",
  [sym_arguments] = "arguments",
  [sym_built_in_function_expression] = "built_in_function_expression",
  [sym__expression_list] = "_expression_list",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__subquery_repeat1] = "_subquery_repeat1",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_group_by_clause_repeat1] = "group_by_clause_repeat1",
  [aux_sym_membership_condition_repeat1] = "membership_condition_repeat1",
  [alias_sym_function] = "function",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_describe_statement_token1] = aux_sym_describe_statement_token1,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__aliased_expression_token1] = aux_sym__aliased_expression_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_join_type_token1] = aux_sym_join_type_token1,
  [aux_sym_join_type_token2] = aux_sym_join_type_token2,
  [aux_sym_join_type_token3] = aux_sym_join_type_token3,
  [aux_sym_join_type_token4] = aux_sym_join_type_token4,
  [aux_sym_join_type_token5] = aux_sym_join_type_token5,
  [aux_sym_join_clause_token1] = aux_sym_join_clause_token1,
  [aux_sym_join_clause_token2] = aux_sym_join_clause_token2,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_having_condition_token1] = aux_sym_having_condition_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_order_by_clause_token2] = aux_sym_order_by_clause_token2,
  [aux_sym_order_by_clause_token3] = aux_sym_order_by_clause_token3,
  [aux_sym__offset_clause_token1] = aux_sym__offset_clause_token1,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [aux_sym_NULL_token1] = aux_sym_NULL_token1,
  [aux_sym_TRUE_token1] = aux_sym_TRUE_token1,
  [aux_sym_FALSE_token1] = aux_sym_FALSE_token1,
  [sym_integer] = sym_integer,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_argument_reference_token1] = aux_sym_argument_reference_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [aux_sym_compound_condition_token1] = aux_sym_compound_condition_token1,
  [aux_sym_compound_condition_token2] = aux_sym_compound_condition_token2,
  [aux_sym_compound_condition_token3] = aux_sym_compound_condition_token3,
  [aux_sym_range_condition_token1] = aux_sym_range_condition_token1,
  [aux_sym_null_condition_token1] = aux_sym_null_condition_token1,
  [aux_sym_membership_condition_token1] = aux_sym_membership_condition_token1,
  [aux_sym_like_condition_token1] = aux_sym_like_condition_token1,
  [aux_sym_regexp_condition_token1] = aux_sym_regexp_condition_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_describe_statement] = sym_describe_statement,
  [sym_select_statement] = sym_select_statement,
  [sym__subquery] = sym__subquery,
  [sym_select_clause] = sym_select_clause,
  [sym__aliased_expression] = sym__aliased_expression,
  [sym__aliasable_expression] = sym__aliasable_expression,
  [sym__query_table_expression_clause] = sym__query_table_expression_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_join_type] = sym_join_type,
  [sym_join_clause] = sym_join_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_having_condition] = sym_having_condition,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym__offset_clause] = sym__offset_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_NULL] = sym_NULL,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym__number] = sym__number,
  [sym_string] = sym_string,
  [sym_bind_param] = sym_bind_param,
  [sym_field_access] = sym_field_access,
  [sym_array_element_access] = sym_array_element_access,
  [sym_binary_expression] = sym_binary_expression,
  [sym_argument_reference] = sym_argument_reference,
  [sym_comparison_condition] = sym_comparison_condition,
  [sym_compound_condition] = sym_compound_condition,
  [sym_range_condition] = sym_range_condition,
  [sym_null_condition] = sym_null_condition,
  [sym_membership_condition] = sym_membership_condition,
  [sym_like_condition] = sym_like_condition,
  [sym_regexp_condition] = sym_regexp_condition,
  [sym_pattern_matching_condition] = sym_pattern_matching_condition,
  [sym__condition] = sym__condition,
  [sym__simple_expression] = sym__simple_expression,
  [sym_arguments] = sym_arguments,
  [sym_built_in_function_expression] = sym_built_in_function_expression,
  [sym__expression_list] = sym__expression_list,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__subquery_repeat1] = aux_sym__subquery_repeat1,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_group_by_clause_repeat1] = aux_sym_group_by_clause_repeat1,
  [aux_sym_membership_condition_repeat1] = aux_sym_membership_condition_repeat1,
  [alias_sym_function] = alias_sym_function,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_describe_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__aliased_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__offset_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_NULL_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_TRUE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_FALSE_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compound_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compound_condition_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compound_condition_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_membership_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_like_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regexp_condition_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_describe_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__subquery] = {
    .visible = false,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__aliased_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__aliasable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__query_table_expression_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_join_type] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_having_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__offset_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_param] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element_access] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_range_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_null_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_membership_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_like_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_matching_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_list] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__subquery_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_membership_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_content = 2,
  field_function = 3,
  field_left = 4,
  field_limit = 5,
  field_offset = 6,
  field_operator = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_content] = "content",
  [field_function] = "function",
  [field_left] = "left",
  [field_limit] = "limit",
  [field_offset] = "offset",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_offset, 0, .inherited = true},
  [2] =
    {field_content, 1},
  [3] =
    {field_offset, 1},
  [4] =
    {field_limit, 1},
  [5] =
    {field_arguments, 1},
  [6] =
    {field_limit, 1},
    {field_offset, 2, .inherited = true},
  [8] =
    {field_arguments, 1},
    {field_arguments, 2},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_limit, 3},
    {field_offset, 1},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
    {field_right, 3},
    {field_right, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_function,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '$') ADVANCE(298);
      if (lookahead == '&') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(143)
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(298);
      if (lookahead == '&') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(298);
      if (lookahead == '&') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(284);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 68:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 69:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 73:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(51);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 134:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 135:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 136:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 138:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(286);
      END_STATE();
    case 142:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 143:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(142)
      END_STATE();
    case 144:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(152)
      END_STATE();
    case 145:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(152)
      if (lookahead == '\r') SKIP(144)
      END_STATE();
    case 146:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(153)
      END_STATE();
    case 147:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(153)
      if (lookahead == '\r') SKIP(146)
      END_STATE();
    case 148:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(154)
      END_STATE();
    case 149:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(154)
      if (lookahead == '\r') SKIP(148)
      END_STATE();
    case 150:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(155)
      END_STATE();
    case 151:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') SKIP(155)
      if (lookahead == '\r') SKIP(150)
      END_STATE();
    case 152:
      if (eof) ADVANCE(156);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(145)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(152)
      END_STATE();
    case 153:
      if (eof) ADVANCE(156);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '\\') SKIP(147)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(153)
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') SKIP(149)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(154)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '\\') SKIP(151)
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(115);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(155)
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_describe_statement_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_describe_statement_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__aliased_expression_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__aliased_expression_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_join_clause_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_having_condition_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__offset_clause_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__offset_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(281);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(284);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '$') ADVANCE(295);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(279);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_argument_reference_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead == '>') ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_compound_condition_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_compound_condition_token2);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_compound_condition_token3);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_compound_condition_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_range_condition_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_null_condition_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_membership_condition_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_membership_condition_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_like_condition_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_regexp_condition_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 152},
  [5] = {.lex_state = 152},
  [6] = {.lex_state = 152},
  [7] = {.lex_state = 152},
  [8] = {.lex_state = 152},
  [9] = {.lex_state = 152},
  [10] = {.lex_state = 152},
  [11] = {.lex_state = 152},
  [12] = {.lex_state = 152},
  [13] = {.lex_state = 152},
  [14] = {.lex_state = 152},
  [15] = {.lex_state = 152},
  [16] = {.lex_state = 152},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 153},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 154},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 155},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 155},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 155},
  [85] = {.lex_state = 155},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 154},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 154},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 154},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 155},
  [95] = {.lex_state = 155},
  [96] = {.lex_state = 154},
  [97] = {.lex_state = 154},
  [98] = {.lex_state = 154},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 154},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 154},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 154},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 155},
  [112] = {.lex_state = 154},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 154},
  [115] = {.lex_state = 154},
  [116] = {.lex_state = 154},
  [117] = {.lex_state = 154},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 154},
  [120] = {.lex_state = 155},
  [121] = {.lex_state = 155},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 155},
  [125] = {.lex_state = 155},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 155},
  [130] = {.lex_state = 155},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 155},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 155},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 155},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 153},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 153},
  [150] = {.lex_state = 152},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 155},
  [157] = {.lex_state = 152},
  [158] = {.lex_state = 155},
  [159] = {.lex_state = 155},
  [160] = {.lex_state = 155},
  [161] = {.lex_state = 152},
  [162] = {.lex_state = 155},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 152},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 152},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 23},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 23},
  [203] = {.lex_state = 23},
  [204] = {.lex_state = 23},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 23},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 152},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 153},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 153},
  [270] = {.lex_state = 17},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 17},
  [298] = {.lex_state = 17},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 17},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 17},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 17},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 17},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 27},
  [326] = {.lex_state = 27},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 27},
  [332] = {.lex_state = 153},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 27},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 27},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 153},
  [344] = {.lex_state = 27},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 31},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 153},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 31},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 276},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 31},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 31},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 276},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 21},
  [395] = {.lex_state = 276},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 276},
  [398] = {.lex_state = 276},
  [399] = {.lex_state = 21},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 31},
  [406] = {.lex_state = 153},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_describe_statement_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__aliased_expression_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_join_type_token1] = ACTIONS(1),
    [aux_sym_join_type_token2] = ACTIONS(1),
    [aux_sym_join_type_token3] = ACTIONS(1),
    [aux_sym_join_type_token4] = ACTIONS(1),
    [aux_sym_join_type_token5] = ACTIONS(1),
    [aux_sym_join_clause_token1] = ACTIONS(1),
    [aux_sym_join_clause_token2] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_having_condition_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token3] = ACTIONS(1),
    [aux_sym__offset_clause_token1] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [aux_sym_NULL_token1] = ACTIONS(1),
    [aux_sym_TRUE_token1] = ACTIONS(1),
    [aux_sym_FALSE_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_argument_reference_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [aux_sym_compound_condition_token1] = ACTIONS(1),
    [aux_sym_compound_condition_token2] = ACTIONS(1),
    [aux_sym_compound_condition_token3] = ACTIONS(1),
    [aux_sym_range_condition_token1] = ACTIONS(1),
    [aux_sym_null_condition_token1] = ACTIONS(1),
    [aux_sym_membership_condition_token1] = ACTIONS(1),
    [aux_sym_like_condition_token1] = ACTIONS(1),
    [aux_sym_regexp_condition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(404),
    [sym__statement] = STATE(189),
    [sym_describe_statement] = STATE(264),
    [sym_select_statement] = STATE(264),
    [sym__subquery] = STATE(268),
    [sym_select_clause] = STATE(333),
    [aux_sym_source_file_repeat1] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_describe_statement_token1] = ACTIONS(7),
    [aux_sym_select_clause_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_arguments,
    ACTIONS(15), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(11), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(21), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(11), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(25), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(29), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(33), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(37), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(41), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(45), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(49), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(53), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(57), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(61), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(65), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      aux_sym_order_by_clause_token3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_compound_condition_token3,
      aux_sym_membership_condition_token1,
    ACTIONS(69), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_having_condition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [676] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      aux_sym_compound_condition_token1,
    STATE(86), 1,
      sym_argument_reference,
    STATE(332), 1,
      sym__expression_list,
    STATE(319), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(270), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(122), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [746] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      aux_sym_compound_condition_token1,
    STATE(4), 1,
      sym_argument_reference,
    STATE(343), 1,
      sym__expression_list,
    STATE(171), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(172), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(26), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [816] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      aux_sym_compound_condition_token1,
    STATE(86), 1,
      sym_argument_reference,
    STATE(332), 1,
      sym__expression_list,
    STATE(319), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(310), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(122), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [886] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      aux_sym_compound_condition_token1,
    STATE(86), 1,
      sym_argument_reference,
    STATE(332), 1,
      sym__expression_list,
    STATE(319), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(314), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(122), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [956] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      aux_sym_compound_condition_token1,
    STATE(4), 1,
      sym_argument_reference,
    STATE(343), 1,
      sym__expression_list,
    STATE(171), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(165), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(26), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1026] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(117), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(332), 1,
      sym__expression_list,
    STATE(319), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(281), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(89), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1096] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      aux_sym_compound_condition_token1,
    STATE(4), 1,
      sym_argument_reference,
    STATE(343), 1,
      sym__expression_list,
    STATE(171), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(177), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(26), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1166] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      aux_sym_compound_condition_token1,
    STATE(4), 1,
      sym_argument_reference,
    STATE(343), 1,
      sym__expression_list,
    STATE(171), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(173), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(26), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1236] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(117), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(332), 1,
      sym__expression_list,
    STATE(319), 2,
      sym_like_condition,
      sym_regexp_condition,
    STATE(307), 7,
      sym_comparison_condition,
      sym_compound_condition,
      sym_range_condition,
      sym_null_condition,
      sym_membership_condition,
      sym_pattern_matching_condition,
      sym__condition,
    STATE(89), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(129), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(131), 1,
      aux_sym_range_condition_token1,
    ACTIONS(133), 1,
      aux_sym_null_condition_token1,
    ACTIONS(135), 1,
      aux_sym_membership_condition_token1,
    ACTIONS(137), 1,
      aux_sym_like_condition_token1,
    ACTIONS(139), 1,
      aux_sym_regexp_condition_token1,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 5,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(119), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [1359] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      aux_sym_NULL_token1,
    ACTIONS(145), 1,
      aux_sym_TRUE_token1,
    ACTIONS(147), 1,
      aux_sym_FALSE_token1,
    ACTIONS(149), 1,
      sym_integer,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym_argument_reference,
    STATE(130), 3,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym__query_table_expression_clause,
    STATE(127), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1415] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      aux_sym_NULL_token1,
    ACTIONS(145), 1,
      aux_sym_TRUE_token1,
    ACTIONS(147), 1,
      aux_sym_FALSE_token1,
    ACTIONS(149), 1,
      sym_integer,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym_argument_reference,
    STATE(159), 3,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym__query_table_expression_clause,
    STATE(127), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1471] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      aux_sym_NULL_token1,
    ACTIONS(163), 1,
      aux_sym_TRUE_token1,
    ACTIONS(165), 1,
      aux_sym_FALSE_token1,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_argument_reference,
    STATE(130), 3,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym__query_table_expression_clause,
    STATE(92), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1527] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      aux_sym_NULL_token1,
    ACTIONS(145), 1,
      aux_sym_TRUE_token1,
    ACTIONS(147), 1,
      aux_sym_FALSE_token1,
    ACTIONS(149), 1,
      sym_integer,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym_argument_reference,
    STATE(160), 3,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym__query_table_expression_clause,
    STATE(127), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1583] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      aux_sym_NULL_token1,
    ACTIONS(163), 1,
      aux_sym_TRUE_token1,
    ACTIONS(165), 1,
      aux_sym_FALSE_token1,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_argument_reference,
    STATE(140), 3,
      sym__aliased_expression,
      sym__aliasable_expression,
      sym__query_table_expression_clause,
    STATE(92), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1639] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(190), 1,
      sym_argument_reference,
    STATE(308), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(230), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1694] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_select_clause_token1,
    ACTIONS(201), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(340), 1,
      sym_select_clause,
    STATE(350), 1,
      sym__subquery,
    STATE(248), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1751] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_select_clause_token1,
    ACTIONS(203), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(340), 1,
      sym_select_clause,
    STATE(381), 1,
      sym__subquery,
    STATE(246), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1808] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_select_clause_token1,
    ACTIONS(203), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(340), 1,
      sym_select_clause,
    STATE(391), 1,
      sym__subquery,
    STATE(246), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1865] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_select_clause_token1,
    ACTIONS(201), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(340), 1,
      sym_select_clause,
    STATE(351), 1,
      sym__subquery,
    STATE(248), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1922] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(251), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [1976] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(254), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2030] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(190), 1,
      sym_argument_reference,
    STATE(339), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(230), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2082] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(241), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2136] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_STAR,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(256), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2190] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(253), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym_arguments,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [2283] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_arguments,
    ACTIONS(11), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(15), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [2322] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(155), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2373] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(260), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2424] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(175), 1,
      sym_where_clause,
    STATE(183), 1,
      sym_group_by_clause,
    STATE(201), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(380), 1,
      sym_join_type,
    STATE(94), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [2482] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(6), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_NULL_token1,
    ACTIONS(145), 1,
      aux_sym_TRUE_token1,
    ACTIONS(147), 1,
      aux_sym_FALSE_token1,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      sym_integer,
    STATE(126), 1,
      sym_argument_reference,
    STATE(142), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2578] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(277), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(188), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2626] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(282), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2674] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(150), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2722] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(167), 1,
      sym_where_clause,
    STATE(185), 1,
      sym_group_by_clause,
    STATE(207), 1,
      sym_order_by_clause,
    STATE(232), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(380), 1,
      sym_join_type,
    STATE(47), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(283), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [2780] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(151), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2828] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(277), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2876] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(301), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2924] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(186), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [2972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(148), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3020] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(145), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3068] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(146), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(295), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(291), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3212] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(280), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3260] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(305), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(259), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3308] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(153), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3356] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(309), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(157), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3404] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(154), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3452] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(257), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3500] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(252), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3548] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(93), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3596] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(247), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3644] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(283), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3692] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_NULL_token1,
    ACTIONS(163), 1,
      aux_sym_TRUE_token1,
    ACTIONS(165), 1,
      aux_sym_FALSE_token1,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      sym_integer,
    STATE(90), 1,
      sym_argument_reference,
    STATE(116), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3740] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(210), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3788] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(327), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(121), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3836] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(272), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(250), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3932] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(120), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [3980] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_NULL_token1,
    ACTIONS(77), 1,
      aux_sym_TRUE_token1,
    ACTIONS(79), 1,
      aux_sym_FALSE_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      sym_integer,
    STATE(86), 1,
      sym_argument_reference,
    STATE(239), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [4028] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(289), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [4076] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(248), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [4124] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_NULL_token1,
    ACTIONS(99), 1,
      aux_sym_TRUE_token1,
    ACTIONS(101), 1,
      aux_sym_FALSE_token1,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      sym_integer,
    STATE(4), 1,
      sym_argument_reference,
    STATE(152), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [4172] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      sym_integer,
    STATE(190), 1,
      sym_argument_reference,
    STATE(267), 12,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym__number,
      sym_string,
      sym_bind_param,
      sym_field_access,
      sym_array_element_access,
      sym_binary_expression,
      sym__simple_expression,
      sym_built_in_function_expression,
      sym__expression,
  [4220] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(343), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(182), 1,
      sym_where_clause,
    STATE(198), 1,
      sym_group_by_clause,
    STATE(229), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(380), 1,
      sym_join_type,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
  [4276] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(343), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(187), 1,
      sym_where_clause,
    STATE(200), 1,
      sym_group_by_clause,
    STATE(232), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(237), 1,
      sym_order_by_clause,
    STATE(380), 1,
      sym_join_type,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
  [4332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_arguments,
    ACTIONS(11), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(15), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(23), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4426] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(367), 1,
      aux_sym_range_condition_token1,
    ACTIONS(369), 1,
      aux_sym_null_condition_token1,
    ACTIONS(371), 1,
      aux_sym_membership_condition_token1,
    ACTIONS(373), 1,
      aux_sym_like_condition_token1,
    ACTIONS(375), 1,
      aux_sym_regexp_condition_token1,
    STATE(318), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
    ACTIONS(361), 5,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(15), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym__aliased_expression_token1,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(379), 10,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [4565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4592] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_join_type_token1,
    ACTIONS(395), 1,
      aux_sym_join_clause_token1,
    STATE(380), 1,
      sym_join_type,
    STATE(94), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(392), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [4627] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    STATE(197), 1,
      sym_where_clause,
    STATE(222), 1,
      sym_group_by_clause,
    STATE(232), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(261), 1,
      sym_order_by_clause,
    STATE(380), 1,
      sym_join_type,
    STATE(111), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
  [4682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(47), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(51), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(59), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(27), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(71), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [5006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [5033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(67), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [5087] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_join_type_token1,
    ACTIONS(261), 1,
      aux_sym_join_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    STATE(193), 1,
      sym_where_clause,
    STATE(220), 1,
      sym_group_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(240), 1,
      sym_order_by_clause,
    STATE(380), 1,
      sym_join_type,
    STATE(94), 2,
      sym_join_clause,
      aux_sym__subquery_repeat1,
    ACTIONS(259), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
  [5142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(63), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(43), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(39), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(31), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(35), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
      aux_sym_range_condition_token1,
      aux_sym_null_condition_token1,
      aux_sym_membership_condition_token1,
      aux_sym_like_condition_token1,
      aux_sym_regexp_condition_token1,
  [5331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(55), 12,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(400), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(402), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5410] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(367), 1,
      aux_sym_range_condition_token1,
    ACTIONS(369), 1,
      aux_sym_null_condition_token1,
    ACTIONS(371), 1,
      aux_sym_membership_condition_token1,
    ACTIONS(373), 1,
      aux_sym_like_condition_token1,
    ACTIONS(375), 1,
      aux_sym_regexp_condition_token1,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
    ACTIONS(361), 5,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(23), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(15), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym__aliased_expression_token1,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(408), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(379), 8,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(47), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(71), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(59), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(35), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(27), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(412), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(63), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(43), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(51), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(39), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(417), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(55), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(31), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(421), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(67), 10,
      aux_sym__aliased_expression_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [5990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(423), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(427), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(431), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_membership_condition_token1,
  [6060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      aux_sym_having_condition_token1,
    STATE(180), 1,
      aux_sym_group_by_clause_repeat1,
    STATE(195), 1,
      sym_having_condition,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(435), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(441), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token1,
      aux_sym_compound_condition_token2,
      aux_sym_membership_condition_token1,
  [6112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_order_by_clause_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(445), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_having_condition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(449), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(453), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(457), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(461), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(421), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      aux_sym_order_by_clause_token2,
    ACTIONS(473), 1,
      aux_sym_order_by_clause_token3,
    STATE(181), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(412), 11,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(417), 11,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(417), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_order_by_clause_token3,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(445), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_RPAREN,
      aux_sym_having_condition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_by_clause_token2,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(421), 11,
      anon_sym_RPAREN,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(483), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(487), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(495), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(491), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(15), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(11), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6511] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(183), 1,
      sym_group_by_clause,
    STATE(201), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [6545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(503), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(491), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(511), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(517), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(515), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(491), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(519), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6687] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(184), 1,
      sym_group_by_clause,
    STATE(199), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(525), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(537), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_compound_condition_token2,
  [6801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      aux_sym_having_condition_token1,
    STATE(161), 1,
      aux_sym_group_by_clause_repeat1,
    STATE(194), 1,
      sym_having_condition,
    ACTIONS(541), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      aux_sym_order_by_clause_token2,
    ACTIONS(547), 1,
      aux_sym_order_by_clause_token3,
    STATE(161), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6852] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(209), 1,
      sym_group_by_clause,
    STATE(227), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(199), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [6912] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(208), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [6940] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(201), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [6968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym_having_condition_token1,
    STATE(195), 1,
      sym_having_condition,
    STATE(214), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(435), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [6992] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(198), 1,
      sym_group_by_clause,
    STATE(229), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(223), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
    ACTIONS(469), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7045] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_describe_statement_token1,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    STATE(268), 1,
      sym__subquery,
    STATE(333), 1,
      sym_select_clause,
    STATE(191), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(264), 2,
      sym_describe_statement,
      sym_select_statement,
  [7072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(11), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7091] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      aux_sym_describe_statement_token1,
    ACTIONS(558), 1,
      aux_sym_select_clause_token1,
    STATE(268), 1,
      sym__subquery,
    STATE(333), 1,
      sym_select_clause,
    STATE(191), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(264), 2,
      sym_describe_statement,
      sym_select_statement,
  [7118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(21), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_group_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    STATE(245), 1,
      sym_order_by_clause,
  [7166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7211] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    STATE(220), 1,
      sym_group_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(240), 1,
      sym_order_by_clause,
  [7242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(227), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [7290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(229), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [7338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(53), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(61), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(45), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(49), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [7440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(271), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(235), 1,
      sym_limit_clause,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [7462] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(226), 1,
      sym_order_by_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(29), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(57), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(33), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym_having_condition_token1,
    STATE(161), 1,
      aux_sym_group_by_clause_repeat1,
    STATE(194), 1,
      sym_having_condition,
    ACTIONS(541), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(65), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(69), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(37), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      aux_sym__aliased_expression_token1,
      aux_sym_from_clause_token1,
      sym_identifier,
    ACTIONS(41), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    STATE(245), 1,
      sym_order_by_clause,
  [7673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      sym__offset_clause,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [7692] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    STATE(240), 1,
      sym_order_by_clause,
  [7717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(545), 2,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
    ACTIONS(543), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__offset_clause_token1,
      aux_sym_limit_clause_token1,
  [7734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
    STATE(255), 1,
      sym_order_by_clause,
  [7759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7771] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(235), 1,
      sym_limit_clause,
    ACTIONS(565), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      aux_sym_from_clause_token1,
    ACTIONS(381), 1,
      aux_sym__aliased_expression_token1,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(349), 1,
      aux_sym_limit_clause_token1,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [7980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__offset_clause,
    STATE(236), 1,
      sym_limit_clause,
  [7999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_select_clause,
    STATE(320), 2,
      sym__subquery,
      sym__expression_list,
  [8033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_select_clause,
    STATE(317), 2,
      sym__subquery,
      sym__expression_list,
  [8050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_select_clause,
    STATE(324), 2,
      sym__subquery,
      sym__expression_list,
  [8067] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__offset_clause,
    STATE(234), 1,
      sym_limit_clause,
  [8086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(461), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_select_clause,
    STATE(337), 2,
      sym__subquery,
      sym__expression_list,
  [8150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(453), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__offset_clause,
    STATE(235), 1,
      sym_limit_clause,
  [8246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_select_clause,
    STATE(286), 2,
      sym__subquery,
      sym__expression_list,
  [8293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(427), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(398), 1,
      aux_sym_limit_clause_token1,
    STATE(231), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym__offset_clause,
  [8338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_range_condition_token1,
    ACTIONS(603), 1,
      aux_sym_membership_condition_token1,
    ACTIONS(605), 1,
      aux_sym_like_condition_token1,
    ACTIONS(607), 1,
      aux_sym_regexp_condition_token1,
  [8354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    STATE(238), 1,
      sym__offset_clause,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    ACTIONS(609), 3,
      ts_builtin_sym_end,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [8380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [8390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym__offset_clause_token1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      sym__offset_clause,
  [8406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [8428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_range_condition_token1,
    ACTIONS(621), 1,
      aux_sym_membership_condition_token1,
    ACTIONS(623), 1,
      aux_sym_like_condition_token1,
    ACTIONS(625), 1,
      aux_sym_regexp_condition_token1,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_membership_condition_repeat1,
  [8490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      aux_sym_from_clause_token1,
    STATE(274), 1,
      aux_sym_select_clause_repeat1,
  [8503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_membership_condition_repeat1,
  [8529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(137), 1,
      sym_string,
  [8566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(657), 1,
      aux_sym_compound_condition_token3,
  [8590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(102), 1,
      sym_string,
  [8625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_membership_condition_repeat1,
  [8638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_membership_condition_repeat1,
  [8651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(340), 1,
      sym_select_clause,
    STATE(375), 1,
      sym__subquery,
  [8677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(340), 1,
      sym_select_clause,
    STATE(374), 1,
      sym__subquery,
  [8701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      aux_sym_from_clause_token1,
    STATE(274), 1,
      aux_sym_select_clause_repeat1,
  [8725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(121), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(114), 1,
      sym_string,
  [8767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(219), 1,
      sym_string,
  [8798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 3,
      ts_builtin_sym_end,
      aux_sym_describe_statement_token1,
      aux_sym_select_clause_token1,
  [8836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(657), 1,
      aux_sym_compound_condition_token3,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [8880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      aux_sym_from_clause_token1,
    STATE(292), 1,
      aux_sym_select_clause_repeat1,
  [8893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_compound_condition_token2,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token3,
  [8913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [8953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [8966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(9), 1,
      sym_string,
  [8979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_membership_condition_repeat1,
  [8992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_group_by_clause_repeat1,
  [9005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_RPAREN,
      aux_sym_compound_condition_token2,
      aux_sym_compound_condition_token3,
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_membership_condition_repeat1,
  [9027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_membership_condition_repeat1,
  [9040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(340), 1,
      sym_select_clause,
    STATE(352), 1,
      sym__subquery,
  [9053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_membership_condition_repeat1,
  [9066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_membership_condition_repeat1,
  [9079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_integer,
    STATE(266), 1,
      sym__number,
  [9089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_integer,
    STATE(225), 1,
      sym__number,
  [9099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym__expression_list,
  [9109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      aux_sym_NULL_token1,
    ACTIONS(710), 1,
      aux_sym_compound_condition_token1,
  [9119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym__expression_list,
  [9129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_integer,
    STATE(225), 1,
      sym__number,
  [9139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_integer,
    STATE(228), 1,
      sym__number,
  [9149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(718), 1,
      aux_sym_membership_condition_token1,
  [9159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym_from_clause_token1,
    STATE(53), 1,
      sym_from_clause,
  [9169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_from_clause_token1,
    STATE(85), 1,
      sym_from_clause,
  [9179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_join_type_token5,
    ACTIONS(726), 1,
      aux_sym_join_clause_token1,
  [9189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_integer,
    STATE(228), 1,
      sym__number,
  [9199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_integer,
    STATE(221), 1,
      sym__number,
  [9217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [9225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      aux_sym_from_clause_token1,
    STATE(95), 1,
      sym_from_clause,
  [9235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym__expression_list,
  [9245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      aux_sym_NULL_token1,
    ACTIONS(736), 1,
      aux_sym_compound_condition_token1,
  [9255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      aux_sym_compound_condition_token1,
    ACTIONS(740), 1,
      aux_sym_membership_condition_token1,
  [9265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_integer,
    STATE(263), 1,
      sym__number,
  [9275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      sym__expression_list,
  [9285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_argument_reference_token1,
  [9292] = 2,
    ACTIONS(748), 1,
      aux_sym_string_token2,
    ACTIONS(750), 1,
      sym_comment,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
  [9306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_argument_reference_token1,
  [9313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_NULL_token1,
  [9341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_SQUOTE,
  [9348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [9362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_identifier,
  [9369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
  [9376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_join_clause_token2,
  [9383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_identifier,
  [9390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      aux_sym_argument_reference_token1,
  [9397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SQUOTE,
  [9404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [9418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
  [9425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_membership_condition_token1,
  [9432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
  [9439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_identifier,
  [9446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_SQUOTE,
  [9453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_join_clause_token2,
  [9474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_join_clause_token1,
  [9481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [9488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [9495] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(792), 1,
      aux_sym_string_token1,
  [9502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym_NULL_token1,
  [9509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [9523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_join_clause_token1,
  [9530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [9537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [9544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
  [9551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SQUOTE,
  [9558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      aux_sym_join_clause_token1,
  [9565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_identifier,
  [9572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SQUOTE,
  [9586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      aux_sym_argument_reference_token1,
  [9593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
  [9600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [9607] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym_string_token1,
  [9614] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(812), 1,
      aux_sym_string_token2,
  [9621] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_string_token2,
  [9628] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym_string_token1,
  [9635] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_string_token2,
  [9642] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(820), 1,
      aux_sym_string_token1,
  [9649] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_string_token1,
  [9656] = 2,
    ACTIONS(750), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_string_token2,
  [9663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_from_clause_token1,
  [9670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LPAREN,
  [9677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym_argument_reference_token1,
  [9684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LPAREN,
  [9691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [9698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
  [9705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym_membership_condition_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 412,
  [SMALL_STATE(12)] = 456,
  [SMALL_STATE(13)] = 500,
  [SMALL_STATE(14)] = 544,
  [SMALL_STATE(15)] = 588,
  [SMALL_STATE(16)] = 632,
  [SMALL_STATE(17)] = 676,
  [SMALL_STATE(18)] = 746,
  [SMALL_STATE(19)] = 816,
  [SMALL_STATE(20)] = 886,
  [SMALL_STATE(21)] = 956,
  [SMALL_STATE(22)] = 1026,
  [SMALL_STATE(23)] = 1096,
  [SMALL_STATE(24)] = 1166,
  [SMALL_STATE(25)] = 1236,
  [SMALL_STATE(26)] = 1306,
  [SMALL_STATE(27)] = 1359,
  [SMALL_STATE(28)] = 1415,
  [SMALL_STATE(29)] = 1471,
  [SMALL_STATE(30)] = 1527,
  [SMALL_STATE(31)] = 1583,
  [SMALL_STATE(32)] = 1639,
  [SMALL_STATE(33)] = 1694,
  [SMALL_STATE(34)] = 1751,
  [SMALL_STATE(35)] = 1808,
  [SMALL_STATE(36)] = 1865,
  [SMALL_STATE(37)] = 1922,
  [SMALL_STATE(38)] = 1976,
  [SMALL_STATE(39)] = 2030,
  [SMALL_STATE(40)] = 2082,
  [SMALL_STATE(41)] = 2136,
  [SMALL_STATE(42)] = 2190,
  [SMALL_STATE(43)] = 2244,
  [SMALL_STATE(44)] = 2283,
  [SMALL_STATE(45)] = 2322,
  [SMALL_STATE(46)] = 2373,
  [SMALL_STATE(47)] = 2424,
  [SMALL_STATE(48)] = 2482,
  [SMALL_STATE(49)] = 2530,
  [SMALL_STATE(50)] = 2578,
  [SMALL_STATE(51)] = 2626,
  [SMALL_STATE(52)] = 2674,
  [SMALL_STATE(53)] = 2722,
  [SMALL_STATE(54)] = 2780,
  [SMALL_STATE(55)] = 2828,
  [SMALL_STATE(56)] = 2876,
  [SMALL_STATE(57)] = 2924,
  [SMALL_STATE(58)] = 2972,
  [SMALL_STATE(59)] = 3020,
  [SMALL_STATE(60)] = 3068,
  [SMALL_STATE(61)] = 3116,
  [SMALL_STATE(62)] = 3164,
  [SMALL_STATE(63)] = 3212,
  [SMALL_STATE(64)] = 3260,
  [SMALL_STATE(65)] = 3308,
  [SMALL_STATE(66)] = 3356,
  [SMALL_STATE(67)] = 3404,
  [SMALL_STATE(68)] = 3452,
  [SMALL_STATE(69)] = 3500,
  [SMALL_STATE(70)] = 3548,
  [SMALL_STATE(71)] = 3596,
  [SMALL_STATE(72)] = 3644,
  [SMALL_STATE(73)] = 3692,
  [SMALL_STATE(74)] = 3740,
  [SMALL_STATE(75)] = 3788,
  [SMALL_STATE(76)] = 3836,
  [SMALL_STATE(77)] = 3884,
  [SMALL_STATE(78)] = 3932,
  [SMALL_STATE(79)] = 3980,
  [SMALL_STATE(80)] = 4028,
  [SMALL_STATE(81)] = 4076,
  [SMALL_STATE(82)] = 4124,
  [SMALL_STATE(83)] = 4172,
  [SMALL_STATE(84)] = 4220,
  [SMALL_STATE(85)] = 4276,
  [SMALL_STATE(86)] = 4332,
  [SMALL_STATE(87)] = 4362,
  [SMALL_STATE(88)] = 4398,
  [SMALL_STATE(89)] = 4426,
  [SMALL_STATE(90)] = 4474,
  [SMALL_STATE(91)] = 4504,
  [SMALL_STATE(92)] = 4532,
  [SMALL_STATE(93)] = 4565,
  [SMALL_STATE(94)] = 4592,
  [SMALL_STATE(95)] = 4627,
  [SMALL_STATE(96)] = 4682,
  [SMALL_STATE(97)] = 4709,
  [SMALL_STATE(98)] = 4736,
  [SMALL_STATE(99)] = 4763,
  [SMALL_STATE(100)] = 4790,
  [SMALL_STATE(101)] = 4817,
  [SMALL_STATE(102)] = 4844,
  [SMALL_STATE(103)] = 4871,
  [SMALL_STATE(104)] = 4898,
  [SMALL_STATE(105)] = 4925,
  [SMALL_STATE(106)] = 4952,
  [SMALL_STATE(107)] = 4979,
  [SMALL_STATE(108)] = 5006,
  [SMALL_STATE(109)] = 5033,
  [SMALL_STATE(110)] = 5060,
  [SMALL_STATE(111)] = 5087,
  [SMALL_STATE(112)] = 5142,
  [SMALL_STATE(113)] = 5169,
  [SMALL_STATE(114)] = 5196,
  [SMALL_STATE(115)] = 5223,
  [SMALL_STATE(116)] = 5250,
  [SMALL_STATE(117)] = 5277,
  [SMALL_STATE(118)] = 5304,
  [SMALL_STATE(119)] = 5331,
  [SMALL_STATE(120)] = 5358,
  [SMALL_STATE(121)] = 5384,
  [SMALL_STATE(122)] = 5410,
  [SMALL_STATE(123)] = 5452,
  [SMALL_STATE(124)] = 5477,
  [SMALL_STATE(125)] = 5500,
  [SMALL_STATE(126)] = 5523,
  [SMALL_STATE(127)] = 5550,
  [SMALL_STATE(128)] = 5580,
  [SMALL_STATE(129)] = 5604,
  [SMALL_STATE(130)] = 5626,
  [SMALL_STATE(131)] = 5648,
  [SMALL_STATE(132)] = 5672,
  [SMALL_STATE(133)] = 5696,
  [SMALL_STATE(134)] = 5720,
  [SMALL_STATE(135)] = 5744,
  [SMALL_STATE(136)] = 5770,
  [SMALL_STATE(137)] = 5794,
  [SMALL_STATE(138)] = 5818,
  [SMALL_STATE(139)] = 5842,
  [SMALL_STATE(140)] = 5866,
  [SMALL_STATE(141)] = 5892,
  [SMALL_STATE(142)] = 5916,
  [SMALL_STATE(143)] = 5940,
  [SMALL_STATE(144)] = 5966,
  [SMALL_STATE(145)] = 5990,
  [SMALL_STATE(146)] = 6014,
  [SMALL_STATE(147)] = 6038,
  [SMALL_STATE(148)] = 6060,
  [SMALL_STATE(149)] = 6090,
  [SMALL_STATE(150)] = 6112,
  [SMALL_STATE(151)] = 6136,
  [SMALL_STATE(152)] = 6160,
  [SMALL_STATE(153)] = 6184,
  [SMALL_STATE(154)] = 6208,
  [SMALL_STATE(155)] = 6232,
  [SMALL_STATE(156)] = 6256,
  [SMALL_STATE(157)] = 6277,
  [SMALL_STATE(158)] = 6306,
  [SMALL_STATE(159)] = 6329,
  [SMALL_STATE(160)] = 6352,
  [SMALL_STATE(161)] = 6373,
  [SMALL_STATE(162)] = 6398,
  [SMALL_STATE(163)] = 6421,
  [SMALL_STATE(164)] = 6441,
  [SMALL_STATE(165)] = 6461,
  [SMALL_STATE(166)] = 6483,
  [SMALL_STATE(167)] = 6511,
  [SMALL_STATE(168)] = 6545,
  [SMALL_STATE(169)] = 6565,
  [SMALL_STATE(170)] = 6585,
  [SMALL_STATE(171)] = 6605,
  [SMALL_STATE(172)] = 6625,
  [SMALL_STATE(173)] = 6647,
  [SMALL_STATE(174)] = 6667,
  [SMALL_STATE(175)] = 6687,
  [SMALL_STATE(176)] = 6721,
  [SMALL_STATE(177)] = 6741,
  [SMALL_STATE(178)] = 6761,
  [SMALL_STATE(179)] = 6781,
  [SMALL_STATE(180)] = 6801,
  [SMALL_STATE(181)] = 6827,
  [SMALL_STATE(182)] = 6852,
  [SMALL_STATE(183)] = 6884,
  [SMALL_STATE(184)] = 6912,
  [SMALL_STATE(185)] = 6940,
  [SMALL_STATE(186)] = 6968,
  [SMALL_STATE(187)] = 6992,
  [SMALL_STATE(188)] = 7024,
  [SMALL_STATE(189)] = 7045,
  [SMALL_STATE(190)] = 7072,
  [SMALL_STATE(191)] = 7091,
  [SMALL_STATE(192)] = 7118,
  [SMALL_STATE(193)] = 7135,
  [SMALL_STATE(194)] = 7166,
  [SMALL_STATE(195)] = 7181,
  [SMALL_STATE(196)] = 7196,
  [SMALL_STATE(197)] = 7211,
  [SMALL_STATE(198)] = 7242,
  [SMALL_STATE(199)] = 7268,
  [SMALL_STATE(200)] = 7290,
  [SMALL_STATE(201)] = 7316,
  [SMALL_STATE(202)] = 7338,
  [SMALL_STATE(203)] = 7354,
  [SMALL_STATE(204)] = 7370,
  [SMALL_STATE(205)] = 7386,
  [SMALL_STATE(206)] = 7402,
  [SMALL_STATE(207)] = 7418,
  [SMALL_STATE(208)] = 7440,
  [SMALL_STATE(209)] = 7462,
  [SMALL_STATE(210)] = 7488,
  [SMALL_STATE(211)] = 7504,
  [SMALL_STATE(212)] = 7520,
  [SMALL_STATE(213)] = 7536,
  [SMALL_STATE(214)] = 7550,
  [SMALL_STATE(215)] = 7570,
  [SMALL_STATE(216)] = 7584,
  [SMALL_STATE(217)] = 7600,
  [SMALL_STATE(218)] = 7616,
  [SMALL_STATE(219)] = 7632,
  [SMALL_STATE(220)] = 7648,
  [SMALL_STATE(221)] = 7673,
  [SMALL_STATE(222)] = 7692,
  [SMALL_STATE(223)] = 7717,
  [SMALL_STATE(224)] = 7734,
  [SMALL_STATE(225)] = 7759,
  [SMALL_STATE(226)] = 7771,
  [SMALL_STATE(227)] = 7791,
  [SMALL_STATE(228)] = 7811,
  [SMALL_STATE(229)] = 7823,
  [SMALL_STATE(230)] = 7843,
  [SMALL_STATE(231)] = 7863,
  [SMALL_STATE(232)] = 7875,
  [SMALL_STATE(233)] = 7887,
  [SMALL_STATE(234)] = 7899,
  [SMALL_STATE(235)] = 7911,
  [SMALL_STATE(236)] = 7923,
  [SMALL_STATE(237)] = 7935,
  [SMALL_STATE(238)] = 7955,
  [SMALL_STATE(239)] = 7967,
  [SMALL_STATE(240)] = 7980,
  [SMALL_STATE(241)] = 7999,
  [SMALL_STATE(242)] = 8016,
  [SMALL_STATE(243)] = 8033,
  [SMALL_STATE(244)] = 8050,
  [SMALL_STATE(245)] = 8067,
  [SMALL_STATE(246)] = 8086,
  [SMALL_STATE(247)] = 8103,
  [SMALL_STATE(248)] = 8116,
  [SMALL_STATE(249)] = 8133,
  [SMALL_STATE(250)] = 8150,
  [SMALL_STATE(251)] = 8163,
  [SMALL_STATE(252)] = 8180,
  [SMALL_STATE(253)] = 8193,
  [SMALL_STATE(254)] = 8210,
  [SMALL_STATE(255)] = 8227,
  [SMALL_STATE(256)] = 8246,
  [SMALL_STATE(257)] = 8263,
  [SMALL_STATE(258)] = 8276,
  [SMALL_STATE(259)] = 8293,
  [SMALL_STATE(260)] = 8306,
  [SMALL_STATE(261)] = 8319,
  [SMALL_STATE(262)] = 8338,
  [SMALL_STATE(263)] = 8354,
  [SMALL_STATE(264)] = 8368,
  [SMALL_STATE(265)] = 8380,
  [SMALL_STATE(266)] = 8390,
  [SMALL_STATE(267)] = 8406,
  [SMALL_STATE(268)] = 8418,
  [SMALL_STATE(269)] = 8428,
  [SMALL_STATE(270)] = 8444,
  [SMALL_STATE(271)] = 8453,
  [SMALL_STATE(272)] = 8466,
  [SMALL_STATE(273)] = 8477,
  [SMALL_STATE(274)] = 8490,
  [SMALL_STATE(275)] = 8503,
  [SMALL_STATE(276)] = 8516,
  [SMALL_STATE(277)] = 8529,
  [SMALL_STATE(278)] = 8540,
  [SMALL_STATE(279)] = 8553,
  [SMALL_STATE(280)] = 8566,
  [SMALL_STATE(281)] = 8577,
  [SMALL_STATE(282)] = 8590,
  [SMALL_STATE(283)] = 8601,
  [SMALL_STATE(284)] = 8612,
  [SMALL_STATE(285)] = 8625,
  [SMALL_STATE(286)] = 8638,
  [SMALL_STATE(287)] = 8651,
  [SMALL_STATE(288)] = 8664,
  [SMALL_STATE(289)] = 8677,
  [SMALL_STATE(290)] = 8688,
  [SMALL_STATE(291)] = 8701,
  [SMALL_STATE(292)] = 8712,
  [SMALL_STATE(293)] = 8725,
  [SMALL_STATE(294)] = 8734,
  [SMALL_STATE(295)] = 8743,
  [SMALL_STATE(296)] = 8754,
  [SMALL_STATE(297)] = 8767,
  [SMALL_STATE(298)] = 8776,
  [SMALL_STATE(299)] = 8785,
  [SMALL_STATE(300)] = 8798,
  [SMALL_STATE(301)] = 8807,
  [SMALL_STATE(302)] = 8818,
  [SMALL_STATE(303)] = 8827,
  [SMALL_STATE(304)] = 8836,
  [SMALL_STATE(305)] = 8845,
  [SMALL_STATE(306)] = 8858,
  [SMALL_STATE(307)] = 8867,
  [SMALL_STATE(308)] = 8880,
  [SMALL_STATE(309)] = 8893,
  [SMALL_STATE(310)] = 8902,
  [SMALL_STATE(311)] = 8913,
  [SMALL_STATE(312)] = 8922,
  [SMALL_STATE(313)] = 8931,
  [SMALL_STATE(314)] = 8944,
  [SMALL_STATE(315)] = 8953,
  [SMALL_STATE(316)] = 8966,
  [SMALL_STATE(317)] = 8979,
  [SMALL_STATE(318)] = 8992,
  [SMALL_STATE(319)] = 9005,
  [SMALL_STATE(320)] = 9014,
  [SMALL_STATE(321)] = 9027,
  [SMALL_STATE(322)] = 9040,
  [SMALL_STATE(323)] = 9053,
  [SMALL_STATE(324)] = 9066,
  [SMALL_STATE(325)] = 9079,
  [SMALL_STATE(326)] = 9089,
  [SMALL_STATE(327)] = 9099,
  [SMALL_STATE(328)] = 9109,
  [SMALL_STATE(329)] = 9119,
  [SMALL_STATE(330)] = 9129,
  [SMALL_STATE(331)] = 9139,
  [SMALL_STATE(332)] = 9149,
  [SMALL_STATE(333)] = 9159,
  [SMALL_STATE(334)] = 9169,
  [SMALL_STATE(335)] = 9179,
  [SMALL_STATE(336)] = 9189,
  [SMALL_STATE(337)] = 9199,
  [SMALL_STATE(338)] = 9207,
  [SMALL_STATE(339)] = 9217,
  [SMALL_STATE(340)] = 9225,
  [SMALL_STATE(341)] = 9235,
  [SMALL_STATE(342)] = 9245,
  [SMALL_STATE(343)] = 9255,
  [SMALL_STATE(344)] = 9265,
  [SMALL_STATE(345)] = 9275,
  [SMALL_STATE(346)] = 9285,
  [SMALL_STATE(347)] = 9292,
  [SMALL_STATE(348)] = 9299,
  [SMALL_STATE(349)] = 9306,
  [SMALL_STATE(350)] = 9313,
  [SMALL_STATE(351)] = 9320,
  [SMALL_STATE(352)] = 9327,
  [SMALL_STATE(353)] = 9334,
  [SMALL_STATE(354)] = 9341,
  [SMALL_STATE(355)] = 9348,
  [SMALL_STATE(356)] = 9355,
  [SMALL_STATE(357)] = 9362,
  [SMALL_STATE(358)] = 9369,
  [SMALL_STATE(359)] = 9376,
  [SMALL_STATE(360)] = 9383,
  [SMALL_STATE(361)] = 9390,
  [SMALL_STATE(362)] = 9397,
  [SMALL_STATE(363)] = 9404,
  [SMALL_STATE(364)] = 9411,
  [SMALL_STATE(365)] = 9418,
  [SMALL_STATE(366)] = 9425,
  [SMALL_STATE(367)] = 9432,
  [SMALL_STATE(368)] = 9439,
  [SMALL_STATE(369)] = 9446,
  [SMALL_STATE(370)] = 9453,
  [SMALL_STATE(371)] = 9460,
  [SMALL_STATE(372)] = 9467,
  [SMALL_STATE(373)] = 9474,
  [SMALL_STATE(374)] = 9481,
  [SMALL_STATE(375)] = 9488,
  [SMALL_STATE(376)] = 9495,
  [SMALL_STATE(377)] = 9502,
  [SMALL_STATE(378)] = 9509,
  [SMALL_STATE(379)] = 9516,
  [SMALL_STATE(380)] = 9523,
  [SMALL_STATE(381)] = 9530,
  [SMALL_STATE(382)] = 9537,
  [SMALL_STATE(383)] = 9544,
  [SMALL_STATE(384)] = 9551,
  [SMALL_STATE(385)] = 9558,
  [SMALL_STATE(386)] = 9565,
  [SMALL_STATE(387)] = 9572,
  [SMALL_STATE(388)] = 9579,
  [SMALL_STATE(389)] = 9586,
  [SMALL_STATE(390)] = 9593,
  [SMALL_STATE(391)] = 9600,
  [SMALL_STATE(392)] = 9607,
  [SMALL_STATE(393)] = 9614,
  [SMALL_STATE(394)] = 9621,
  [SMALL_STATE(395)] = 9628,
  [SMALL_STATE(396)] = 9635,
  [SMALL_STATE(397)] = 9642,
  [SMALL_STATE(398)] = 9649,
  [SMALL_STATE(399)] = 9656,
  [SMALL_STATE(400)] = 9663,
  [SMALL_STATE(401)] = 9670,
  [SMALL_STATE(402)] = 9677,
  [SMALL_STATE(403)] = 9684,
  [SMALL_STATE(404)] = 9691,
  [SMALL_STATE(405)] = 9698,
  [SMALL_STATE(406)] = 9705,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element_access, 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_element_access, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, .production_id = 8),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, .production_id = 8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_param, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_param, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_function_expression, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in_function_expression, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_condition, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_condition, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subquery_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subquery_repeat1, 2), SHIFT_REPEAT(385),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subquery_repeat1, 2), SHIFT_REPEAT(335),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subquery_repeat1, 2), SHIFT_REPEAT(383),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_table_expression_clause, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(29),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regexp_condition, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regexp_condition, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_like_condition, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_like_condition, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_condition, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_condition, 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_condition, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_condition, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_like_condition, 4),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_like_condition, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regexp_condition, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regexp_condition, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_condition, 3, .production_id = 9),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_condition, 3, .production_id = 9),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(27),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(52),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_condition, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_condition, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_condition, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_condition, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_condition, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_condition, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_condition, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_condition, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_condition, 5, .production_id = 11),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_condition, 5, .production_id = 11),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_matching_condition, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_matching_condition, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_condition, 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_condition, 6),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_condition, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_condition, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_condition, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_condition, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_condition, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_condition, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_condition, 7),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_condition, 7),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_condition, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, .production_id = 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_clause, 2, .production_id = 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, .production_id = 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subquery, 7),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 3, .production_id = 7),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_describe_statement, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_membership_condition_repeat1, 2), SHIFT_REPEAT(249),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_membership_condition_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(39),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(83),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [832] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_oql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
