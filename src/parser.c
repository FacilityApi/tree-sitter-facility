#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
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
  aux_sym_doc_heading_token1 = 42,
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
  [aux_sym_doc_heading_token1] = "doc_heading_token1",
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
  [aux_sym_doc_heading_token1] = aux_sym_doc_heading_token1,
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
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 15,
  [39] = 14,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 41,
  [50] = 50,
  [51] = 51,
  [52] = 52,
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
  [63] = 53,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 35,
  [77] = 77,
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
  [94] = 34,
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
  [123] = 107,
  [124] = 124,
  [125] = 125,
  [126] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(115);
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'j') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'j') ADVANCE(37);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'q') ADVANCE(110);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 113:
      if (eof) ADVANCE(115);
      if (lookahead == '\n') SKIP(113)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_obsolete);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '6') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'y') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_remark);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_remark);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 114},
  [3] = {.lex_state = 114},
  [4] = {.lex_state = 114},
  [5] = {.lex_state = 114},
  [6] = {.lex_state = 114},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 114},
  [14] = {.lex_state = 114},
  [15] = {.lex_state = 114},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 114},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 114},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 114},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 114},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 114},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 114},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 114},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 114},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 114},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 114},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 114},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 113},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 172},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 172},
  [123] = {.lex_state = 172},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 172},
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
    [sym_source_file] = STATE(106),
    [sym__definition] = STATE(105),
    [sym_service] = STATE(105),
    [sym_attribute] = STATE(17),
    [sym_doc_comment] = STATE(17),
    [sym_comment] = STATE(17),
    [aux_sym__definition_repeat1] = STATE(17),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(16), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(22), 1,
      anon_sym_method,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(2), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [41] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_data,
    ACTIONS(38), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(42), 1,
      anon_sym_method,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(5), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [81] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_data,
    ACTIONS(38), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(42), 1,
      anon_sym_method,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(2), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [121] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_data,
    ACTIONS(38), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(42), 1,
      anon_sym_method,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(2), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [161] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_data,
    ACTIONS(38), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(42), 1,
      anon_sym_method,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(36), 2,
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
  [201] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(70), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(113), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(52), 10,
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
  [230] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(71), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(111), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(52), 10,
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
  [259] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(68), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(103), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(52), 10,
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
  [288] = 7,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(12), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [314] = 7,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(10), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [340] = 7,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(50), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(12), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [366] = 2,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [381] = 2,
    ACTIONS(88), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [396] = 2,
    ACTIONS(92), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [411] = 2,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [426] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_service,
    STATE(30), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [448] = 2,
    ACTIONS(100), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [462] = 2,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [476] = 2,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [490] = 2,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [504] = 2,
    ACTIONS(116), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [518] = 2,
    ACTIONS(120), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [532] = 2,
    ACTIONS(124), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [546] = 2,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [560] = 2,
    ACTIONS(132), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [574] = 4,
    ACTIONS(134), 1,
      anon_sym_validate,
    STATE(66), 1,
      sym__attribute_property,
    ACTIONS(136), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(138), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [591] = 4,
    ACTIONS(134), 1,
      anon_sym_validate,
    STATE(90), 1,
      sym__attribute_property,
    ACTIONS(140), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(138), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [608] = 4,
    ACTIONS(134), 1,
      anon_sym_validate,
    STATE(57), 1,
      sym__attribute_property,
    ACTIONS(142), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(138), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [625] = 5,
    ACTIONS(144), 1,
      anon_sym_service,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(152), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [644] = 5,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(32), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [662] = 5,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(32), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [680] = 5,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(31), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [698] = 2,
    ACTIONS(174), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [709] = 2,
    ACTIONS(178), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [720] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_extern,
    ACTIONS(182), 1,
      anon_sym_method,
    STATE(41), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [734] = 2,
    ACTIONS(186), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [744] = 2,
    ACTIONS(92), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [754] = 2,
    ACTIONS(88), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [764] = 2,
    ACTIONS(190), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [774] = 3,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 2,
      anon_sym_extern,
      anon_sym_method,
    STATE(41), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [786] = 4,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym_string_literal,
    ACTIONS(201), 1,
      sym_number_literal,
    STATE(73), 1,
      sym_range,
  [799] = 3,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [810] = 3,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__parameter_list,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [821] = 2,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [830] = 3,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [841] = 1,
    ACTIONS(218), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [848] = 1,
    ACTIONS(220), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [855] = 3,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    STATE(49), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [866] = 3,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(49), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [877] = 3,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [888] = 2,
    ACTIONS(229), 1,
      anon_sym_DOT_DOT,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [896] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
  [906] = 3,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym_remark,
    STATE(62), 1,
      aux_sym_service_repeat2,
  [916] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym__parameter_list_repeat1,
  [926] = 1,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [932] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_attribute_repeat1,
  [942] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
  [952] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__parameter_list_repeat1,
  [962] = 3,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      sym_remark,
    STATE(60), 1,
      aux_sym_service_repeat2,
  [972] = 3,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(55), 1,
      sym_parameter,
  [982] = 3,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      sym_remark,
    STATE(60), 1,
      aux_sym_service_repeat2,
  [992] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
  [1002] = 2,
    ACTIONS(269), 1,
      sym_number_literal,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1010] = 3,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      sym_remark,
    STATE(60), 1,
      aux_sym_service_repeat2,
  [1020] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_attribute_repeat1,
  [1030] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      sym_remark,
    STATE(65), 1,
      aux_sym_service_repeat2,
  [1040] = 3,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(279), 1,
      anon_sym_BANG,
  [1050] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__parameter_list_repeat1,
  [1060] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(279), 1,
      anon_sym_BANG,
    ACTIONS(286), 1,
      anon_sym_GT,
  [1070] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(279), 1,
      anon_sym_BANG,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1080] = 1,
    ACTIONS(290), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1085] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1090] = 2,
    ACTIONS(292), 1,
      anon_sym_data,
    ACTIONS(294), 1,
      anon_sym_enum,
  [1097] = 1,
    ACTIONS(296), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1102] = 1,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1107] = 2,
    ACTIONS(298), 1,
      anon_sym_data,
    ACTIONS(300), 1,
      anon_sym_enum,
  [1114] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1119] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym__field_list,
  [1126] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1131] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__field_list,
  [1138] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1143] = 1,
    ACTIONS(308), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1148] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym__field_list,
  [1155] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1160] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__field_list,
  [1167] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1172] = 1,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1177] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__parameter_list,
  [1184] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1189] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_SEMI,
  [1196] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym__field_list,
  [1203] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(80), 1,
      sym_parameter,
  [1210] = 1,
    ACTIONS(172), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1215] = 1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1219] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1223] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [1227] = 1,
    ACTIONS(326), 1,
      anon_sym_COLON,
  [1231] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [1235] = 1,
    ACTIONS(330), 1,
      anon_sym_LT,
  [1239] = 1,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [1243] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
  [1247] = 1,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [1251] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1255] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1259] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [1263] = 1,
    ACTIONS(342), 1,
      aux_sym_doc_heading_token1,
  [1267] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [1271] = 1,
    ACTIONS(346), 1,
      sym_identifier,
  [1275] = 1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
  [1279] = 1,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1283] = 1,
    ACTIONS(350), 1,
      sym_identifier,
  [1287] = 1,
    ACTIONS(286), 1,
      anon_sym_GT,
  [1291] = 1,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [1295] = 1,
    ACTIONS(354), 1,
      sym_identifier,
  [1299] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [1303] = 1,
    ACTIONS(358), 1,
      sym_identifier,
  [1307] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1311] = 1,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [1315] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1319] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [1323] = 1,
    ACTIONS(368), 1,
      aux_sym_doc_heading_token1,
  [1327] = 1,
    ACTIONS(370), 1,
      aux_sym_doc_heading_token1,
  [1331] = 1,
    ACTIONS(372), 1,
      sym_identifier,
  [1335] = 1,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [1339] = 1,
    ACTIONS(376), 1,
      aux_sym_doc_heading_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 396,
  [SMALL_STATE(16)] = 411,
  [SMALL_STATE(17)] = 426,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 518,
  [SMALL_STATE(24)] = 532,
  [SMALL_STATE(25)] = 546,
  [SMALL_STATE(26)] = 560,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 591,
  [SMALL_STATE(29)] = 608,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 644,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 680,
  [SMALL_STATE(34)] = 698,
  [SMALL_STATE(35)] = 709,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 734,
  [SMALL_STATE(38)] = 744,
  [SMALL_STATE(39)] = 754,
  [SMALL_STATE(40)] = 764,
  [SMALL_STATE(41)] = 774,
  [SMALL_STATE(42)] = 786,
  [SMALL_STATE(43)] = 799,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 821,
  [SMALL_STATE(46)] = 830,
  [SMALL_STATE(47)] = 841,
  [SMALL_STATE(48)] = 848,
  [SMALL_STATE(49)] = 855,
  [SMALL_STATE(50)] = 866,
  [SMALL_STATE(51)] = 877,
  [SMALL_STATE(52)] = 888,
  [SMALL_STATE(53)] = 896,
  [SMALL_STATE(54)] = 906,
  [SMALL_STATE(55)] = 916,
  [SMALL_STATE(56)] = 926,
  [SMALL_STATE(57)] = 932,
  [SMALL_STATE(58)] = 942,
  [SMALL_STATE(59)] = 952,
  [SMALL_STATE(60)] = 962,
  [SMALL_STATE(61)] = 972,
  [SMALL_STATE(62)] = 982,
  [SMALL_STATE(63)] = 992,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1010,
  [SMALL_STATE(66)] = 1020,
  [SMALL_STATE(67)] = 1030,
  [SMALL_STATE(68)] = 1040,
  [SMALL_STATE(69)] = 1050,
  [SMALL_STATE(70)] = 1060,
  [SMALL_STATE(71)] = 1070,
  [SMALL_STATE(72)] = 1080,
  [SMALL_STATE(73)] = 1085,
  [SMALL_STATE(74)] = 1090,
  [SMALL_STATE(75)] = 1097,
  [SMALL_STATE(76)] = 1102,
  [SMALL_STATE(77)] = 1107,
  [SMALL_STATE(78)] = 1114,
  [SMALL_STATE(79)] = 1119,
  [SMALL_STATE(80)] = 1126,
  [SMALL_STATE(81)] = 1131,
  [SMALL_STATE(82)] = 1138,
  [SMALL_STATE(83)] = 1143,
  [SMALL_STATE(84)] = 1148,
  [SMALL_STATE(85)] = 1155,
  [SMALL_STATE(86)] = 1160,
  [SMALL_STATE(87)] = 1167,
  [SMALL_STATE(88)] = 1172,
  [SMALL_STATE(89)] = 1177,
  [SMALL_STATE(90)] = 1184,
  [SMALL_STATE(91)] = 1189,
  [SMALL_STATE(92)] = 1196,
  [SMALL_STATE(93)] = 1203,
  [SMALL_STATE(94)] = 1210,
  [SMALL_STATE(95)] = 1215,
  [SMALL_STATE(96)] = 1219,
  [SMALL_STATE(97)] = 1223,
  [SMALL_STATE(98)] = 1227,
  [SMALL_STATE(99)] = 1231,
  [SMALL_STATE(100)] = 1235,
  [SMALL_STATE(101)] = 1239,
  [SMALL_STATE(102)] = 1243,
  [SMALL_STATE(103)] = 1247,
  [SMALL_STATE(104)] = 1251,
  [SMALL_STATE(105)] = 1255,
  [SMALL_STATE(106)] = 1259,
  [SMALL_STATE(107)] = 1263,
  [SMALL_STATE(108)] = 1267,
  [SMALL_STATE(109)] = 1271,
  [SMALL_STATE(110)] = 1275,
  [SMALL_STATE(111)] = 1279,
  [SMALL_STATE(112)] = 1283,
  [SMALL_STATE(113)] = 1287,
  [SMALL_STATE(114)] = 1291,
  [SMALL_STATE(115)] = 1295,
  [SMALL_STATE(116)] = 1299,
  [SMALL_STATE(117)] = 1303,
  [SMALL_STATE(118)] = 1307,
  [SMALL_STATE(119)] = 1311,
  [SMALL_STATE(120)] = 1315,
  [SMALL_STATE(121)] = 1319,
  [SMALL_STATE(122)] = 1323,
  [SMALL_STATE(123)] = 1327,
  [SMALL_STATE(124)] = 1331,
  [SMALL_STATE(125)] = 1335,
  [SMALL_STATE(126)] = 1339,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(108),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(109),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(74),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(112),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(29),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(126),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(107),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(27),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(122),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(123),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(114),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 5, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 6, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dto, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(29),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(126),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(107),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(122),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(123),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(110),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(96),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 3),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(28),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2), SHIFT_REPEAT(60),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 6, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(93),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
