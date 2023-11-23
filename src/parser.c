#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_service = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_errors = 5,
  anon_sym_COMMA = 6,
  anon_sym_data = 7,
  anon_sym_enum = 8,
  anon_sym_extern = 9,
  anon_sym_method = 10,
  anon_sym_COLON = 11,
  anon_sym_validate = 12,
  anon_sym_obsolete = 13,
  anon_sym_required = 14,
  anon_sym_http = 15,
  anon_sym_info = 16,
  anon_sym_csharp = 17,
  anon_sym_js = 18,
  anon_sym_proto = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_DOT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_DOT_DOT = 25,
  anon_sym_map = 26,
  anon_sym_nullable = 27,
  anon_sym_result = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_LBRACK_RBRACK = 31,
  anon_sym_BANG = 32,
  anon_sym_string = 33,
  anon_sym_datetime = 34,
  anon_sym_boolean = 35,
  anon_sym_double = 36,
  anon_sym_int32 = 37,
  anon_sym_int64 = 38,
  anon_sym_decimal = 39,
  anon_sym_bytes = 40,
  anon_sym_object = 41,
  anon_sym_error = 42,
  anon_sym_SLASH_SLASH_SLASH = 43,
  aux_sym_doc_comment_token1 = 44,
  anon_sym_SLASH_SLASH = 45,
  sym_identifier = 46,
  sym_string_literal = 47,
  sym_number_literal = 48,
  anon_sym_POUND = 49,
  aux_sym_remarks_token1 = 50,
  sym_source_file = 51,
  sym__definition = 52,
  sym_service = 53,
  sym__service_item = 54,
  sym_error_set = 55,
  sym_dto = 56,
  sym_enum = 57,
  sym_external_dto = 58,
  sym_external_enum = 59,
  sym_method = 60,
  sym__attribute_property = 61,
  sym_attribute = 62,
  sym_parameter = 63,
  sym__parameter_list = 64,
  sym_range = 65,
  sym_template_type = 66,
  sym_list_type = 67,
  sym_required_type = 68,
  sym_type = 69,
  sym__field_list = 70,
  sym_field = 71,
  sym_doc_comment = 72,
  sym_comment = 73,
  sym_remarks = 74,
  aux_sym__definition_repeat1 = 75,
  aux_sym_service_repeat1 = 76,
  aux_sym_service_repeat2 = 77,
  aux_sym_error_set_repeat1 = 78,
  aux_sym_error_set_repeat2 = 79,
  aux_sym_attribute_repeat1 = 80,
  aux_sym_parameter_repeat1 = 81,
  aux_sym__parameter_list_repeat1 = 82,
  aux_sym__field_list_repeat1 = 83,
  aux_sym_remarks_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_errors] = "errors",
  [anon_sym_COMMA] = ",",
  [anon_sym_data] = "data",
  [anon_sym_enum] = "enum",
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
  [anon_sym_proto] = "proto",
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
  [sym_error_set] = "error_set",
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
  [aux_sym_error_set_repeat1] = "error_set_repeat1",
  [aux_sym_error_set_repeat2] = "error_set_repeat2",
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
  [anon_sym_errors] = anon_sym_errors,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_enum] = anon_sym_enum,
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
  [anon_sym_proto] = anon_sym_proto,
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
  [sym_error_set] = sym_error_set,
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
  [aux_sym_error_set_repeat1] = aux_sym_error_set_repeat1,
  [aux_sym_error_set_repeat2] = aux_sym_error_set_repeat2,
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
  [anon_sym_errors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_proto] = {
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
  [sym_error_set] = {
    .visible = true,
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
  [aux_sym_error_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_set_repeat2] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 29,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 53,
  [72] = 29,
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
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 80,
  [91] = 91,
  [92] = 83,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 41,
  [99] = 99,
  [100] = 100,
  [101] = 44,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 157,
  [158] = 153,
  [159] = 154,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(162);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'j') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(162);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(171);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(115);
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
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(80);
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
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'j') ADVANCE(41);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(175);
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
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(133);
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
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'q') ADVANCE(120);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_errors);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_obsolete);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_proto);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(188);
      if (lookahead == '6') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 124},
  [3] = {.lex_state = 124},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 124},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 124},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 124},
  [21] = {.lex_state = 124},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 124},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 124},
  [37] = {.lex_state = 124},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 123},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 123},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 123},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 124},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 184},
  [154] = {.lex_state = 184},
  [155] = {.lex_state = 184},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 184},
  [159] = {.lex_state = 184},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_errors] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
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
    [anon_sym_proto] = ACTIONS(1),
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
    [sym_source_file] = STATE(149),
    [sym__definition] = STATE(148),
    [sym_service] = STATE(148),
    [sym_attribute] = STATE(42),
    [sym_doc_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [aux_sym__definition_repeat1] = STATE(42),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_method,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(47), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(56), 2,
      sym_remarks,
      aux_sym_service_repeat2,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [47] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_method,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(65), 2,
      sym_remarks,
      aux_sym_service_repeat2,
    STATE(2), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [94] = 10,
    ACTIONS(31), 1,
      anon_sym_errors,
    ACTIONS(34), 1,
      anon_sym_data,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(43), 1,
      anon_sym_method,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [136] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_method,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(6), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [176] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_method,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_repeat1,
  [216] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(77), 1,
      sym_type,
    STATE(112), 1,
      sym_template_type,
    STATE(130), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
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
  [247] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(86), 1,
      sym_type,
    STATE(103), 1,
      sym_template_type,
    STATE(144), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
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
  [278] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(85), 1,
      sym_type,
    STATE(104), 1,
      sym_template_type,
    STATE(141), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
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
  [309] = 7,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(64), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(12), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [335] = 1,
    ACTIONS(72), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [349] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(64), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(14), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [375] = 1,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [389] = 7,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(64), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(14), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym__field_list_repeat1,
  [415] = 1,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [428] = 1,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [441] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(22), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [466] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(33), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [491] = 1,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [504] = 1,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [517] = 1,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [530] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(35), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [555] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(35), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [580] = 1,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [593] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(35), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [618] = 1,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [631] = 1,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [644] = 1,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [657] = 1,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [670] = 1,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [683] = 1,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [696] = 1,
    ACTIONS(128), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [709] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(35), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [734] = 1,
    ACTIONS(132), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [747] = 7,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(35), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [772] = 1,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [785] = 1,
    ACTIONS(150), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [798] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(23), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [823] = 7,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    STATE(25), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_error_set_repeat2,
  [848] = 1,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [861] = 2,
    ACTIONS(160), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 8,
      anon_sym_service,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [875] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(132), 1,
      sym_service,
    STATE(48), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [897] = 4,
    ACTIONS(164), 1,
      anon_sym_required,
    STATE(90), 1,
      sym__attribute_property,
    ACTIONS(162), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(166), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [915] = 2,
    ACTIONS(170), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 8,
      anon_sym_service,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [929] = 4,
    ACTIONS(172), 1,
      anon_sym_required,
    STATE(106), 1,
      sym__attribute_property,
    ACTIONS(162), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(166), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [947] = 4,
    ACTIONS(174), 1,
      anon_sym_required,
    STATE(80), 1,
      sym__attribute_property,
    ACTIONS(162), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(166), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [965] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_errors,
    ACTIONS(178), 1,
      anon_sym_data,
    ACTIONS(180), 1,
      anon_sym_enum,
    ACTIONS(182), 1,
      anon_sym_extern,
    ACTIONS(184), 1,
      anon_sym_method,
    STATE(49), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
  [988] = 5,
    ACTIONS(186), 1,
      anon_sym_service,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(194), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [1007] = 3,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(49), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
    ACTIONS(197), 5,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
  [1022] = 2,
    ACTIONS(204), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1032] = 2,
    ACTIONS(206), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1042] = 2,
    ACTIONS(210), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1052] = 2,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1062] = 2,
    ACTIONS(216), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1072] = 2,
    ACTIONS(220), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1082] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1093] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(56), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1104] = 3,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1115] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1126] = 4,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_remarks_token1,
    STATE(76), 1,
      aux_sym_remarks_repeat1,
  [1139] = 3,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      anon_sym_POUND,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1150] = 4,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_string_literal,
    ACTIONS(243), 1,
      sym_number_literal,
    STATE(94), 1,
      sym_range,
  [1163] = 3,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    STATE(63), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
  [1174] = 3,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(63), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
  [1185] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1196] = 4,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      aux_sym_remarks_token1,
    STATE(60), 1,
      aux_sym_remarks_repeat1,
  [1209] = 3,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(63), 2,
      sym_attribute,
      aux_sym_error_set_repeat1,
  [1220] = 3,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym__parameter_list,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1231] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat2,
  [1242] = 3,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1253] = 2,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(212), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [1262] = 2,
    ACTIONS(216), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [1271] = 3,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1282] = 1,
    ACTIONS(271), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [1289] = 1,
    ACTIONS(273), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [1296] = 4,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      aux_sym_remarks_token1,
    STATE(76), 1,
      aux_sym_remarks_repeat1,
  [1309] = 3,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(286), 1,
      anon_sym_BANG,
  [1319] = 3,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(91), 1,
      sym_parameter,
  [1329] = 2,
    ACTIONS(292), 1,
      anon_sym_DOT_DOT,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1337] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_attribute_repeat1,
  [1347] = 1,
    ACTIONS(264), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1353] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__parameter_list_repeat1,
  [1363] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_attribute_repeat1,
  [1373] = 2,
    ACTIONS(307), 1,
      sym_number_literal,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1381] = 3,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(286), 1,
      anon_sym_BANG,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [1391] = 3,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(286), 1,
      anon_sym_BANG,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1401] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__parameter_list_repeat1,
  [1411] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_attribute_repeat1,
  [1421] = 1,
    ACTIONS(322), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
  [1427] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_attribute_repeat1,
  [1437] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym__parameter_list_repeat1,
  [1447] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_attribute_repeat1,
  [1457] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1462] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1467] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym__field_list,
  [1474] = 2,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parameter,
  [1481] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1486] = 1,
    ACTIONS(158), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1491] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__field_list,
  [1498] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__field_list,
  [1505] = 1,
    ACTIONS(168), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1510] = 2,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_SEMI,
  [1517] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1524] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [1531] = 1,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1536] = 1,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1541] = 1,
    ACTIONS(342), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1546] = 2,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym__parameter_list,
  [1553] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1558] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym__field_list,
  [1565] = 2,
    ACTIONS(346), 1,
      anon_sym_data,
    ACTIONS(348), 1,
      anon_sym_enum,
  [1572] = 2,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_LBRACK_RBRACK,
  [1579] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym__field_list,
  [1586] = 2,
    ACTIONS(350), 1,
      anon_sym_data,
    ACTIONS(352), 1,
      anon_sym_enum,
  [1593] = 1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1598] = 1,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1603] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym__field_list,
  [1610] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1615] = 1,
    ACTIONS(358), 1,
      sym_identifier,
  [1619] = 1,
    ACTIONS(360), 1,
      anon_sym_COMMA,
  [1623] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1627] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1631] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [1635] = 1,
    ACTIONS(368), 1,
      sym_identifier,
  [1639] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1643] = 1,
    ACTIONS(372), 1,
      anon_sym_COLON,
  [1647] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [1651] = 1,
    ACTIONS(376), 1,
      sym_identifier,
  [1655] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1659] = 1,
    ACTIONS(282), 1,
      anon_sym_SEMI,
  [1663] = 1,
    ACTIONS(380), 1,
      sym_identifier,
  [1667] = 1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [1671] = 1,
    ACTIONS(384), 1,
      sym_identifier,
  [1675] = 1,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
  [1679] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [1683] = 1,
    ACTIONS(390), 1,
      anon_sym_COLON,
  [1687] = 1,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [1691] = 1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
  [1695] = 1,
    ACTIONS(396), 1,
      anon_sym_LT,
  [1699] = 1,
    ACTIONS(398), 1,
      sym_identifier,
  [1703] = 1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [1707] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [1711] = 1,
    ACTIONS(402), 1,
      anon_sym_SEMI,
  [1715] = 1,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1719] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [1723] = 1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [1727] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [1731] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [1735] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [1739] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [1743] = 1,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
  [1747] = 1,
    ACTIONS(418), 1,
      sym_identifier,
  [1751] = 1,
    ACTIONS(420), 1,
      aux_sym_doc_comment_token1,
  [1755] = 1,
    ACTIONS(422), 1,
      aux_sym_doc_comment_token1,
  [1759] = 1,
    ACTIONS(424), 1,
      aux_sym_doc_comment_token1,
  [1763] = 1,
    ACTIONS(426), 1,
      sym_identifier,
  [1767] = 1,
    ACTIONS(428), 1,
      sym_identifier,
  [1771] = 1,
    ACTIONS(430), 1,
      aux_sym_doc_comment_token1,
  [1775] = 1,
    ACTIONS(432), 1,
      aux_sym_doc_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 389,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 428,
  [SMALL_STATE(17)] = 441,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 491,
  [SMALL_STATE(20)] = 504,
  [SMALL_STATE(21)] = 517,
  [SMALL_STATE(22)] = 530,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 580,
  [SMALL_STATE(25)] = 593,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 631,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 657,
  [SMALL_STATE(30)] = 670,
  [SMALL_STATE(31)] = 683,
  [SMALL_STATE(32)] = 696,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 734,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 772,
  [SMALL_STATE(37)] = 785,
  [SMALL_STATE(38)] = 798,
  [SMALL_STATE(39)] = 823,
  [SMALL_STATE(40)] = 848,
  [SMALL_STATE(41)] = 861,
  [SMALL_STATE(42)] = 875,
  [SMALL_STATE(43)] = 897,
  [SMALL_STATE(44)] = 915,
  [SMALL_STATE(45)] = 929,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 965,
  [SMALL_STATE(48)] = 988,
  [SMALL_STATE(49)] = 1007,
  [SMALL_STATE(50)] = 1022,
  [SMALL_STATE(51)] = 1032,
  [SMALL_STATE(52)] = 1042,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1062,
  [SMALL_STATE(55)] = 1072,
  [SMALL_STATE(56)] = 1082,
  [SMALL_STATE(57)] = 1093,
  [SMALL_STATE(58)] = 1104,
  [SMALL_STATE(59)] = 1115,
  [SMALL_STATE(60)] = 1126,
  [SMALL_STATE(61)] = 1139,
  [SMALL_STATE(62)] = 1150,
  [SMALL_STATE(63)] = 1163,
  [SMALL_STATE(64)] = 1174,
  [SMALL_STATE(65)] = 1185,
  [SMALL_STATE(66)] = 1196,
  [SMALL_STATE(67)] = 1209,
  [SMALL_STATE(68)] = 1220,
  [SMALL_STATE(69)] = 1231,
  [SMALL_STATE(70)] = 1242,
  [SMALL_STATE(71)] = 1253,
  [SMALL_STATE(72)] = 1262,
  [SMALL_STATE(73)] = 1271,
  [SMALL_STATE(74)] = 1282,
  [SMALL_STATE(75)] = 1289,
  [SMALL_STATE(76)] = 1296,
  [SMALL_STATE(77)] = 1309,
  [SMALL_STATE(78)] = 1319,
  [SMALL_STATE(79)] = 1329,
  [SMALL_STATE(80)] = 1337,
  [SMALL_STATE(81)] = 1347,
  [SMALL_STATE(82)] = 1353,
  [SMALL_STATE(83)] = 1363,
  [SMALL_STATE(84)] = 1373,
  [SMALL_STATE(85)] = 1381,
  [SMALL_STATE(86)] = 1391,
  [SMALL_STATE(87)] = 1401,
  [SMALL_STATE(88)] = 1411,
  [SMALL_STATE(89)] = 1421,
  [SMALL_STATE(90)] = 1427,
  [SMALL_STATE(91)] = 1437,
  [SMALL_STATE(92)] = 1447,
  [SMALL_STATE(93)] = 1457,
  [SMALL_STATE(94)] = 1462,
  [SMALL_STATE(95)] = 1467,
  [SMALL_STATE(96)] = 1474,
  [SMALL_STATE(97)] = 1481,
  [SMALL_STATE(98)] = 1486,
  [SMALL_STATE(99)] = 1491,
  [SMALL_STATE(100)] = 1498,
  [SMALL_STATE(101)] = 1505,
  [SMALL_STATE(102)] = 1510,
  [SMALL_STATE(103)] = 1517,
  [SMALL_STATE(104)] = 1524,
  [SMALL_STATE(105)] = 1531,
  [SMALL_STATE(106)] = 1536,
  [SMALL_STATE(107)] = 1541,
  [SMALL_STATE(108)] = 1546,
  [SMALL_STATE(109)] = 1553,
  [SMALL_STATE(110)] = 1558,
  [SMALL_STATE(111)] = 1565,
  [SMALL_STATE(112)] = 1572,
  [SMALL_STATE(113)] = 1579,
  [SMALL_STATE(114)] = 1586,
  [SMALL_STATE(115)] = 1593,
  [SMALL_STATE(116)] = 1598,
  [SMALL_STATE(117)] = 1603,
  [SMALL_STATE(118)] = 1610,
  [SMALL_STATE(119)] = 1615,
  [SMALL_STATE(120)] = 1619,
  [SMALL_STATE(121)] = 1623,
  [SMALL_STATE(122)] = 1627,
  [SMALL_STATE(123)] = 1631,
  [SMALL_STATE(124)] = 1635,
  [SMALL_STATE(125)] = 1639,
  [SMALL_STATE(126)] = 1643,
  [SMALL_STATE(127)] = 1647,
  [SMALL_STATE(128)] = 1651,
  [SMALL_STATE(129)] = 1655,
  [SMALL_STATE(130)] = 1659,
  [SMALL_STATE(131)] = 1663,
  [SMALL_STATE(132)] = 1667,
  [SMALL_STATE(133)] = 1671,
  [SMALL_STATE(134)] = 1675,
  [SMALL_STATE(135)] = 1679,
  [SMALL_STATE(136)] = 1683,
  [SMALL_STATE(137)] = 1687,
  [SMALL_STATE(138)] = 1691,
  [SMALL_STATE(139)] = 1695,
  [SMALL_STATE(140)] = 1699,
  [SMALL_STATE(141)] = 1703,
  [SMALL_STATE(142)] = 1707,
  [SMALL_STATE(143)] = 1711,
  [SMALL_STATE(144)] = 1715,
  [SMALL_STATE(145)] = 1719,
  [SMALL_STATE(146)] = 1723,
  [SMALL_STATE(147)] = 1727,
  [SMALL_STATE(148)] = 1731,
  [SMALL_STATE(149)] = 1735,
  [SMALL_STATE(150)] = 1739,
  [SMALL_STATE(151)] = 1743,
  [SMALL_STATE(152)] = 1747,
  [SMALL_STATE(153)] = 1751,
  [SMALL_STATE(154)] = 1755,
  [SMALL_STATE(155)] = 1759,
  [SMALL_STATE(156)] = 1763,
  [SMALL_STATE(157)] = 1767,
  [SMALL_STATE(158)] = 1771,
  [SMALL_STATE(159)] = 1775,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(121),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(124),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(125),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(114),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(128),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(46),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(155),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(43),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(154),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(158),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(127),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 5, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 4, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 5, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_set_repeat2, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_set_repeat2, 2), SHIFT_REPEAT(43),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_set_repeat2, 2), SHIFT_REPEAT(154),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_error_set_repeat2, 2), SHIFT_REPEAT(158),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_set_repeat2, 2), SHIFT_REPEAT(120),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 6, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 4, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(46),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(159),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(153),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_set_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_set_repeat1, 2), SHIFT_REPEAT(46),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_error_set_repeat2, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_set_repeat2, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_error_set_repeat2, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat2, 2), SHIFT_REPEAT(66),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_set_repeat1, 2), SHIFT_REPEAT(43),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 6, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(119),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remarks_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2), SHIFT_REPEAT(76),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(96),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(45),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
