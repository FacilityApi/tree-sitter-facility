#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_POUND = 47,
  aux_sym_remarks_token1 = 48,
  sym_source_file = 49,
  sym__definition = 50,
  sym_service = 51,
  sym__service_item = 52,
  sym_dto = 53,
  sym_enum = 54,
  sym_external_dto = 55,
  sym_external_enum = 56,
  sym_method = 57,
  sym__attribute_property = 58,
  sym_attribute = 59,
  sym_parameter = 60,
  sym__parameter_list = 61,
  sym_range = 62,
  sym_template_type = 63,
  sym_list_type = 64,
  sym_required_type = 65,
  sym_type = 66,
  sym__field_list = 67,
  sym_field = 68,
  sym_doc_comment = 69,
  sym_comment = 70,
  sym_remarks = 71,
  aux_sym__definition_repeat1 = 72,
  aux_sym_service_repeat1 = 73,
  aux_sym_service_repeat2 = 74,
  aux_sym_enum_repeat1 = 75,
  aux_sym_external_dto_repeat1 = 76,
  aux_sym_attribute_repeat1 = 77,
  aux_sym_parameter_repeat1 = 78,
  aux_sym__parameter_list_repeat1 = 79,
  aux_sym__field_list_repeat1 = 80,
  aux_sym_remarks_repeat1 = 81,
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
  [anon_sym_POUND] = "#",
  [aux_sym_remarks_token1] = "remarks_token1",
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
  [sym_remarks] = "remarks",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_service_repeat2] = "service_repeat2",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_external_dto_repeat1] = "external_dto_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym_remarks_repeat1] = "remarks_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_remarks_token1] = aux_sym_remarks_token1,
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
  [sym_remarks] = sym_remarks,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_service_repeat2] = aux_sym_service_repeat2,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_external_dto_repeat1] = aux_sym_external_dto_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
  [aux_sym_remarks_repeat1] = aux_sym_remarks_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_remarks_token1] = {
    .visible = false,
    .named = false,
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
  [sym_remarks] = {
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
  [aux_sym_remarks_repeat1] = {
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
  [38] = 21,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 21,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 37,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 62,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 34,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 33,
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
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(240);
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
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '.') ADVANCE(5);
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
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 117},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 117},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 117},
  [21] = {.lex_state = 117},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 117},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 116},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 116},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 116},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 117},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 175},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 175},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 175},
  [132] = {.lex_state = 175},
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
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__definition] = STATE(121),
    [sym_service] = STATE(121),
    [sym_attribute] = STATE(25),
    [sym_doc_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym__definition_repeat1] = STATE(25),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    STATE(35), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(45), 2,
      sym_remarks,
      aux_sym_service_repeat2,
    STATE(4), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [43] = 11,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(41), 2,
      sym_remarks,
      aux_sym_service_repeat2,
    STATE(2), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [86] = 9,
    ACTIONS(29), 1,
      anon_sym_data,
    ACTIONS(32), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_extern,
    ACTIONS(38), 1,
      anon_sym_method,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND,
    STATE(4), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [124] = 5,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(76), 1,
      sym_type,
    ACTIONS(47), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(107), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(49), 10,
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
  [153] = 5,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(67), 1,
      sym_type,
    ACTIONS(47), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(117), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(49), 10,
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
  [182] = 5,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(74), 1,
      sym_type,
    ACTIONS(47), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(115), 3,
      sym_template_type,
      sym_list_type,
      sym_required_type,
    ACTIONS(49), 10,
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
  [211] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
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
  [247] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_method,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(4), 8,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [283] = 7,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(59), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(11), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [309] = 7,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(59), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(11), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [335] = 7,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(10), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [361] = 1,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [374] = 1,
    ACTIONS(85), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [387] = 1,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [399] = 1,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [411] = 1,
    ACTIONS(91), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [423] = 1,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [435] = 1,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [447] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [459] = 1,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [471] = 1,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [483] = 1,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [495] = 1,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [507] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(102), 1,
      sym_service,
    STATE(26), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [529] = 5,
    ACTIONS(107), 1,
      anon_sym_service,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [548] = 4,
    ACTIONS(118), 1,
      anon_sym_validate,
    STATE(72), 1,
      sym__attribute_property,
    ACTIONS(120), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(122), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [565] = 4,
    ACTIONS(118), 1,
      anon_sym_validate,
    STATE(89), 1,
      sym__attribute_property,
    ACTIONS(124), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(122), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [582] = 4,
    ACTIONS(118), 1,
      anon_sym_validate,
    STATE(62), 1,
      sym__attribute_property,
    ACTIONS(126), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(122), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [599] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(31), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [617] = 5,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(31), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [635] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(30), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_enum_repeat1,
  [653] = 2,
    ACTIONS(147), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [664] = 2,
    ACTIONS(151), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [675] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_extern,
    ACTIONS(155), 1,
      anon_sym_method,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [689] = 2,
    ACTIONS(159), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [699] = 2,
    ACTIONS(163), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [709] = 2,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [719] = 2,
    ACTIONS(169), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [729] = 3,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 2,
      anon_sym_extern,
      anon_sym_method,
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [741] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND,
    STATE(55), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [752] = 4,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      aux_sym_remarks_token1,
    STATE(42), 1,
      aux_sym_remarks_repeat1,
  [765] = 3,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [776] = 2,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [785] = 3,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [796] = 2,
    ACTIONS(190), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [805] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND,
    STATE(45), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [816] = 3,
    ACTIONS(194), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [827] = 3,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(49), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [838] = 1,
    ACTIONS(199), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [845] = 3,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [856] = 2,
    ACTIONS(163), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [865] = 1,
    ACTIONS(201), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [872] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      aux_sym_remarks_token1,
    STATE(42), 1,
      aux_sym_remarks_repeat1,
  [885] = 3,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_POUND,
    STATE(55), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [896] = 4,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym_string_literal,
    ACTIONS(218), 1,
      sym_number_literal,
    STATE(94), 1,
      sym_range,
  [909] = 4,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      aux_sym_remarks_token1,
    STATE(54), 1,
      aux_sym_remarks_repeat1,
  [922] = 3,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__parameter_list,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [933] = 3,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(49), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [944] = 3,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [955] = 3,
    ACTIONS(194), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [966] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_attribute_repeat1,
  [976] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym__parameter_list_repeat1,
  [986] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_attribute_repeat1,
  [996] = 1,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1002] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym__parameter_list_repeat1,
  [1012] = 3,
    ACTIONS(251), 1,
      anon_sym_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(255), 1,
      anon_sym_BANG,
  [1022] = 3,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(66), 1,
      sym_parameter,
  [1032] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_attribute_repeat1,
  [1042] = 2,
    ACTIONS(263), 1,
      anon_sym_DOT_DOT,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1050] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_attribute_repeat1,
  [1060] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_attribute_repeat1,
  [1070] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym__parameter_list_repeat1,
  [1080] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(255), 1,
      anon_sym_BANG,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1090] = 2,
    ACTIONS(278), 1,
      sym_number_literal,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1098] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(255), 1,
      anon_sym_BANG,
    ACTIONS(280), 1,
      anon_sym_SEMI,
  [1108] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1113] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym__field_list,
  [1120] = 1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1125] = 1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1130] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__parameter_list,
  [1137] = 2,
    ACTIONS(290), 1,
      anon_sym_data,
    ACTIONS(292), 1,
      anon_sym_enum,
  [1144] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym__field_list,
  [1151] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(92), 1,
      sym_parameter,
  [1158] = 1,
    ACTIONS(149), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1163] = 1,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1168] = 2,
    ACTIONS(296), 1,
      anon_sym_data,
    ACTIONS(298), 1,
      anon_sym_enum,
  [1175] = 1,
    ACTIONS(300), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1180] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1185] = 1,
    ACTIONS(302), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1190] = 1,
    ACTIONS(145), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1195] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1200] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1205] = 1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1210] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym__field_list,
  [1217] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym__field_list,
  [1224] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__field_list,
  [1231] = 2,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [1238] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1243] = 1,
    ACTIONS(312), 1,
      sym_identifier,
  [1247] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [1251] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [1255] = 1,
    ACTIONS(318), 1,
      sym_identifier,
  [1259] = 1,
    ACTIONS(320), 1,
      anon_sym_LT,
  [1263] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1267] = 1,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
  [1271] = 1,
    ACTIONS(280), 1,
      anon_sym_SEMI,
  [1275] = 1,
    ACTIONS(326), 1,
      sym_identifier,
  [1279] = 1,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1283] = 1,
    ACTIONS(330), 1,
      anon_sym_SEMI,
  [1287] = 1,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [1291] = 1,
    ACTIONS(334), 1,
      sym_identifier,
  [1295] = 1,
    ACTIONS(336), 1,
      anon_sym_COMMA,
  [1299] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1303] = 1,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1307] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1311] = 1,
    ACTIONS(251), 1,
      anon_sym_GT,
  [1315] = 1,
    ACTIONS(342), 1,
      sym_identifier,
  [1319] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [1323] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1327] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1331] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1335] = 1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [1339] = 1,
    ACTIONS(354), 1,
      anon_sym_SEMI,
  [1343] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [1347] = 1,
    ACTIONS(358), 1,
      aux_sym_doc_comment_token1,
  [1351] = 1,
    ACTIONS(360), 1,
      aux_sym_doc_comment_token1,
  [1355] = 1,
    ACTIONS(362), 1,
      aux_sym_doc_comment_token1,
  [1359] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1363] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [1367] = 1,
    ACTIONS(368), 1,
      aux_sym_doc_comment_token1,
  [1371] = 1,
    ACTIONS(370), 1,
      aux_sym_doc_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 374,
  [SMALL_STATE(15)] = 387,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 423,
  [SMALL_STATE(19)] = 435,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 459,
  [SMALL_STATE(22)] = 471,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 495,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 548,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 582,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 617,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 653,
  [SMALL_STATE(34)] = 664,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 699,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 729,
  [SMALL_STATE(41)] = 741,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 765,
  [SMALL_STATE(44)] = 776,
  [SMALL_STATE(45)] = 785,
  [SMALL_STATE(46)] = 796,
  [SMALL_STATE(47)] = 805,
  [SMALL_STATE(48)] = 816,
  [SMALL_STATE(49)] = 827,
  [SMALL_STATE(50)] = 838,
  [SMALL_STATE(51)] = 845,
  [SMALL_STATE(52)] = 856,
  [SMALL_STATE(53)] = 865,
  [SMALL_STATE(54)] = 872,
  [SMALL_STATE(55)] = 885,
  [SMALL_STATE(56)] = 896,
  [SMALL_STATE(57)] = 909,
  [SMALL_STATE(58)] = 922,
  [SMALL_STATE(59)] = 933,
  [SMALL_STATE(60)] = 944,
  [SMALL_STATE(61)] = 955,
  [SMALL_STATE(62)] = 966,
  [SMALL_STATE(63)] = 976,
  [SMALL_STATE(64)] = 986,
  [SMALL_STATE(65)] = 996,
  [SMALL_STATE(66)] = 1002,
  [SMALL_STATE(67)] = 1012,
  [SMALL_STATE(68)] = 1022,
  [SMALL_STATE(69)] = 1032,
  [SMALL_STATE(70)] = 1042,
  [SMALL_STATE(71)] = 1050,
  [SMALL_STATE(72)] = 1060,
  [SMALL_STATE(73)] = 1070,
  [SMALL_STATE(74)] = 1080,
  [SMALL_STATE(75)] = 1090,
  [SMALL_STATE(76)] = 1098,
  [SMALL_STATE(77)] = 1108,
  [SMALL_STATE(78)] = 1113,
  [SMALL_STATE(79)] = 1120,
  [SMALL_STATE(80)] = 1125,
  [SMALL_STATE(81)] = 1130,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1144,
  [SMALL_STATE(84)] = 1151,
  [SMALL_STATE(85)] = 1158,
  [SMALL_STATE(86)] = 1163,
  [SMALL_STATE(87)] = 1168,
  [SMALL_STATE(88)] = 1175,
  [SMALL_STATE(89)] = 1180,
  [SMALL_STATE(90)] = 1185,
  [SMALL_STATE(91)] = 1190,
  [SMALL_STATE(92)] = 1195,
  [SMALL_STATE(93)] = 1200,
  [SMALL_STATE(94)] = 1205,
  [SMALL_STATE(95)] = 1210,
  [SMALL_STATE(96)] = 1217,
  [SMALL_STATE(97)] = 1224,
  [SMALL_STATE(98)] = 1231,
  [SMALL_STATE(99)] = 1238,
  [SMALL_STATE(100)] = 1243,
  [SMALL_STATE(101)] = 1247,
  [SMALL_STATE(102)] = 1251,
  [SMALL_STATE(103)] = 1255,
  [SMALL_STATE(104)] = 1259,
  [SMALL_STATE(105)] = 1263,
  [SMALL_STATE(106)] = 1267,
  [SMALL_STATE(107)] = 1271,
  [SMALL_STATE(108)] = 1275,
  [SMALL_STATE(109)] = 1279,
  [SMALL_STATE(110)] = 1283,
  [SMALL_STATE(111)] = 1287,
  [SMALL_STATE(112)] = 1291,
  [SMALL_STATE(113)] = 1295,
  [SMALL_STATE(114)] = 1299,
  [SMALL_STATE(115)] = 1303,
  [SMALL_STATE(116)] = 1307,
  [SMALL_STATE(117)] = 1311,
  [SMALL_STATE(118)] = 1315,
  [SMALL_STATE(119)] = 1319,
  [SMALL_STATE(120)] = 1323,
  [SMALL_STATE(121)] = 1327,
  [SMALL_STATE(122)] = 1331,
  [SMALL_STATE(123)] = 1335,
  [SMALL_STATE(124)] = 1339,
  [SMALL_STATE(125)] = 1343,
  [SMALL_STATE(126)] = 1347,
  [SMALL_STATE(127)] = 1351,
  [SMALL_STATE(128)] = 1355,
  [SMALL_STATE(129)] = 1359,
  [SMALL_STATE(130)] = 1363,
  [SMALL_STATE(131)] = 1367,
  [SMALL_STATE(132)] = 1371,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(103),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(105),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(82),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(112),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(128),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(127),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(131),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(116),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(29),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(132),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(126),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(127),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(131),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(113),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remarks_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2), SHIFT_REPEAT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(108),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(27),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2), SHIFT_REPEAT(57),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 6, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(28),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(84),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
