#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_service = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_data = 4,
  anon_sym_enum = 5,
  anon_sym_COMMA = 6,
  anon_sym_extern = 7,
  anon_sym_SEMI = 8,
  anon_sym_method = 9,
  anon_sym_COLON = 10,
  anon_sym_validate = 11,
  anon_sym_obselete = 12,
  anon_sym_required = 13,
  anon_sym_http = 14,
  anon_sym_info = 15,
  anon_sym_csharp = 16,
  anon_sym_js = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_DOT = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_map = 23,
  anon_sym_nullable = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_string = 27,
  anon_sym_boolean = 28,
  anon_sym_double = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_decimal = 32,
  anon_sym_byte = 33,
  anon_sym_object = 34,
  anon_sym_error = 35,
  anon_sym_LBRACK_RBRACK = 36,
  anon_sym_SLASH_SLASH_SLASH = 37,
  aux_sym_doc_heading_token1 = 38,
  anon_sym_SLASH_SLASH = 39,
  sym_identifier = 40,
  sym_string_literal = 41,
  sym_number_literal = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym_service = 45,
  sym__service_item = 46,
  sym_dto = 47,
  sym_enum = 48,
  sym_external_dto = 49,
  sym_external_enum = 50,
  sym_method = 51,
  sym__attribute_property = 52,
  sym_attribute = 53,
  sym__parameter = 54,
  sym__parameter_list = 55,
  sym__template_type = 56,
  sym_type = 57,
  sym__field_list = 58,
  sym_field = 59,
  sym_doc_comment = 60,
  sym_comment = 61,
  aux_sym__definition_repeat1 = 62,
  aux_sym_service_repeat1 = 63,
  aux_sym_enum_repeat1 = 64,
  aux_sym_external_dto_repeat1 = 65,
  aux_sym_attribute_repeat1 = 66,
  aux_sym__parameter_repeat1 = 67,
  aux_sym__parameter_list_repeat1 = 68,
  aux_sym__field_list_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_data] = "data",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_extern] = "extern",
  [anon_sym_SEMI] = ";",
  [anon_sym_method] = "method",
  [anon_sym_COLON] = ":",
  [anon_sym_validate] = "validate",
  [anon_sym_obselete] = "obselete",
  [anon_sym_required] = "required",
  [anon_sym_http] = "http",
  [anon_sym_info] = "info",
  [anon_sym_csharp] = "csharp",
  [anon_sym_js] = "js",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_map] = "map",
  [anon_sym_nullable] = "nullable",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_string] = "string",
  [anon_sym_boolean] = "boolean",
  [anon_sym_double] = "double",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_decimal] = "decimal",
  [anon_sym_byte] = "byte",
  [anon_sym_object] = "object",
  [anon_sym_error] = "error",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_doc_heading_token1] = "doc_heading_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_service] = "service",
  [sym__service_item] = "_service_item",
  [sym_dto] = "dto",
  [sym_enum] = "enum",
  [sym_external_dto] = "external_dto",
  [sym_external_enum] = "external_enum",
  [sym_method] = "method",
  [sym__attribute_property] = "_attribute_property",
  [sym_attribute] = "attribute",
  [sym__parameter] = "_parameter",
  [sym__parameter_list] = "_parameter_list",
  [sym__template_type] = "_template_type",
  [sym_type] = "type",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_external_dto_repeat1] = "external_dto_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym__parameter_repeat1] = "_parameter_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_validate] = anon_sym_validate,
  [anon_sym_obselete] = anon_sym_obselete,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_csharp] = anon_sym_csharp,
  [anon_sym_js] = anon_sym_js,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [aux_sym_doc_heading_token1] = aux_sym_doc_heading_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_service] = sym_service,
  [sym__service_item] = sym__service_item,
  [sym_dto] = sym_dto,
  [sym_enum] = sym_enum,
  [sym_external_dto] = sym_external_dto,
  [sym_external_enum] = sym_external_enum,
  [sym_method] = sym_method,
  [sym__attribute_property] = sym__attribute_property,
  [sym_attribute] = sym_attribute,
  [sym__parameter] = sym__parameter,
  [sym__parameter_list] = sym__parameter_list,
  [sym__template_type] = sym__template_type,
  [sym_type] = sym_type,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_external_dto_repeat1] = aux_sym_external_dto_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym__parameter_repeat1] = aux_sym__parameter_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_service] = {
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_validate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obselete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csharp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_js] = {
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
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullable] = {
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
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym__service_item] = {
    .visible = false,
    .named = true,
  },
  [sym_dto] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_external_dto] = {
    .visible = true,
    .named = true,
  },
  [sym_external_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_property] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym__template_type] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__field_list] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_external_dto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_list_repeat1] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 17,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 14,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 15,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 49,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 33,
  [75] = 75,
  [76] = 76,
  [77] = 32,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 97,
  [111] = 111,
  [112] = 112,
  [113] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'j') ADVANCE(36);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'q') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_obselete);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == '6') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'y') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 153},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 153},
  [110] = {.lex_state = 153},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 153},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_validate] = ACTIONS(1),
    [anon_sym_obselete] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_csharp] = ACTIONS(1),
    [anon_sym_js] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym__definition] = STATE(95),
    [sym_service] = STATE(95),
    [sym_attribute] = STATE(11),
    [sym_doc_comment] = STATE(11),
    [sym_comment] = STATE(11),
    [aux_sym__definition_repeat1] = STATE(11),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    STATE(34), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(4), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [40] = 10,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(26), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_extern,
    ACTIONS(32), 1,
      anon_sym_method,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(3), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [80] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(3), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [120] = 4,
    STATE(55), 1,
      sym__template_type,
    STATE(101), 1,
      sym_type,
    ACTIONS(46), 2,
      anon_sym_map,
      anon_sym_nullable,
    ACTIONS(48), 10,
      anon_sym_string,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_byte,
      anon_sym_object,
      anon_sym_error,
      sym_identifier,
  [143] = 4,
    STATE(55), 1,
      sym__template_type,
    STATE(100), 1,
      sym_type,
    ACTIONS(46), 2,
      anon_sym_map,
      anon_sym_nullable,
    ACTIONS(48), 10,
      anon_sym_string,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_byte,
      anon_sym_object,
      anon_sym_error,
      sym_identifier,
  [166] = 4,
    STATE(55), 1,
      sym__template_type,
    STATE(94), 1,
      sym_type,
    ACTIONS(46), 2,
      anon_sym_map,
      anon_sym_nullable,
    ACTIONS(48), 10,
      anon_sym_string,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_byte,
      anon_sym_object,
      anon_sym_error,
      sym_identifier,
  [189] = 7,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(45), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(9), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [215] = 7,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(10), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [241] = 7,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(45), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(10), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [267] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_service,
    STATE(16), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [289] = 2,
    ACTIONS(78), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 8,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [303] = 2,
    ACTIONS(82), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 8,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [317] = 2,
    ACTIONS(86), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 8,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [331] = 2,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 8,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [345] = 5,
    ACTIONS(92), 1,
      anon_sym_service,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [364] = 4,
    ACTIONS(103), 1,
      anon_sym_validate,
    STATE(48), 1,
      sym__attribute_property,
    ACTIONS(105), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(107), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [381] = 2,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [394] = 4,
    ACTIONS(103), 1,
      anon_sym_validate,
    STATE(66), 1,
      sym__attribute_property,
    ACTIONS(113), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(107), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [411] = 2,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [424] = 2,
    ACTIONS(121), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [437] = 2,
    ACTIONS(125), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [450] = 2,
    ACTIONS(129), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [463] = 2,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(131), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [476] = 2,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [489] = 2,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [502] = 2,
    ACTIONS(145), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [515] = 4,
    ACTIONS(103), 1,
      anon_sym_validate,
    STATE(50), 1,
      sym__attribute_property,
    ACTIONS(147), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(107), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [532] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(30), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [550] = 5,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(30), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [568] = 5,
    ACTIONS(54), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [586] = 2,
    ACTIONS(168), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [597] = 2,
    ACTIONS(172), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(170), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [608] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_extern,
    ACTIONS(176), 1,
      anon_sym_method,
    STATE(38), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [622] = 2,
    ACTIONS(86), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [632] = 2,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [642] = 2,
    ACTIONS(184), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [652] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 2,
      anon_sym_extern,
      anon_sym_method,
    STATE(38), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [664] = 2,
    ACTIONS(90), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [674] = 3,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [685] = 3,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [696] = 3,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym__parameter_list,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [707] = 2,
    ACTIONS(202), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [716] = 3,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [727] = 3,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [738] = 3,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [749] = 3,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(57), 1,
      sym__parameter,
  [759] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
  [769] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_attribute_repeat1,
  [779] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_attribute_repeat1,
  [789] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_attribute_repeat1,
  [799] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 2,
      sym_string_literal,
      sym_number_literal,
  [807] = 1,
    ACTIONS(204), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [813] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym__parameter_list_repeat1,
  [823] = 2,
    ACTIONS(240), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(238), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [831] = 1,
    ACTIONS(242), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
  [837] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym__parameter_list_repeat1,
  [847] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_attribute_repeat1,
  [857] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym__parameter_list_repeat1,
  [867] = 2,
    ACTIONS(253), 1,
      anon_sym_data,
    ACTIONS(255), 1,
      anon_sym_enum,
  [874] = 1,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [879] = 1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [884] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym__field_list,
  [891] = 1,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [896] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [901] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [906] = 1,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [911] = 2,
    ACTIONS(265), 1,
      anon_sym_data,
    ACTIONS(267), 1,
      anon_sym_enum,
  [918] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [923] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__field_list,
  [930] = 2,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(61), 1,
      sym__parameter,
  [937] = 2,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym__parameter_list,
  [944] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__field_list,
  [951] = 1,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [956] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__field_list,
  [963] = 1,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [968] = 1,
    ACTIONS(166), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [973] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__field_list,
  [980] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [984] = 1,
    ACTIONS(275), 1,
      anon_sym_COLON,
  [988] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [992] = 1,
    ACTIONS(279), 1,
      sym_identifier,
  [996] = 1,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [1000] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1004] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [1008] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1012] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [1016] = 1,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
  [1020] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1024] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [1028] = 1,
    ACTIONS(297), 1,
      anon_sym_COMMA,
  [1032] = 1,
    ACTIONS(299), 1,
      anon_sym_LT,
  [1036] = 1,
    ACTIONS(301), 1,
      sym_identifier,
  [1040] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [1044] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1048] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1052] = 1,
    ACTIONS(309), 1,
      aux_sym_doc_heading_token1,
  [1056] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [1060] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [1064] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [1068] = 1,
    ACTIONS(317), 1,
      anon_sym_GT,
  [1072] = 1,
    ACTIONS(319), 1,
      sym_identifier,
  [1076] = 1,
    ACTIONS(321), 1,
      sym_identifier,
  [1080] = 1,
    ACTIONS(323), 1,
      anon_sym_COLON,
  [1084] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1088] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [1092] = 1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
  [1096] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [1100] = 1,
    ACTIONS(333), 1,
      aux_sym_doc_heading_token1,
  [1104] = 1,
    ACTIONS(335), 1,
      aux_sym_doc_heading_token1,
  [1108] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [1112] = 1,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
  [1116] = 1,
    ACTIONS(341), 1,
      aux_sym_doc_heading_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 317,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 450,
  [SMALL_STATE(24)] = 463,
  [SMALL_STATE(25)] = 476,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 502,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 550,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 586,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 608,
  [SMALL_STATE(35)] = 622,
  [SMALL_STATE(36)] = 632,
  [SMALL_STATE(37)] = 642,
  [SMALL_STATE(38)] = 652,
  [SMALL_STATE(39)] = 664,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 696,
  [SMALL_STATE(43)] = 707,
  [SMALL_STATE(44)] = 716,
  [SMALL_STATE(45)] = 727,
  [SMALL_STATE(46)] = 738,
  [SMALL_STATE(47)] = 749,
  [SMALL_STATE(48)] = 759,
  [SMALL_STATE(49)] = 769,
  [SMALL_STATE(50)] = 779,
  [SMALL_STATE(51)] = 789,
  [SMALL_STATE(52)] = 799,
  [SMALL_STATE(53)] = 807,
  [SMALL_STATE(54)] = 813,
  [SMALL_STATE(55)] = 823,
  [SMALL_STATE(56)] = 831,
  [SMALL_STATE(57)] = 837,
  [SMALL_STATE(58)] = 847,
  [SMALL_STATE(59)] = 857,
  [SMALL_STATE(60)] = 867,
  [SMALL_STATE(61)] = 874,
  [SMALL_STATE(62)] = 879,
  [SMALL_STATE(63)] = 884,
  [SMALL_STATE(64)] = 891,
  [SMALL_STATE(65)] = 896,
  [SMALL_STATE(66)] = 901,
  [SMALL_STATE(67)] = 906,
  [SMALL_STATE(68)] = 911,
  [SMALL_STATE(69)] = 918,
  [SMALL_STATE(70)] = 923,
  [SMALL_STATE(71)] = 930,
  [SMALL_STATE(72)] = 937,
  [SMALL_STATE(73)] = 944,
  [SMALL_STATE(74)] = 951,
  [SMALL_STATE(75)] = 956,
  [SMALL_STATE(76)] = 963,
  [SMALL_STATE(77)] = 968,
  [SMALL_STATE(78)] = 973,
  [SMALL_STATE(79)] = 980,
  [SMALL_STATE(80)] = 984,
  [SMALL_STATE(81)] = 988,
  [SMALL_STATE(82)] = 992,
  [SMALL_STATE(83)] = 996,
  [SMALL_STATE(84)] = 1000,
  [SMALL_STATE(85)] = 1004,
  [SMALL_STATE(86)] = 1008,
  [SMALL_STATE(87)] = 1012,
  [SMALL_STATE(88)] = 1016,
  [SMALL_STATE(89)] = 1020,
  [SMALL_STATE(90)] = 1024,
  [SMALL_STATE(91)] = 1028,
  [SMALL_STATE(92)] = 1032,
  [SMALL_STATE(93)] = 1036,
  [SMALL_STATE(94)] = 1040,
  [SMALL_STATE(95)] = 1044,
  [SMALL_STATE(96)] = 1048,
  [SMALL_STATE(97)] = 1052,
  [SMALL_STATE(98)] = 1056,
  [SMALL_STATE(99)] = 1060,
  [SMALL_STATE(100)] = 1064,
  [SMALL_STATE(101)] = 1068,
  [SMALL_STATE(102)] = 1072,
  [SMALL_STATE(103)] = 1076,
  [SMALL_STATE(104)] = 1080,
  [SMALL_STATE(105)] = 1084,
  [SMALL_STATE(106)] = 1088,
  [SMALL_STATE(107)] = 1092,
  [SMALL_STATE(108)] = 1096,
  [SMALL_STATE(109)] = 1100,
  [SMALL_STATE(110)] = 1104,
  [SMALL_STATE(111)] = 1108,
  [SMALL_STATE(112)] = 1112,
  [SMALL_STATE(113)] = 1116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(89),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(90),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(68),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(93),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(113),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(97),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(109),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(110),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(98),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(113),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(97),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dto, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(109),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(110),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(91),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(28),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_repeat1, 2), SHIFT_REPEAT(82),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(19),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_type, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(71),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_facility(void) {
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
