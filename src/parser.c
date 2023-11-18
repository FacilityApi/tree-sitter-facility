#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
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
  anon_sym_POUND = 41,
  aux_sym_remark_token1 = 42,
  anon_sym_SLASH_SLASH_SLASH = 43,
  aux_sym_doc_heading_token1 = 44,
  anon_sym_SLASH_SLASH = 45,
  sym_identifier = 46,
  sym_string_literal = 47,
  sym_number_literal = 48,
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
  sym_remark_header = 69,
  sym_remark = 70,
  sym_doc_comment = 71,
  sym_comment = 72,
  aux_sym__definition_repeat1 = 73,
  aux_sym__definition_repeat2 = 74,
  aux_sym_service_repeat1 = 75,
  aux_sym_enum_repeat1 = 76,
  aux_sym_external_dto_repeat1 = 77,
  aux_sym_attribute_repeat1 = 78,
  aux_sym_parameter_repeat1 = 79,
  aux_sym__parameter_list_repeat1 = 80,
  aux_sym__field_list_repeat1 = 81,
  aux_sym_remark_repeat1 = 82,
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
  [anon_sym_POUND] = "#",
  [aux_sym_remark_token1] = "remark_token1",
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
  [sym_parameter] = "parameter",
  [sym__parameter_list] = "_parameter_list",
  [sym_range] = "range",
  [sym_template_type] = "template_type",
  [sym_list_type] = "list_type",
  [sym_required_type] = "required_type",
  [sym_type] = "type",
  [sym__field_list] = "_field_list",
  [sym_field] = "field",
  [sym_remark_header] = "remark_header",
  [sym_remark] = "remark",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym__definition_repeat2] = "_definition_repeat2",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_external_dto_repeat1] = "external_dto_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__field_list_repeat1] = "_field_list_repeat1",
  [aux_sym_remark_repeat1] = "remark_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_remark_token1] = aux_sym_remark_token1,
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
  [sym_parameter] = sym_parameter,
  [sym__parameter_list] = sym__parameter_list,
  [sym_range] = sym_range,
  [sym_template_type] = sym_template_type,
  [sym_list_type] = sym_list_type,
  [sym_required_type] = sym_required_type,
  [sym_type] = sym_type,
  [sym__field_list] = sym__field_list,
  [sym_field] = sym_field,
  [sym_remark_header] = sym_remark_header,
  [sym_remark] = sym_remark,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym__definition_repeat2] = aux_sym__definition_repeat2,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_external_dto_repeat1] = aux_sym_external_dto_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__field_list_repeat1] = aux_sym__field_list_repeat1,
  [aux_sym_remark_repeat1] = aux_sym_remark_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_remark_token1] = {
    .visible = false,
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
  [sym_remark_header] = {
    .visible = true,
    .named = true,
  },
  [sym_remark] = {
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
  [aux_sym__definition_repeat2] = {
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
  [aux_sym_remark_repeat1] = {
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
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 16,
  [38] = 38,
  [39] = 15,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 41,
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
  [71] = 62,
  [72] = 72,
  [73] = 73,
  [74] = 61,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 34,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 35,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == ']') ADVANCE(136);
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
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(162);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(150);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(121);
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
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(127);
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
      if (lookahead == 'g') ADVANCE(152);
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
      if (lookahead == 'l') ADVANCE(164);
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
      if (lookahead == 'm') ADVANCE(122);
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
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(156);
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
      if (lookahead == 'o') ADVANCE(131);
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
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 84:
      if (lookahead == 'q') ADVANCE(110);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(170);
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
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(146);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_obsolete);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_remark_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_doc_heading_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(178);
      if (lookahead == '6') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'y') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
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
  [11] = {.lex_state = 114},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
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
  [27] = {.lex_state = 114},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 114},
  [41] = {.lex_state = 114},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 114},
  [50] = {.lex_state = 115},
  [51] = {.lex_state = 115},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 114},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 114},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 175},
  [129] = {.lex_state = 175},
  [130] = {.lex_state = 0},
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
    [sym__definition] = STATE(127),
    [sym_service] = STATE(44),
    [sym_attribute] = STATE(26),
    [sym_doc_comment] = STATE(26),
    [sym_comment] = STATE(26),
    [aux_sym__definition_repeat1] = STATE(26),
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
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND,
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
  [42] = 10,
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
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(40), 2,
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
  [83] = 10,
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
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(40), 2,
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
  [124] = 10,
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
    STATE(40), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(6), 9,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [164] = 10,
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
      anon_sym_RBRACE,
    STATE(40), 2,
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
  [204] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(72), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(117), 3,
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
  [233] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(69), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(119), 3,
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
  [262] = 5,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(63), 1,
      sym_type,
    ACTIONS(50), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    STATE(109), 3,
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
  [291] = 7,
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
    STATE(53), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(12), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [317] = 2,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [333] = 7,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(53), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(13), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [359] = 7,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(53), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
    STATE(13), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [385] = 2,
    ACTIONS(88), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [401] = 2,
    ACTIONS(92), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [417] = 2,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_service,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [433] = 2,
    ACTIONS(100), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [448] = 2,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [463] = 2,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [478] = 2,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [493] = 2,
    ACTIONS(116), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [508] = 2,
    ACTIONS(120), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [523] = 2,
    ACTIONS(124), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [538] = 2,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [553] = 2,
    ACTIONS(132), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH_SLASH,
  [568] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 1,
      sym_service,
    STATE(27), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [590] = 5,
    ACTIONS(134), 1,
      anon_sym_service,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [609] = 4,
    ACTIONS(145), 1,
      anon_sym_validate,
    STATE(62), 1,
      sym__attribute_property,
    ACTIONS(147), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(149), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [626] = 4,
    ACTIONS(145), 1,
      anon_sym_validate,
    STATE(92), 1,
      sym__attribute_property,
    ACTIONS(151), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(149), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [643] = 4,
    ACTIONS(145), 1,
      anon_sym_validate,
    STATE(71), 1,
      sym__attribute_property,
    ACTIONS(153), 2,
      anon_sym_obsolete,
      anon_sym_required,
    ACTIONS(149), 4,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
  [660] = 5,
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
  [678] = 5,
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
  [696] = 5,
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
  [714] = 2,
    ACTIONS(174), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [725] = 2,
    ACTIONS(178), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 5,
      anon_sym_service,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [736] = 2,
    ACTIONS(182), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [746] = 2,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [756] = 4,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_remark_header,
    STATE(38), 2,
      sym_remark,
      aux_sym__definition_repeat2,
  [770] = 2,
    ACTIONS(92), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [780] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      anon_sym_extern,
    ACTIONS(191), 1,
      anon_sym_method,
    STATE(41), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [794] = 3,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 2,
      anon_sym_extern,
      anon_sym_method,
    STATE(41), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [806] = 4,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_remark_header,
    STATE(38), 2,
      sym_remark,
      aux_sym__definition_repeat2,
  [820] = 4,
    ACTIONS(200), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_remark_header,
    STATE(42), 2,
      sym_remark,
      aux_sym__definition_repeat2,
  [834] = 4,
    ACTIONS(200), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_remark_header,
    STATE(45), 2,
      sym_remark,
      aux_sym__definition_repeat2,
  [848] = 4,
    ACTIONS(200), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_remark_header,
    STATE(38), 2,
      sym_remark,
      aux_sym__definition_repeat2,
  [862] = 2,
    ACTIONS(208), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [872] = 2,
    ACTIONS(210), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [881] = 1,
    ACTIONS(212), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [888] = 3,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [899] = 3,
    ACTIONS(220), 1,
      aux_sym_remark_token1,
    STATE(59), 1,
      aux_sym_remark_repeat1,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [910] = 3,
    ACTIONS(224), 1,
      aux_sym_remark_token1,
    STATE(51), 1,
      aux_sym_remark_repeat1,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [921] = 3,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__parameter_list,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [932] = 3,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(55), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [943] = 3,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [954] = 3,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(55), 2,
      sym_attribute,
      aux_sym_external_dto_repeat1,
  [965] = 3,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [976] = 4,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_literal,
    ACTIONS(247), 1,
      sym_number_literal,
    STATE(90), 1,
      sym_range,
  [989] = 1,
    ACTIONS(249), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [996] = 3,
    ACTIONS(253), 1,
      aux_sym_remark_token1,
    STATE(51), 1,
      aux_sym_remark_repeat1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [1007] = 2,
    ACTIONS(257), 1,
      sym_number_literal,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1015] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_attribute_repeat1,
  [1025] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_attribute_repeat1,
  [1035] = 3,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(269), 1,
      anon_sym_BANG,
  [1045] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym__parameter_list_repeat1,
  [1055] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__parameter_list_repeat1,
  [1065] = 1,
    ACTIONS(277), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_remark_token1,
  [1071] = 1,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1077] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_attribute_repeat1,
  [1087] = 3,
    ACTIONS(267), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(269), 1,
      anon_sym_BANG,
    ACTIONS(284), 1,
      anon_sym_GT,
  [1097] = 2,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1105] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_attribute_repeat1,
  [1115] = 3,
    ACTIONS(267), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(269), 1,
      anon_sym_BANG,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1125] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym__parameter_list_repeat1,
  [1135] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_attribute_repeat1,
  [1145] = 3,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(65), 1,
      sym_parameter,
  [1155] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__field_list,
  [1162] = 2,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [1169] = 1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1174] = 1,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [1179] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__field_list,
  [1186] = 1,
    ACTIONS(313), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1191] = 2,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(87), 1,
      sym_parameter,
  [1198] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [1203] = 1,
    ACTIONS(172), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1208] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1213] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__parameter_list,
  [1220] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1225] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym__field_list,
  [1232] = 2,
    ACTIONS(317), 1,
      anon_sym_data,
    ACTIONS(319), 1,
      anon_sym_enum,
  [1239] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1244] = 1,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1249] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1254] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym__field_list,
  [1261] = 2,
    ACTIONS(321), 1,
      anon_sym_data,
    ACTIONS(323), 1,
      anon_sym_enum,
  [1268] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__field_list,
  [1275] = 1,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1280] = 1,
    ACTIONS(327), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1285] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1290] = 1,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1295] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1300] = 1,
    ACTIONS(335), 1,
      sym_identifier,
  [1304] = 1,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [1308] = 1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [1312] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1316] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [1320] = 1,
    ACTIONS(345), 1,
      anon_sym_LT,
  [1324] = 1,
    ACTIONS(347), 1,
      anon_sym_COLON,
  [1328] = 1,
    ACTIONS(349), 1,
      sym_identifier,
  [1332] = 1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
  [1336] = 1,
    ACTIONS(351), 1,
      sym_identifier,
  [1340] = 1,
    ACTIONS(353), 1,
      sym_identifier,
  [1344] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1348] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1352] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1356] = 1,
    ACTIONS(361), 1,
      anon_sym_SEMI,
  [1360] = 1,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1364] = 1,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1368] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1372] = 1,
    ACTIONS(284), 1,
      anon_sym_GT,
  [1376] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1380] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [1384] = 1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
  [1388] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [1392] = 1,
    ACTIONS(375), 1,
      sym_identifier,
  [1396] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [1400] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [1404] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [1408] = 1,
    ACTIONS(383), 1,
      aux_sym_doc_heading_token1,
  [1412] = 1,
    ACTIONS(385), 1,
      aux_sym_doc_heading_token1,
  [1416] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [1420] = 1,
    ACTIONS(389), 1,
      aux_sym_doc_heading_token1,
  [1424] = 1,
    ACTIONS(391), 1,
      aux_sym_doc_heading_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 317,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 359,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 478,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 538,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 568,
  [SMALL_STATE(27)] = 590,
  [SMALL_STATE(28)] = 609,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 643,
  [SMALL_STATE(31)] = 660,
  [SMALL_STATE(32)] = 678,
  [SMALL_STATE(33)] = 696,
  [SMALL_STATE(34)] = 714,
  [SMALL_STATE(35)] = 725,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 746,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 770,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 794,
  [SMALL_STATE(42)] = 806,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 834,
  [SMALL_STATE(45)] = 848,
  [SMALL_STATE(46)] = 862,
  [SMALL_STATE(47)] = 872,
  [SMALL_STATE(48)] = 881,
  [SMALL_STATE(49)] = 888,
  [SMALL_STATE(50)] = 899,
  [SMALL_STATE(51)] = 910,
  [SMALL_STATE(52)] = 921,
  [SMALL_STATE(53)] = 932,
  [SMALL_STATE(54)] = 943,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 965,
  [SMALL_STATE(57)] = 976,
  [SMALL_STATE(58)] = 989,
  [SMALL_STATE(59)] = 996,
  [SMALL_STATE(60)] = 1007,
  [SMALL_STATE(61)] = 1015,
  [SMALL_STATE(62)] = 1025,
  [SMALL_STATE(63)] = 1035,
  [SMALL_STATE(64)] = 1045,
  [SMALL_STATE(65)] = 1055,
  [SMALL_STATE(66)] = 1065,
  [SMALL_STATE(67)] = 1071,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1087,
  [SMALL_STATE(70)] = 1097,
  [SMALL_STATE(71)] = 1105,
  [SMALL_STATE(72)] = 1115,
  [SMALL_STATE(73)] = 1125,
  [SMALL_STATE(74)] = 1135,
  [SMALL_STATE(75)] = 1145,
  [SMALL_STATE(76)] = 1155,
  [SMALL_STATE(77)] = 1162,
  [SMALL_STATE(78)] = 1169,
  [SMALL_STATE(79)] = 1174,
  [SMALL_STATE(80)] = 1179,
  [SMALL_STATE(81)] = 1186,
  [SMALL_STATE(82)] = 1191,
  [SMALL_STATE(83)] = 1198,
  [SMALL_STATE(84)] = 1203,
  [SMALL_STATE(85)] = 1208,
  [SMALL_STATE(86)] = 1213,
  [SMALL_STATE(87)] = 1220,
  [SMALL_STATE(88)] = 1225,
  [SMALL_STATE(89)] = 1232,
  [SMALL_STATE(90)] = 1239,
  [SMALL_STATE(91)] = 1244,
  [SMALL_STATE(92)] = 1249,
  [SMALL_STATE(93)] = 1254,
  [SMALL_STATE(94)] = 1261,
  [SMALL_STATE(95)] = 1268,
  [SMALL_STATE(96)] = 1275,
  [SMALL_STATE(97)] = 1280,
  [SMALL_STATE(98)] = 1285,
  [SMALL_STATE(99)] = 1290,
  [SMALL_STATE(100)] = 1295,
  [SMALL_STATE(101)] = 1300,
  [SMALL_STATE(102)] = 1304,
  [SMALL_STATE(103)] = 1308,
  [SMALL_STATE(104)] = 1312,
  [SMALL_STATE(105)] = 1316,
  [SMALL_STATE(106)] = 1320,
  [SMALL_STATE(107)] = 1324,
  [SMALL_STATE(108)] = 1328,
  [SMALL_STATE(109)] = 1332,
  [SMALL_STATE(110)] = 1336,
  [SMALL_STATE(111)] = 1340,
  [SMALL_STATE(112)] = 1344,
  [SMALL_STATE(113)] = 1348,
  [SMALL_STATE(114)] = 1352,
  [SMALL_STATE(115)] = 1356,
  [SMALL_STATE(116)] = 1360,
  [SMALL_STATE(117)] = 1364,
  [SMALL_STATE(118)] = 1368,
  [SMALL_STATE(119)] = 1372,
  [SMALL_STATE(120)] = 1376,
  [SMALL_STATE(121)] = 1380,
  [SMALL_STATE(122)] = 1384,
  [SMALL_STATE(123)] = 1388,
  [SMALL_STATE(124)] = 1392,
  [SMALL_STATE(125)] = 1396,
  [SMALL_STATE(126)] = 1400,
  [SMALL_STATE(127)] = 1404,
  [SMALL_STATE(128)] = 1408,
  [SMALL_STATE(129)] = 1412,
  [SMALL_STATE(130)] = 1416,
  [SMALL_STATE(131)] = 1420,
  [SMALL_STATE(132)] = 1424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(101),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(125),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(94),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(124),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(132),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(131),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(28),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(128),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(129),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(112),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 6, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dto, 3, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 5, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(30),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(132),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(131),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(128),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(129),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(103),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat2, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat2, 2), SHIFT_REPEAT(126),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(30),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remark, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remark_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_remark_repeat1, 2), SHIFT_REPEAT(51),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_dto_repeat1, 2), SHIFT_REPEAT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(108),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remark, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remark_header, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(82),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
