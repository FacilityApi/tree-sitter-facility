#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_service = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_data = 5,
  anon_sym_enum = 6,
  anon_sym_COMMA = 7,
  anon_sym_extern = 8,
  anon_sym_method = 9,
  anon_sym_COLON = 10,
  anon_sym_validate = 11,
  anon_sym_obsolete = 12,
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
  anon_sym_DOT_DOT = 23,
  anon_sym_map = 24,
  anon_sym_nullable = 25,
  anon_sym_result = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_LBRACK_RBRACK = 29,
  anon_sym_BANG = 30,
  anon_sym_string = 31,
  anon_sym_datetime = 32,
  anon_sym_boolean = 33,
  anon_sym_double = 34,
  anon_sym_int32 = 35,
  anon_sym_int64 = 36,
  anon_sym_decimal = 37,
  anon_sym_bytes = 38,
  anon_sym_object = 39,
  anon_sym_error = 40,
  anon_sym_SLASH_SLASH_SLASH = 41,
  aux_sym_doc_comment_token1 = 42,
  anon_sym_SLASH_SLASH = 43,
  sym_identifier = 44,
  sym_string_literal = 45,
  sym_number_literal = 46,
  sym_remark = 47,
  sym_source_file = 48,
  sym__definition = 49,
  sym_service = 50,
  sym__service_item = 51,
  sym_dto = 52,
  sym_enum = 53,
  sym_external_dto = 54,
  sym_external_enum = 55,
  sym_method = 56,
  sym__attribute_property = 57,
  sym_attribute = 58,
  sym_parameter = 59,
  sym__parameter_list = 60,
  sym_range = 61,
  sym_template_type = 62,
  sym_list_type = 63,
  sym_required_type = 64,
  sym_type = 65,
  sym__field_list = 66,
  sym_field = 67,
  sym_doc_comment = 68,
  sym_comment = 69,
  aux_sym__definition_repeat1 = 70,
  aux_sym_service_repeat1 = 71,
  aux_sym_service_repeat2 = 72,
  aux_sym_enum_repeat1 = 73,
  aux_sym_external_dto_repeat1 = 74,
  aux_sym_attribute_repeat1 = 75,
  aux_sym_parameter_repeat1 = 76,
  aux_sym__parameter_list_repeat1 = 77,
  aux_sym__field_list_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_data] = "data",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_extern] = "extern",
  [anon_sym_method] = "method",
  [anon_sym_COLON] = ":",
  [anon_sym_validate] = "validate",
  [anon_sym_obsolete] = "obsolete",
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
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_map] = "map",
  [anon_sym_nullable] = "nullable",
  [anon_sym_result] = "result",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BANG] = "!",
  [anon_sym_string] = "string",
  [anon_sym_datetime] = "datetime",
  [anon_sym_boolean] = "boolean",
  [anon_sym_double] = "double",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_decimal] = "decimal",
  [anon_sym_bytes] = "bytes",
  [anon_sym_object] = "object",
  [anon_sym_error] = "error",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_doc_comment_token1] = "doc_comment_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_remark] = "remark",
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
  [sym_parameter] = "parameter",
  [sym__parameter_list] = "_parameter_list",
  [sym_range] = "range",
  [sym_template_type] = "template_type",
  [sym_list_type] = "list_type",
  [sym_required_type] = "required_type",
  [sym_type] = "type",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_service_repeat2] = "service_repeat2",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_external_dto_repeat1] = "external_dto_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_validate] = anon_sym_validate,
  [anon_sym_obsolete] = anon_sym_obsolete,
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [aux_sym_doc_comment_token1] = aux_sym_doc_comment_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_remark] = sym_remark,
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
  [sym_parameter] = sym_parameter,
  [sym__parameter_list] = sym__parameter_list,
  [sym_range] = sym_range,
  [sym_template_type] = sym_template_type,
  [sym_list_type] = sym_list_type,
  [sym_required_type] = sym_required_type,
  [sym_type] = sym_type,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_service_repeat2] = aux_sym_service_repeat2,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_external_dto_repeat1] = aux_sym_external_dto_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_obsolete] = {
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
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_result] = {
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
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
  [anon_sym_bytes] = {
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
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_comment_token1] = {
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
  [sym_remark] = {
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_template_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_required_type] = {
    .visible = true,
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
  [aux_sym_service_repeat2] = {
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
  [aux_sym_parameter_repeat1] = {
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

enum {
  field_name = 1,
  field_service_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_service_name] = "service_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_service_name, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 3},
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
  [28] = 28,
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 23,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 23,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 36,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 56,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 34,
  [82] = 33,
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
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 124,
  [128] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'j') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(162);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(164);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(152);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'j') ADVANCE(39);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 'q') ADVANCE(112);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_obsolete);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(179);
      if (lookahead == '6') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'y') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_remark);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_remark);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 117},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 117},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 117},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 116},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 116},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 116},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 116},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 175},
  [124] = {.lex_state = 175},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 175},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 175},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_validate] = ACTIONS(1),
    [anon_sym_obsolete] = ACTIONS(1),
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(125),
    [sym__definition] = STATE(122),
    [sym_service] = STATE(122),
    [sym_attribute] = STATE(15),
    [sym_doc_comment] = STATE(15),
    [sym_comment] = STATE(15),
    [aux_sym__definition_repeat1] = STATE(15),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(59), 1,
      sym_type,
    ACTIONS(11), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(103), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(13), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [29] = 9,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(22), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(28), 1,
      anon_sym_method,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(3), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [66] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(70), 1,
      sym_type,
    ACTIONS(11), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(111), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(13), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [95] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(57), 1,
      sym_type,
    ACTIONS(11), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(97), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(13), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [124] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_data,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(43), 1,
      anon_sym_extern,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(8), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [160] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_data,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(43), 1,
      anon_sym_extern,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(9), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [196] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_data,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(43), 1,
      anon_sym_extern,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(3), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [232] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_data,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(43), 1,
      anon_sym_extern,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(3), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [268] = 7,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(11), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [294] = 7,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(73), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(11), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [320] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(10), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [346] = 1,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [358] = 1,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [370] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym_service,
    STATE(21), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [392] = 1,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [403] = 1,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [414] = 1,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [425] = 1,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [436] = 4,
    ACTIONS(93), 1,
      anon_sym_validate,
    STATE(72), 1,
      sym__attribute_property,
    ACTIONS(95), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(97), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [453] = 5,
    ACTIONS(99), 1,
      anon_sym_service,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [472] = 1,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [483] = 1,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [494] = 4,
    ACTIONS(93), 1,
      anon_sym_validate,
    STATE(89), 1,
      sym__attribute_property,
    ACTIONS(114), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(97), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [511] = 1,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [522] = 1,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [533] = 1,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [544] = 1,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
  [555] = 4,
    ACTIONS(93), 1,
      anon_sym_validate,
    STATE(61), 1,
      sym__attribute_property,
    ACTIONS(124), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(97), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [572] = 5,
    ACTIONS(59), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(32), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [590] = 5,
    ACTIONS(59), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(30), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [608] = 5,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(32), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [626] = 2,
    ACTIONS(145), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [637] = 2,
    ACTIONS(149), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [648] = 2,
    ACTIONS(153), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [658] = 3,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 2,
      anon_sym_extern,
      anon_sym_method,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [670] = 2,
    ACTIONS(162), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(160), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [680] = 2,
    ACTIONS(164), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [690] = 2,
    ACTIONS(168), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [700] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_extern,
    ACTIONS(172), 1,
      anon_sym_method,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [714] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [725] = 2,
    ACTIONS(178), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [734] = 1,
    ACTIONS(180), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [741] = 1,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [748] = 3,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [759] = 2,
    ACTIONS(168), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(166), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [768] = 2,
    ACTIONS(164), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [777] = 3,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__parameter_list,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [788] = 4,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_string_literal,
    ACTIONS(197), 1,
      sym_number_literal,
    STATE(76), 1,
      sym_range,
  [801] = 3,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(52), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [812] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [823] = 3,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(52), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [834] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(63), 1,
      sym_parameter,
  [844] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym__parameter_list_repeat1,
  [854] = 3,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_remark,
    STATE(55), 1,
      aux_sym_service_repeat2,
  [864] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_attribute_repeat1,
  [874] = 3,
    ACTIONS(223), 1,
      anon_sym_GT,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
  [884] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      sym_remark,
    STATE(55), 1,
      aux_sym_service_repeat2,
  [894] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [904] = 3,
    ACTIONS(231), 1,
      sym_remark,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_service_repeat2,
  [914] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_attribute_repeat1,
  [924] = 2,
    ACTIONS(241), 1,
      sym_number_literal,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [932] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym__parameter_list_repeat1,
  [942] = 1,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [948] = 2,
    ACTIONS(245), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [956] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym__parameter_list_repeat1,
  [966] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_attribute_repeat1,
  [976] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      sym_remark,
    STATE(58), 1,
      aux_sym_service_repeat2,
  [986] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_attribute_repeat1,
  [996] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [1006] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      sym_remark,
    STATE(60), 1,
      aux_sym_service_repeat2,
  [1016] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_attribute_repeat1,
  [1026] = 1,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1031] = 2,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__field_list,
  [1038] = 1,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1043] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1048] = 2,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__field_list,
  [1055] = 2,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__field_list,
  [1062] = 1,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1067] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1074] = 1,
    ACTIONS(147), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1079] = 1,
    ACTIONS(143), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1084] = 2,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__parameter_list,
  [1091] = 1,
    ACTIONS(279), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1096] = 1,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1101] = 1,
    ACTIONS(283), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1106] = 1,
    ACTIONS(285), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1111] = 2,
    ACTIONS(287), 1,
      anon_sym_data,
    ACTIONS(289), 1,
      anon_sym_enum,
  [1118] = 1,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1123] = 2,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__field_list,
  [1130] = 2,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym__field_list,
  [1137] = 1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1142] = 2,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(92), 1,
      sym_parameter,
  [1149] = 1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1154] = 2,
    ACTIONS(293), 1,
      anon_sym_data,
    ACTIONS(295), 1,
      anon_sym_enum,
  [1161] = 1,
    ACTIONS(297), 1,
      anon_sym_LT,
  [1165] = 1,
    ACTIONS(223), 1,
      anon_sym_GT,
  [1169] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1173] = 1,
    ACTIONS(301), 1,
      sym_identifier,
  [1177] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [1181] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1185] = 1,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
  [1189] = 1,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [1193] = 1,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1197] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [1201] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1205] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [1209] = 1,
    ACTIONS(317), 1,
      sym_identifier,
  [1213] = 1,
    ACTIONS(319), 1,
      anon_sym_COLON,
  [1217] = 1,
    ACTIONS(321), 1,
      sym_identifier,
  [1221] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [1225] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [1229] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1233] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [1237] = 1,
    ACTIONS(329), 1,
      sym_identifier,
  [1241] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [1245] = 1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [1249] = 1,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1253] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1257] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1261] = 1,
    ACTIONS(341), 1,
      anon_sym_COLON,
  [1265] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1269] = 1,
    ACTIONS(345), 1,
      aux_sym_doc_comment_token1,
  [1273] = 1,
    ACTIONS(347), 1,
      aux_sym_doc_comment_token1,
  [1277] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [1281] = 1,
    ACTIONS(351), 1,
      aux_sym_doc_comment_token1,
  [1285] = 1,
    ACTIONS(353), 1,
      aux_sym_doc_comment_token1,
  [1289] = 1,
    ACTIONS(355), 1,
      aux_sym_doc_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 403,
  [SMALL_STATE(18)] = 414,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 533,
  [SMALL_STATE(28)] = 544,
  [SMALL_STATE(29)] = 555,
  [SMALL_STATE(30)] = 572,
  [SMALL_STATE(31)] = 590,
  [SMALL_STATE(32)] = 608,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 637,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 670,
  [SMALL_STATE(38)] = 680,
  [SMALL_STATE(39)] = 690,
  [SMALL_STATE(40)] = 700,
  [SMALL_STATE(41)] = 714,
  [SMALL_STATE(42)] = 725,
  [SMALL_STATE(43)] = 734,
  [SMALL_STATE(44)] = 741,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 759,
  [SMALL_STATE(47)] = 768,
  [SMALL_STATE(48)] = 777,
  [SMALL_STATE(49)] = 788,
  [SMALL_STATE(50)] = 801,
  [SMALL_STATE(51)] = 812,
  [SMALL_STATE(52)] = 823,
  [SMALL_STATE(53)] = 834,
  [SMALL_STATE(54)] = 844,
  [SMALL_STATE(55)] = 854,
  [SMALL_STATE(56)] = 864,
  [SMALL_STATE(57)] = 874,
  [SMALL_STATE(58)] = 884,
  [SMALL_STATE(59)] = 894,
  [SMALL_STATE(60)] = 904,
  [SMALL_STATE(61)] = 914,
  [SMALL_STATE(62)] = 924,
  [SMALL_STATE(63)] = 932,
  [SMALL_STATE(64)] = 942,
  [SMALL_STATE(65)] = 948,
  [SMALL_STATE(66)] = 956,
  [SMALL_STATE(67)] = 966,
  [SMALL_STATE(68)] = 976,
  [SMALL_STATE(69)] = 986,
  [SMALL_STATE(70)] = 996,
  [SMALL_STATE(71)] = 1006,
  [SMALL_STATE(72)] = 1016,
  [SMALL_STATE(73)] = 1026,
  [SMALL_STATE(74)] = 1031,
  [SMALL_STATE(75)] = 1038,
  [SMALL_STATE(76)] = 1043,
  [SMALL_STATE(77)] = 1048,
  [SMALL_STATE(78)] = 1055,
  [SMALL_STATE(79)] = 1062,
  [SMALL_STATE(80)] = 1067,
  [SMALL_STATE(81)] = 1074,
  [SMALL_STATE(82)] = 1079,
  [SMALL_STATE(83)] = 1084,
  [SMALL_STATE(84)] = 1091,
  [SMALL_STATE(85)] = 1096,
  [SMALL_STATE(86)] = 1101,
  [SMALL_STATE(87)] = 1106,
  [SMALL_STATE(88)] = 1111,
  [SMALL_STATE(89)] = 1118,
  [SMALL_STATE(90)] = 1123,
  [SMALL_STATE(91)] = 1130,
  [SMALL_STATE(92)] = 1137,
  [SMALL_STATE(93)] = 1142,
  [SMALL_STATE(94)] = 1149,
  [SMALL_STATE(95)] = 1154,
  [SMALL_STATE(96)] = 1161,
  [SMALL_STATE(97)] = 1165,
  [SMALL_STATE(98)] = 1169,
  [SMALL_STATE(99)] = 1173,
  [SMALL_STATE(100)] = 1177,
  [SMALL_STATE(101)] = 1181,
  [SMALL_STATE(102)] = 1185,
  [SMALL_STATE(103)] = 1189,
  [SMALL_STATE(104)] = 1193,
  [SMALL_STATE(105)] = 1197,
  [SMALL_STATE(106)] = 1201,
  [SMALL_STATE(107)] = 1205,
  [SMALL_STATE(108)] = 1209,
  [SMALL_STATE(109)] = 1213,
  [SMALL_STATE(110)] = 1217,
  [SMALL_STATE(111)] = 1221,
  [SMALL_STATE(112)] = 1225,
  [SMALL_STATE(113)] = 1229,
  [SMALL_STATE(114)] = 1233,
  [SMALL_STATE(115)] = 1237,
  [SMALL_STATE(116)] = 1241,
  [SMALL_STATE(117)] = 1245,
  [SMALL_STATE(118)] = 1249,
  [SMALL_STATE(119)] = 1253,
  [SMALL_STATE(120)] = 1257,
  [SMALL_STATE(121)] = 1261,
  [SMALL_STATE(122)] = 1265,
  [SMALL_STATE(123)] = 1269,
  [SMALL_STATE(124)] = 1273,
  [SMALL_STATE(125)] = 1277,
  [SMALL_STATE(126)] = 1281,
  [SMALL_STATE(127)] = 1285,
  [SMALL_STATE(128)] = 1289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(114),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(112),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(88),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(107),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(124),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(123),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(127),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(121),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(20),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(128),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(126),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(123),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(127),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(104),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(20),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(116),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2), SHIFT_REPEAT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 6, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(93),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
