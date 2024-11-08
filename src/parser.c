#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_SEMI = 2,
  sym_module_name = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_COMMA = 7,
  aux_sym_method_name_token1 = 8,
  anon_sym_if = 9,
  anon_sym_while = 10,
  anon_sym_foreach = 11,
  anon_sym_forall = 12,
  anon_sym_else = 13,
  anon_sym_done = 14,
  anon_sym_message = 15,
  anon_sym_at_index = 16,
  anon_sym_list_count = 17,
  anon_sym_wait = 18,
  anon_sym_package = 19,
  anon_sym_agent = 20,
  anon_sym_extends = 21,
  anon_sym_import = 22,
  anon_sym_rule = 23,
  anon_sym_goal = 24,
  anon_sym_types = 25,
  anon_sym_formula = 26,
  anon_sym_inference = 27,
  anon_sym_body = 28,
  anon_sym_initial = 29,
  anon_sym_try = 30,
  anon_sym_recover = 31,
  anon_sym_send = 32,
  anon_sym_query = 33,
  anon_sym_COLON_COLON = 34,
  anon_sym_COLON_DASH = 35,
  anon_sym_LT_DASH = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_BANG = 42,
  anon_sym_AT = 43,
  anon_sym_DOLLAR = 44,
  anon_sym_AMP = 45,
  anon_sym_TILDE = 46,
  anon_sym_PIPE = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_string = 52,
  anon_sym_list = 53,
  anon_sym_int = 54,
  anon_sym_long = 55,
  anon_sym_float = 56,
  anon_sym_double = 57,
  anon_sym_boolean = 58,
  anon_sym_funct = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  sym_line_comment = 62,
  sym_todo_comment = 63,
  anon_sym_SLASH_STAR = 64,
  aux_sym_block_comment_token1 = 65,
  aux_sym_block_comment_token2 = 66,
  anon_sym_STAR_SLASH = 67,
  sym_string_literal = 68,
  sym_number_literal = 69,
  sym_source_file = 70,
  sym__statement = 71,
  sym_module_declaration = 72,
  sym_method_call = 73,
  sym_receiver = 74,
  sym_arguments = 75,
  sym_argument = 76,
  sym_method_name = 77,
  sym_keyword = 78,
  sym_operator = 79,
  sym_brackets = 80,
  sym_type = 81,
  sym_boolean = 82,
  sym_comment = 83,
  sym_block_comment = 84,
  sym_identifier = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_arguments_repeat1 = 87,
  aux_sym_block_comment_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_SEMI] = ";",
  [sym_module_name] = "module_name",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_method_name_token1] = "method_name_token1",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_foreach] = "foreach",
  [anon_sym_forall] = "forall",
  [anon_sym_else] = "else",
  [anon_sym_done] = "done",
  [anon_sym_message] = "message",
  [anon_sym_at_index] = "at_index",
  [anon_sym_list_count] = "list_count",
  [anon_sym_wait] = "wait",
  [anon_sym_package] = "package",
  [anon_sym_agent] = "agent",
  [anon_sym_extends] = "extends",
  [anon_sym_import] = "import",
  [anon_sym_rule] = "rule",
  [anon_sym_goal] = "goal",
  [anon_sym_types] = "types",
  [anon_sym_formula] = "formula",
  [anon_sym_inference] = "inference",
  [anon_sym_body] = "body",
  [anon_sym_initial] = "initial",
  [anon_sym_try] = "try",
  [anon_sym_recover] = "recover",
  [anon_sym_send] = "send",
  [anon_sym_query] = "query",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_AMP] = "&",
  [anon_sym_TILDE] = "~",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_string] = "string",
  [anon_sym_list] = "list",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_boolean] = "boolean",
  [anon_sym_funct] = "funct",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym_todo_comment] = "todo_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [aux_sym_block_comment_token2] = "block_comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_module_declaration] = "module_declaration",
  [sym_method_call] = "method_call",
  [sym_receiver] = "receiver",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_method_name] = "method_name",
  [sym_keyword] = "keyword",
  [sym_operator] = "operator",
  [sym_brackets] = "brackets",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_module_name] = sym_module_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_method_name_token1] = aux_sym_method_name_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_at_index] = anon_sym_at_index,
  [anon_sym_list_count] = anon_sym_list_count,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_agent] = anon_sym_agent,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_goal] = anon_sym_goal,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_formula] = anon_sym_formula,
  [anon_sym_inference] = anon_sym_inference,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_initial] = anon_sym_initial,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_recover] = anon_sym_recover,
  [anon_sym_send] = anon_sym_send,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_funct] = anon_sym_funct,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym_todo_comment] = sym_todo_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [aux_sym_block_comment_token2] = aux_sym_block_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_module_declaration] = sym_module_declaration,
  [sym_method_call] = sym_method_call,
  [sym_receiver] = sym_receiver,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_method_name] = sym_method_name,
  [sym_keyword] = sym_keyword,
  [sym_operator] = sym_operator,
  [sym_brackets] = sym_brackets,
  [sym_type] = sym_type,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_types] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_formula] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_funct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_method_name] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_brackets] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 7,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 6,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 41,
  [47] = 42,
  [48] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '!', 180,
        '"', 2,
        '$', 182,
        '%', 179,
        '&', 183,
        '(', 16,
        ')', 17,
        '*', 177,
        '+', 175,
        ',', 18,
        '-', 176,
        '.', 15,
        '/', 178,
        ':', 4,
        ';', 13,
        '<', 5,
        '@', 181,
        '[', 186,
        ']', 187,
        'a', 69,
        'b', 105,
        'd', 106,
        'e', 82,
        'f', 20,
        'g', 108,
        'i', 67,
        'l', 75,
        'm', 57,
        'p', 21,
        'q', 137,
        'r', 56,
        's', 59,
        't', 114,
        'w', 22,
        '{', 188,
        '|', 185,
        '}', 189,
        '~', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == ':') ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '!', 180,
        '"', 2,
        '$', 182,
        '%', 179,
        '&', 183,
        '(', 16,
        ')', 17,
        '*', 177,
        '+', 175,
        '-', 176,
        '.', 15,
        '/', 178,
        ':', 4,
        '<', 5,
        '@', 181,
        '[', 186,
        ']', 187,
        'a', 69,
        'b', 105,
        'd', 106,
        'e', 82,
        'f', 20,
        'g', 108,
        'i', 67,
        'l', 75,
        'm', 57,
        'p', 21,
        'q', 137,
        'r', 56,
        's', 59,
        't', 114,
        'w', 22,
        '{', 188,
        '|', 185,
        '}', 189,
        '~', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_module_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'b') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'd') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'd') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == 't') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'g') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'g') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'h') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'k') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'p') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'u') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'v') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'x') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'y') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_method_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_forall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_done);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_at_index);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_list_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_agent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_extends);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_goal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_types);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_formula);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_inference);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_body);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_initial);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_recover);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_send);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_funct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'D') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'O') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_module_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_method_name_token1] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_at_index] = ACTIONS(1),
    [anon_sym_list_count] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_agent] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_goal] = ACTIONS(1),
    [anon_sym_types] = ACTIONS(1),
    [anon_sym_formula] = ACTIONS(1),
    [anon_sym_inference] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_initial] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_recover] = ACTIONS(1),
    [anon_sym_send] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_funct] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_todo_comment] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__statement] = STATE(14),
    [sym_module_declaration] = STATE(11),
    [sym_method_call] = STATE(4),
    [sym_receiver] = STATE(42),
    [sym_keyword] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_brackets] = STATE(11),
    [sym_type] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_comment] = STATE(1),
    [sym_block_comment] = STATE(17),
    [sym_identifier] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [aux_sym_method_name_token1] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_foreach] = ACTIONS(15),
    [anon_sym_forall] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_done] = ACTIONS(15),
    [anon_sym_message] = ACTIONS(15),
    [anon_sym_at_index] = ACTIONS(15),
    [anon_sym_list_count] = ACTIONS(15),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_package] = ACTIONS(15),
    [anon_sym_agent] = ACTIONS(15),
    [anon_sym_extends] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [anon_sym_goal] = ACTIONS(15),
    [anon_sym_types] = ACTIONS(15),
    [anon_sym_formula] = ACTIONS(15),
    [anon_sym_inference] = ACTIONS(15),
    [anon_sym_body] = ACTIONS(15),
    [anon_sym_initial] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_recover] = ACTIONS(15),
    [anon_sym_send] = ACTIONS(15),
    [anon_sym_query] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_COLON_DASH] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_long] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(21),
    [anon_sym_funct] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(25),
    [sym_todo_comment] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(29),
    [sym_string_literal] = ACTIONS(31),
    [sym_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(14),
    [sym_module_declaration] = STATE(11),
    [sym_method_call] = STATE(4),
    [sym_receiver] = STATE(42),
    [sym_keyword] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_brackets] = STATE(11),
    [sym_type] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(17),
    [sym_identifier] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [aux_sym_method_name_token1] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_foreach] = ACTIONS(15),
    [anon_sym_forall] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_done] = ACTIONS(15),
    [anon_sym_message] = ACTIONS(15),
    [anon_sym_at_index] = ACTIONS(15),
    [anon_sym_list_count] = ACTIONS(15),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_package] = ACTIONS(15),
    [anon_sym_agent] = ACTIONS(15),
    [anon_sym_extends] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [anon_sym_goal] = ACTIONS(15),
    [anon_sym_types] = ACTIONS(15),
    [anon_sym_formula] = ACTIONS(15),
    [anon_sym_inference] = ACTIONS(15),
    [anon_sym_body] = ACTIONS(15),
    [anon_sym_initial] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_recover] = ACTIONS(15),
    [anon_sym_send] = ACTIONS(15),
    [anon_sym_query] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_COLON_DASH] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_long] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(21),
    [anon_sym_funct] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(25),
    [sym_todo_comment] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(29),
    [sym_string_literal] = ACTIONS(31),
    [sym_block_comment] = ACTIONS(7),
  },
  [3] = {
    [sym__statement] = STATE(14),
    [sym_module_declaration] = STATE(11),
    [sym_method_call] = STATE(4),
    [sym_receiver] = STATE(42),
    [sym_keyword] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_brackets] = STATE(11),
    [sym_type] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(17),
    [sym_identifier] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [aux_sym_method_name_token1] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_while] = ACTIONS(46),
    [anon_sym_foreach] = ACTIONS(46),
    [anon_sym_forall] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_done] = ACTIONS(46),
    [anon_sym_message] = ACTIONS(46),
    [anon_sym_at_index] = ACTIONS(46),
    [anon_sym_list_count] = ACTIONS(46),
    [anon_sym_wait] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(46),
    [anon_sym_agent] = ACTIONS(46),
    [anon_sym_extends] = ACTIONS(46),
    [anon_sym_import] = ACTIONS(46),
    [anon_sym_rule] = ACTIONS(46),
    [anon_sym_goal] = ACTIONS(46),
    [anon_sym_types] = ACTIONS(46),
    [anon_sym_formula] = ACTIONS(46),
    [anon_sym_inference] = ACTIONS(46),
    [anon_sym_body] = ACTIONS(46),
    [anon_sym_initial] = ACTIONS(46),
    [anon_sym_try] = ACTIONS(46),
    [anon_sym_recover] = ACTIONS(46),
    [anon_sym_send] = ACTIONS(46),
    [anon_sym_query] = ACTIONS(46),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [anon_sym_COLON_DASH] = ACTIONS(49),
    [anon_sym_LT_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_string] = ACTIONS(55),
    [anon_sym_list] = ACTIONS(55),
    [anon_sym_int] = ACTIONS(55),
    [anon_sym_long] = ACTIONS(55),
    [anon_sym_float] = ACTIONS(55),
    [anon_sym_double] = ACTIONS(55),
    [anon_sym_boolean] = ACTIONS(55),
    [anon_sym_funct] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(58),
    [anon_sym_false] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(61),
    [sym_todo_comment] = ACTIONS(64),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [sym_string_literal] = ACTIONS(70),
    [sym_block_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [aux_sym_method_name_token1] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_foreach] = ACTIONS(75),
    [anon_sym_forall] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_done] = ACTIONS(75),
    [anon_sym_message] = ACTIONS(75),
    [anon_sym_at_index] = ACTIONS(75),
    [anon_sym_list_count] = ACTIONS(75),
    [anon_sym_wait] = ACTIONS(75),
    [anon_sym_package] = ACTIONS(75),
    [anon_sym_agent] = ACTIONS(75),
    [anon_sym_extends] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_rule] = ACTIONS(75),
    [anon_sym_goal] = ACTIONS(75),
    [anon_sym_types] = ACTIONS(75),
    [anon_sym_formula] = ACTIONS(75),
    [anon_sym_inference] = ACTIONS(75),
    [anon_sym_body] = ACTIONS(75),
    [anon_sym_initial] = ACTIONS(75),
    [anon_sym_try] = ACTIONS(75),
    [anon_sym_recover] = ACTIONS(75),
    [anon_sym_send] = ACTIONS(75),
    [anon_sym_query] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_COLON_DASH] = ACTIONS(73),
    [anon_sym_LT_DASH] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_list] = ACTIONS(75),
    [anon_sym_int] = ACTIONS(75),
    [anon_sym_long] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_boolean] = ACTIONS(75),
    [anon_sym_funct] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [sym_line_comment] = ACTIONS(73),
    [sym_todo_comment] = ACTIONS(75),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [sym_string_literal] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(7),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(81),
    [sym_module_name] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [aux_sym_method_name_token1] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_foreach] = ACTIONS(81),
    [anon_sym_forall] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_done] = ACTIONS(81),
    [anon_sym_message] = ACTIONS(81),
    [anon_sym_at_index] = ACTIONS(81),
    [anon_sym_list_count] = ACTIONS(81),
    [anon_sym_wait] = ACTIONS(81),
    [anon_sym_package] = ACTIONS(81),
    [anon_sym_agent] = ACTIONS(81),
    [anon_sym_extends] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(81),
    [anon_sym_rule] = ACTIONS(81),
    [anon_sym_goal] = ACTIONS(81),
    [anon_sym_types] = ACTIONS(81),
    [anon_sym_formula] = ACTIONS(81),
    [anon_sym_inference] = ACTIONS(81),
    [anon_sym_body] = ACTIONS(81),
    [anon_sym_initial] = ACTIONS(81),
    [anon_sym_try] = ACTIONS(81),
    [anon_sym_recover] = ACTIONS(81),
    [anon_sym_send] = ACTIONS(81),
    [anon_sym_query] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_COLON_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_string] = ACTIONS(81),
    [anon_sym_list] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_double] = ACTIONS(81),
    [anon_sym_boolean] = ACTIONS(81),
    [anon_sym_funct] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(79),
    [sym_todo_comment] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_block_comment] = ACTIONS(7),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [aux_sym_method_name_token1] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_while] = ACTIONS(87),
    [anon_sym_foreach] = ACTIONS(87),
    [anon_sym_forall] = ACTIONS(87),
    [anon_sym_else] = ACTIONS(87),
    [anon_sym_done] = ACTIONS(87),
    [anon_sym_message] = ACTIONS(87),
    [anon_sym_at_index] = ACTIONS(87),
    [anon_sym_list_count] = ACTIONS(87),
    [anon_sym_wait] = ACTIONS(87),
    [anon_sym_package] = ACTIONS(87),
    [anon_sym_agent] = ACTIONS(87),
    [anon_sym_extends] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_rule] = ACTIONS(87),
    [anon_sym_goal] = ACTIONS(87),
    [anon_sym_types] = ACTIONS(87),
    [anon_sym_formula] = ACTIONS(87),
    [anon_sym_inference] = ACTIONS(87),
    [anon_sym_body] = ACTIONS(87),
    [anon_sym_initial] = ACTIONS(87),
    [anon_sym_try] = ACTIONS(87),
    [anon_sym_recover] = ACTIONS(87),
    [anon_sym_send] = ACTIONS(87),
    [anon_sym_query] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_COLON_DASH] = ACTIONS(85),
    [anon_sym_LT_DASH] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(87),
    [anon_sym_list] = ACTIONS(87),
    [anon_sym_int] = ACTIONS(87),
    [anon_sym_long] = ACTIONS(87),
    [anon_sym_float] = ACTIONS(87),
    [anon_sym_double] = ACTIONS(87),
    [anon_sym_boolean] = ACTIONS(87),
    [anon_sym_funct] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_line_comment] = ACTIONS(85),
    [sym_todo_comment] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(85),
    [sym_string_literal] = ACTIONS(85),
    [sym_block_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [aux_sym_method_name_token1] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_foreach] = ACTIONS(91),
    [anon_sym_forall] = ACTIONS(91),
    [anon_sym_else] = ACTIONS(91),
    [anon_sym_done] = ACTIONS(91),
    [anon_sym_message] = ACTIONS(91),
    [anon_sym_at_index] = ACTIONS(91),
    [anon_sym_list_count] = ACTIONS(91),
    [anon_sym_wait] = ACTIONS(91),
    [anon_sym_package] = ACTIONS(91),
    [anon_sym_agent] = ACTIONS(91),
    [anon_sym_extends] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [anon_sym_rule] = ACTIONS(91),
    [anon_sym_goal] = ACTIONS(91),
    [anon_sym_types] = ACTIONS(91),
    [anon_sym_formula] = ACTIONS(91),
    [anon_sym_inference] = ACTIONS(91),
    [anon_sym_body] = ACTIONS(91),
    [anon_sym_initial] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_recover] = ACTIONS(91),
    [anon_sym_send] = ACTIONS(91),
    [anon_sym_query] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_COLON_DASH] = ACTIONS(89),
    [anon_sym_LT_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_string] = ACTIONS(91),
    [anon_sym_list] = ACTIONS(91),
    [anon_sym_int] = ACTIONS(91),
    [anon_sym_long] = ACTIONS(91),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_boolean] = ACTIONS(91),
    [anon_sym_funct] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(89),
    [sym_todo_comment] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym_string_literal] = ACTIONS(89),
    [sym_block_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [aux_sym_method_name_token1] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_foreach] = ACTIONS(81),
    [anon_sym_forall] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_done] = ACTIONS(81),
    [anon_sym_message] = ACTIONS(81),
    [anon_sym_at_index] = ACTIONS(81),
    [anon_sym_list_count] = ACTIONS(81),
    [anon_sym_wait] = ACTIONS(81),
    [anon_sym_package] = ACTIONS(81),
    [anon_sym_agent] = ACTIONS(81),
    [anon_sym_extends] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(81),
    [anon_sym_rule] = ACTIONS(81),
    [anon_sym_goal] = ACTIONS(81),
    [anon_sym_types] = ACTIONS(81),
    [anon_sym_formula] = ACTIONS(81),
    [anon_sym_inference] = ACTIONS(81),
    [anon_sym_body] = ACTIONS(81),
    [anon_sym_initial] = ACTIONS(81),
    [anon_sym_try] = ACTIONS(81),
    [anon_sym_recover] = ACTIONS(81),
    [anon_sym_send] = ACTIONS(81),
    [anon_sym_query] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_COLON_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_string] = ACTIONS(81),
    [anon_sym_list] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_double] = ACTIONS(81),
    [anon_sym_boolean] = ACTIONS(81),
    [anon_sym_funct] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(79),
    [sym_todo_comment] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_block_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [aux_sym_method_name_token1] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_foreach] = ACTIONS(95),
    [anon_sym_forall] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_done] = ACTIONS(95),
    [anon_sym_message] = ACTIONS(95),
    [anon_sym_at_index] = ACTIONS(95),
    [anon_sym_list_count] = ACTIONS(95),
    [anon_sym_wait] = ACTIONS(95),
    [anon_sym_package] = ACTIONS(95),
    [anon_sym_agent] = ACTIONS(95),
    [anon_sym_extends] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [anon_sym_rule] = ACTIONS(95),
    [anon_sym_goal] = ACTIONS(95),
    [anon_sym_types] = ACTIONS(95),
    [anon_sym_formula] = ACTIONS(95),
    [anon_sym_inference] = ACTIONS(95),
    [anon_sym_body] = ACTIONS(95),
    [anon_sym_initial] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_recover] = ACTIONS(95),
    [anon_sym_send] = ACTIONS(95),
    [anon_sym_query] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_COLON_DASH] = ACTIONS(93),
    [anon_sym_LT_DASH] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(95),
    [anon_sym_list] = ACTIONS(95),
    [anon_sym_int] = ACTIONS(95),
    [anon_sym_long] = ACTIONS(95),
    [anon_sym_float] = ACTIONS(95),
    [anon_sym_double] = ACTIONS(95),
    [anon_sym_boolean] = ACTIONS(95),
    [anon_sym_funct] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(93),
    [sym_todo_comment] = ACTIONS(95),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [sym_string_literal] = ACTIONS(93),
    [sym_block_comment] = ACTIONS(7),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [aux_sym_method_name_token1] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_foreach] = ACTIONS(99),
    [anon_sym_forall] = ACTIONS(99),
    [anon_sym_else] = ACTIONS(99),
    [anon_sym_done] = ACTIONS(99),
    [anon_sym_message] = ACTIONS(99),
    [anon_sym_at_index] = ACTIONS(99),
    [anon_sym_list_count] = ACTIONS(99),
    [anon_sym_wait] = ACTIONS(99),
    [anon_sym_package] = ACTIONS(99),
    [anon_sym_agent] = ACTIONS(99),
    [anon_sym_extends] = ACTIONS(99),
    [anon_sym_import] = ACTIONS(99),
    [anon_sym_rule] = ACTIONS(99),
    [anon_sym_goal] = ACTIONS(99),
    [anon_sym_types] = ACTIONS(99),
    [anon_sym_formula] = ACTIONS(99),
    [anon_sym_inference] = ACTIONS(99),
    [anon_sym_body] = ACTIONS(99),
    [anon_sym_initial] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_recover] = ACTIONS(99),
    [anon_sym_send] = ACTIONS(99),
    [anon_sym_query] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_COLON_DASH] = ACTIONS(97),
    [anon_sym_LT_DASH] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_list] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_long] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_double] = ACTIONS(99),
    [anon_sym_boolean] = ACTIONS(99),
    [anon_sym_funct] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(97),
    [sym_todo_comment] = ACTIONS(99),
    [anon_sym_SLASH_STAR] = ACTIONS(97),
    [sym_string_literal] = ACTIONS(97),
    [sym_block_comment] = ACTIONS(7),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [aux_sym_method_name_token1] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_foreach] = ACTIONS(75),
    [anon_sym_forall] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_done] = ACTIONS(75),
    [anon_sym_message] = ACTIONS(75),
    [anon_sym_at_index] = ACTIONS(75),
    [anon_sym_list_count] = ACTIONS(75),
    [anon_sym_wait] = ACTIONS(75),
    [anon_sym_package] = ACTIONS(75),
    [anon_sym_agent] = ACTIONS(75),
    [anon_sym_extends] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_rule] = ACTIONS(75),
    [anon_sym_goal] = ACTIONS(75),
    [anon_sym_types] = ACTIONS(75),
    [anon_sym_formula] = ACTIONS(75),
    [anon_sym_inference] = ACTIONS(75),
    [anon_sym_body] = ACTIONS(75),
    [anon_sym_initial] = ACTIONS(75),
    [anon_sym_try] = ACTIONS(75),
    [anon_sym_recover] = ACTIONS(75),
    [anon_sym_send] = ACTIONS(75),
    [anon_sym_query] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_COLON_DASH] = ACTIONS(73),
    [anon_sym_LT_DASH] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_list] = ACTIONS(75),
    [anon_sym_int] = ACTIONS(75),
    [anon_sym_long] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_boolean] = ACTIONS(75),
    [anon_sym_funct] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [sym_line_comment] = ACTIONS(73),
    [sym_todo_comment] = ACTIONS(75),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [sym_string_literal] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(7),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [aux_sym_method_name_token1] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_foreach] = ACTIONS(103),
    [anon_sym_forall] = ACTIONS(103),
    [anon_sym_else] = ACTIONS(103),
    [anon_sym_done] = ACTIONS(103),
    [anon_sym_message] = ACTIONS(103),
    [anon_sym_at_index] = ACTIONS(103),
    [anon_sym_list_count] = ACTIONS(103),
    [anon_sym_wait] = ACTIONS(103),
    [anon_sym_package] = ACTIONS(103),
    [anon_sym_agent] = ACTIONS(103),
    [anon_sym_extends] = ACTIONS(103),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_rule] = ACTIONS(103),
    [anon_sym_goal] = ACTIONS(103),
    [anon_sym_types] = ACTIONS(103),
    [anon_sym_formula] = ACTIONS(103),
    [anon_sym_inference] = ACTIONS(103),
    [anon_sym_body] = ACTIONS(103),
    [anon_sym_initial] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_recover] = ACTIONS(103),
    [anon_sym_send] = ACTIONS(103),
    [anon_sym_query] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_COLON_DASH] = ACTIONS(101),
    [anon_sym_LT_DASH] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_string] = ACTIONS(103),
    [anon_sym_list] = ACTIONS(103),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(103),
    [anon_sym_float] = ACTIONS(103),
    [anon_sym_double] = ACTIONS(103),
    [anon_sym_boolean] = ACTIONS(103),
    [anon_sym_funct] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(101),
    [sym_todo_comment] = ACTIONS(103),
    [anon_sym_SLASH_STAR] = ACTIONS(101),
    [sym_string_literal] = ACTIONS(101),
    [sym_block_comment] = ACTIONS(7),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_module] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [aux_sym_method_name_token1] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_foreach] = ACTIONS(107),
    [anon_sym_forall] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_done] = ACTIONS(107),
    [anon_sym_message] = ACTIONS(107),
    [anon_sym_at_index] = ACTIONS(107),
    [anon_sym_list_count] = ACTIONS(107),
    [anon_sym_wait] = ACTIONS(107),
    [anon_sym_package] = ACTIONS(107),
    [anon_sym_agent] = ACTIONS(107),
    [anon_sym_extends] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(107),
    [anon_sym_rule] = ACTIONS(107),
    [anon_sym_goal] = ACTIONS(107),
    [anon_sym_types] = ACTIONS(107),
    [anon_sym_formula] = ACTIONS(107),
    [anon_sym_inference] = ACTIONS(107),
    [anon_sym_body] = ACTIONS(107),
    [anon_sym_initial] = ACTIONS(107),
    [anon_sym_try] = ACTIONS(107),
    [anon_sym_recover] = ACTIONS(107),
    [anon_sym_send] = ACTIONS(107),
    [anon_sym_query] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_COLON_DASH] = ACTIONS(105),
    [anon_sym_LT_DASH] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_string] = ACTIONS(107),
    [anon_sym_list] = ACTIONS(107),
    [anon_sym_int] = ACTIONS(107),
    [anon_sym_long] = ACTIONS(107),
    [anon_sym_float] = ACTIONS(107),
    [anon_sym_double] = ACTIONS(107),
    [anon_sym_boolean] = ACTIONS(107),
    [anon_sym_funct] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(105),
    [sym_todo_comment] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(105),
    [sym_string_literal] = ACTIONS(105),
    [sym_block_comment] = ACTIONS(7),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [aux_sym_method_name_token1] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(111),
    [anon_sym_foreach] = ACTIONS(111),
    [anon_sym_forall] = ACTIONS(111),
    [anon_sym_else] = ACTIONS(111),
    [anon_sym_done] = ACTIONS(111),
    [anon_sym_message] = ACTIONS(111),
    [anon_sym_at_index] = ACTIONS(111),
    [anon_sym_list_count] = ACTIONS(111),
    [anon_sym_wait] = ACTIONS(111),
    [anon_sym_package] = ACTIONS(111),
    [anon_sym_agent] = ACTIONS(111),
    [anon_sym_extends] = ACTIONS(111),
    [anon_sym_import] = ACTIONS(111),
    [anon_sym_rule] = ACTIONS(111),
    [anon_sym_goal] = ACTIONS(111),
    [anon_sym_types] = ACTIONS(111),
    [anon_sym_formula] = ACTIONS(111),
    [anon_sym_inference] = ACTIONS(111),
    [anon_sym_body] = ACTIONS(111),
    [anon_sym_initial] = ACTIONS(111),
    [anon_sym_try] = ACTIONS(111),
    [anon_sym_recover] = ACTIONS(111),
    [anon_sym_send] = ACTIONS(111),
    [anon_sym_query] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_COLON_DASH] = ACTIONS(109),
    [anon_sym_LT_DASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_string] = ACTIONS(111),
    [anon_sym_list] = ACTIONS(111),
    [anon_sym_int] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(111),
    [anon_sym_float] = ACTIONS(111),
    [anon_sym_double] = ACTIONS(111),
    [anon_sym_boolean] = ACTIONS(111),
    [anon_sym_funct] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [sym_line_comment] = ACTIONS(109),
    [sym_todo_comment] = ACTIONS(111),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [sym_string_literal] = ACTIONS(109),
    [sym_block_comment] = ACTIONS(7),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_module] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [aux_sym_method_name_token1] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_while] = ACTIONS(115),
    [anon_sym_foreach] = ACTIONS(115),
    [anon_sym_forall] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(115),
    [anon_sym_done] = ACTIONS(115),
    [anon_sym_message] = ACTIONS(115),
    [anon_sym_at_index] = ACTIONS(115),
    [anon_sym_list_count] = ACTIONS(115),
    [anon_sym_wait] = ACTIONS(115),
    [anon_sym_package] = ACTIONS(115),
    [anon_sym_agent] = ACTIONS(115),
    [anon_sym_extends] = ACTIONS(115),
    [anon_sym_import] = ACTIONS(115),
    [anon_sym_rule] = ACTIONS(115),
    [anon_sym_goal] = ACTIONS(115),
    [anon_sym_types] = ACTIONS(115),
    [anon_sym_formula] = ACTIONS(115),
    [anon_sym_inference] = ACTIONS(115),
    [anon_sym_body] = ACTIONS(115),
    [anon_sym_initial] = ACTIONS(115),
    [anon_sym_try] = ACTIONS(115),
    [anon_sym_recover] = ACTIONS(115),
    [anon_sym_send] = ACTIONS(115),
    [anon_sym_query] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_COLON_DASH] = ACTIONS(113),
    [anon_sym_LT_DASH] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_string] = ACTIONS(115),
    [anon_sym_list] = ACTIONS(115),
    [anon_sym_int] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(115),
    [anon_sym_float] = ACTIONS(115),
    [anon_sym_double] = ACTIONS(115),
    [anon_sym_boolean] = ACTIONS(115),
    [anon_sym_funct] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym_line_comment] = ACTIONS(113),
    [sym_todo_comment] = ACTIONS(115),
    [anon_sym_SLASH_STAR] = ACTIONS(113),
    [sym_string_literal] = ACTIONS(113),
    [sym_block_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [aux_sym_method_name_token1] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_foreach] = ACTIONS(119),
    [anon_sym_forall] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_done] = ACTIONS(119),
    [anon_sym_message] = ACTIONS(119),
    [anon_sym_at_index] = ACTIONS(119),
    [anon_sym_list_count] = ACTIONS(119),
    [anon_sym_wait] = ACTIONS(119),
    [anon_sym_package] = ACTIONS(119),
    [anon_sym_agent] = ACTIONS(119),
    [anon_sym_extends] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(119),
    [anon_sym_rule] = ACTIONS(119),
    [anon_sym_goal] = ACTIONS(119),
    [anon_sym_types] = ACTIONS(119),
    [anon_sym_formula] = ACTIONS(119),
    [anon_sym_inference] = ACTIONS(119),
    [anon_sym_body] = ACTIONS(119),
    [anon_sym_initial] = ACTIONS(119),
    [anon_sym_try] = ACTIONS(119),
    [anon_sym_recover] = ACTIONS(119),
    [anon_sym_send] = ACTIONS(119),
    [anon_sym_query] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_COLON_DASH] = ACTIONS(117),
    [anon_sym_LT_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_string] = ACTIONS(119),
    [anon_sym_list] = ACTIONS(119),
    [anon_sym_int] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(119),
    [anon_sym_float] = ACTIONS(119),
    [anon_sym_double] = ACTIONS(119),
    [anon_sym_boolean] = ACTIONS(119),
    [anon_sym_funct] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(117),
    [sym_todo_comment] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(117),
    [sym_string_literal] = ACTIONS(117),
    [sym_block_comment] = ACTIONS(7),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [aux_sym_method_name_token1] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(123),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_foreach] = ACTIONS(123),
    [anon_sym_forall] = ACTIONS(123),
    [anon_sym_else] = ACTIONS(123),
    [anon_sym_done] = ACTIONS(123),
    [anon_sym_message] = ACTIONS(123),
    [anon_sym_at_index] = ACTIONS(123),
    [anon_sym_list_count] = ACTIONS(123),
    [anon_sym_wait] = ACTIONS(123),
    [anon_sym_package] = ACTIONS(123),
    [anon_sym_agent] = ACTIONS(123),
    [anon_sym_extends] = ACTIONS(123),
    [anon_sym_import] = ACTIONS(123),
    [anon_sym_rule] = ACTIONS(123),
    [anon_sym_goal] = ACTIONS(123),
    [anon_sym_types] = ACTIONS(123),
    [anon_sym_formula] = ACTIONS(123),
    [anon_sym_inference] = ACTIONS(123),
    [anon_sym_body] = ACTIONS(123),
    [anon_sym_initial] = ACTIONS(123),
    [anon_sym_try] = ACTIONS(123),
    [anon_sym_recover] = ACTIONS(123),
    [anon_sym_send] = ACTIONS(123),
    [anon_sym_query] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_COLON_DASH] = ACTIONS(121),
    [anon_sym_LT_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_PERCENT] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_string] = ACTIONS(123),
    [anon_sym_list] = ACTIONS(123),
    [anon_sym_int] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(123),
    [anon_sym_float] = ACTIONS(123),
    [anon_sym_double] = ACTIONS(123),
    [anon_sym_boolean] = ACTIONS(123),
    [anon_sym_funct] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(121),
    [sym_todo_comment] = ACTIONS(123),
    [anon_sym_SLASH_STAR] = ACTIONS(121),
    [sym_string_literal] = ACTIONS(121),
    [sym_block_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [sym_block_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_module] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_method_name_token1] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_while] = ACTIONS(127),
    [anon_sym_foreach] = ACTIONS(127),
    [anon_sym_forall] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_done] = ACTIONS(127),
    [anon_sym_message] = ACTIONS(127),
    [anon_sym_at_index] = ACTIONS(127),
    [anon_sym_list_count] = ACTIONS(127),
    [anon_sym_wait] = ACTIONS(127),
    [anon_sym_package] = ACTIONS(127),
    [anon_sym_agent] = ACTIONS(127),
    [anon_sym_extends] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_rule] = ACTIONS(127),
    [anon_sym_goal] = ACTIONS(127),
    [anon_sym_types] = ACTIONS(127),
    [anon_sym_formula] = ACTIONS(127),
    [anon_sym_inference] = ACTIONS(127),
    [anon_sym_body] = ACTIONS(127),
    [anon_sym_initial] = ACTIONS(127),
    [anon_sym_try] = ACTIONS(127),
    [anon_sym_recover] = ACTIONS(127),
    [anon_sym_send] = ACTIONS(127),
    [anon_sym_query] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_COLON_DASH] = ACTIONS(125),
    [anon_sym_LT_DASH] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(127),
    [anon_sym_list] = ACTIONS(127),
    [anon_sym_int] = ACTIONS(127),
    [anon_sym_long] = ACTIONS(127),
    [anon_sym_float] = ACTIONS(127),
    [anon_sym_double] = ACTIONS(127),
    [anon_sym_boolean] = ACTIONS(127),
    [anon_sym_funct] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [sym_line_comment] = ACTIONS(125),
    [sym_todo_comment] = ACTIONS(127),
    [anon_sym_SLASH_STAR] = ACTIONS(125),
    [sym_string_literal] = ACTIONS(125),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      aux_sym_method_name_token1,
    STATE(5), 1,
      sym_block_comment,
    STATE(19), 1,
      sym_comment,
    STATE(28), 1,
      sym_argument,
    STATE(41), 1,
      sym_arguments,
    STATE(47), 1,
      sym_receiver,
    ACTIONS(133), 2,
      sym_string_literal,
      sym_number_literal,
    STATE(29), 2,
      sym_method_call,
      sym_identifier,
  [39] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      aux_sym_method_name_token1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(20), 1,
      sym_comment,
    STATE(28), 1,
      sym_argument,
    STATE(46), 1,
      sym_arguments,
    STATE(47), 1,
      sym_receiver,
    ACTIONS(133), 2,
      sym_string_literal,
      sym_number_literal,
    STATE(29), 2,
      sym_method_call,
      sym_identifier,
  [78] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      aux_sym_method_name_token1,
    STATE(5), 1,
      sym_block_comment,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      sym_argument,
    STATE(47), 1,
      sym_receiver,
    ACTIONS(133), 2,
      sym_string_literal,
      sym_number_literal,
    STATE(29), 2,
      sym_method_call,
      sym_identifier,
  [111] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [133] = 8,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_STAR_SLASH,
    STATE(5), 1,
      sym_block_comment,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(141), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
  [159] = 8,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_STAR_SLASH,
    STATE(5), 1,
      sym_block_comment,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(141), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
  [185] = 7,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_STAR_SLASH,
    STATE(5), 1,
      sym_block_comment,
    ACTIONS(147), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    STATE(25), 2,
      sym_comment,
      aux_sym_block_comment_repeat1,
  [209] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(26), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [230] = 6,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      sym_line_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(27), 1,
      sym_comment,
    ACTIONS(152), 3,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
      anon_sym_STAR_SLASH,
  [251] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_block_comment,
    STATE(28), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_arguments_repeat1,
  [276] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_block_comment,
    STATE(29), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [299] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_arguments_repeat1,
  [324] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(31), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [345] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_block_comment,
    STATE(32), 2,
      sym_comment,
      aux_sym_arguments_repeat1,
  [368] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [388] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(167), 1,
      aux_sym_method_name_token1,
    STATE(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    STATE(39), 1,
      sym_method_name,
  [410] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      aux_sym_method_name_token1,
    STATE(5), 1,
      sym_block_comment,
    STATE(35), 1,
      sym_comment,
    STATE(45), 1,
      sym_identifier,
  [432] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [452] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(167), 1,
      aux_sym_method_name_token1,
    STATE(5), 1,
      sym_block_comment,
    STATE(37), 1,
      sym_comment,
    STATE(44), 1,
      sym_method_name,
  [474] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
  [493] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
  [512] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
  [531] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
  [550] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
  [569] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
  [588] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
  [607] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
  [626] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
  [645] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_todo_comment,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
  [664] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 39,
  [SMALL_STATE(21)] = 78,
  [SMALL_STATE(22)] = 111,
  [SMALL_STATE(23)] = 133,
  [SMALL_STATE(24)] = 159,
  [SMALL_STATE(25)] = 185,
  [SMALL_STATE(26)] = 209,
  [SMALL_STATE(27)] = 230,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 276,
  [SMALL_STATE(30)] = 299,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 345,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 388,
  [SMALL_STATE(35)] = 410,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 474,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 550,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 588,
  [SMALL_STATE(45)] = 607,
  [SMALL_STATE(46)] = 626,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 664,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brackets, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brackets, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_astra(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
