#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_method = 7,
  anon_sym_COLON = 8,
  anon_sym_validate = 9,
  anon_sym_obselete = 10,
  anon_sym_required = 11,
  anon_sym_http = 12,
  anon_sym_csharp = 13,
  anon_sym_info = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_DOT = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_map = 20,
  anon_sym_nullable = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_string = 24,
  anon_sym_boolean = 25,
  anon_sym_double = 26,
  anon_sym_int32 = 27,
  anon_sym_int64 = 28,
  anon_sym_decimal = 29,
  anon_sym_byte = 30,
  anon_sym_object = 31,
  anon_sym_error = 32,
  anon_sym_LBRACK_RBRACK = 33,
  anon_sym_SEMI = 34,
  anon_sym_SLASH_SLASH_SLASH = 35,
  aux_sym_doc_comment_token1 = 36,
  anon_sym_SLASH_SLASH = 37,
  sym_identifier = 38,
  sym_string_literal = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym_service = 42,
  sym__service_item = 43,
  sym_dto = 44,
  sym_enum = 45,
  sym_method = 46,
  sym__attribute_property = 47,
  sym_attribute = 48,
  sym__parameter = 49,
  sym__parameter_list = 50,
  sym__template_type = 51,
  sym_type = 52,
  sym__field_list = 53,
  sym_field = 54,
  sym_doc_comment = 55,
  sym_comment = 56,
  aux_sym__definition_repeat1 = 57,
  aux_sym_service_repeat1 = 58,
  aux_sym_enum_repeat1 = 59,
  aux_sym_attribute_repeat1 = 60,
  aux_sym__parameter_repeat1 = 61,
  aux_sym__parameter_list_repeat1 = 62,
  aux_sym__field_list_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_data] = "data",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_method] = "method",
  [anon_sym_COLON] = ":",
  [anon_sym_validate] = "validate",
  [anon_sym_obselete] = "obselete",
  [anon_sym_required] = "required",
  [anon_sym_http] = "http",
  [anon_sym_csharp] = "csharp",
  [anon_sym_info] = "info",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_doc_comment_token1] = "doc_comment_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_service] = "service",
  [sym__service_item] = "_service_item",
  [sym_dto] = "dto",
  [sym_enum] = "enum",
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
  [anon_sym_method] = anon_sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_validate] = anon_sym_validate,
  [anon_sym_obselete] = anon_sym_obselete,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_csharp] = anon_sym_csharp,
  [anon_sym_info] = anon_sym_info,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [aux_sym_doc_comment_token1] = aux_sym_doc_comment_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_service] = sym_service,
  [sym__service_item] = sym__service_item,
  [sym_dto] = sym_dto,
  [sym_enum] = sym_enum,
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
  [anon_sym_csharp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
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
  [anon_sym_SEMI] = {
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
  [16] = 12,
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
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 34,
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
  [55] = 42,
  [56] = 56,
  [57] = 37,
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
  [71] = 71,
  [72] = 72,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(98);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'j') ADVANCE(36);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_obselete);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(149);
      if (lookahead == '6') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'y') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 146},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 146},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
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
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_validate] = ACTIONS(1),
    [anon_sym_obselete] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_csharp] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__definition] = STATE(70),
    [sym_service] = STATE(70),
    [sym_attribute] = STATE(23),
    [aux_sym__definition_repeat1] = STATE(23),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_data,
    ACTIONS(12), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_method,
    ACTIONS(18), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(24), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
    STATE(2), 7,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [35] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_data,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      anon_sym_method,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
    STATE(4), 7,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [70] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_data,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      anon_sym_method,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
    STATE(2), 7,
      sym__service_item,
      sym_dto,
      sym_enum,
      sym_method,
      sym_doc_comment,
      sym_comment,
      aux_sym_service_repeat1,
  [105] = 4,
    STATE(63), 1,
      sym__template_type,
    STATE(85), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_map,
      anon_sym_nullable,
    ACTIONS(43), 10,
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
  [128] = 4,
    STATE(63), 1,
      sym__template_type,
    STATE(79), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_map,
      anon_sym_nullable,
    ACTIONS(43), 10,
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
  [151] = 2,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [164] = 2,
    ACTIONS(51), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 7,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [177] = 5,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(9), 2,
      sym_field,
      aux_sym__field_list_repeat1,
    STATE(25), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [195] = 5,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(9), 2,
      sym_field,
      aux_sym__field_list_repeat1,
    STATE(25), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [213] = 2,
    ACTIONS(69), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [225] = 4,
    ACTIONS(71), 1,
      anon_sym_validate,
    STATE(36), 1,
      sym__attribute_property,
    ACTIONS(73), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(75), 3,
      anon_sym_http,
      anon_sym_csharp,
      anon_sym_info,
  [241] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_field,
      aux_sym__field_list_repeat1,
    STATE(25), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [259] = 2,
    ACTIONS(81), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [271] = 2,
    ACTIONS(85), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [283] = 4,
    ACTIONS(71), 1,
      anon_sym_validate,
    STATE(33), 1,
      sym__attribute_property,
    ACTIONS(87), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(75), 3,
      anon_sym_http,
      anon_sym_csharp,
      anon_sym_info,
  [299] = 2,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [311] = 4,
    ACTIONS(71), 1,
      anon_sym_validate,
    STATE(52), 1,
      sym__attribute_property,
    ACTIONS(93), 2,
      anon_sym_obselete,
      anon_sym_required,
    ACTIONS(75), 3,
      anon_sym_http,
      anon_sym_csharp,
      anon_sym_info,
  [327] = 2,
    ACTIONS(97), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [339] = 2,
    ACTIONS(101), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [351] = 2,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 6,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_method,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [363] = 3,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 2,
      anon_sym_service,
      anon_sym_method,
    STATE(22), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [375] = 4,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_service,
    STATE(22), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [389] = 3,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [400] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(30), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [411] = 3,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__parameter_list,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [422] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_method,
    STATE(22), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [433] = 3,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [444] = 3,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym__parameter_repeat1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [455] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    STATE(30), 2,
      sym_attribute,
      aux_sym__definition_repeat1,
  [466] = 3,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_enum_repeat1,
  [476] = 3,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_enum_repeat1,
  [486] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_attribute_repeat1,
  [496] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_attribute_repeat1,
  [506] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym__parameter_list_repeat1,
  [516] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_attribute_repeat1,
  [526] = 1,
    ACTIONS(155), 3,
      anon_sym_service,
      anon_sym_method,
      anon_sym_LBRACK,
  [532] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_attribute_repeat1,
  [542] = 1,
    ACTIONS(162), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [548] = 1,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [554] = 3,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(35), 1,
      sym__parameter,
  [564] = 1,
    ACTIONS(170), 3,
      anon_sym_service,
      anon_sym_method,
      anon_sym_LBRACK,
  [570] = 1,
    ACTIONS(124), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [576] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_attribute_repeat1,
  [586] = 3,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_repeat1,
  [596] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym__parameter_list_repeat1,
  [606] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym__parameter_list_repeat1,
  [616] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym__field_list,
  [623] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [628] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [633] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [638] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [643] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__field_list,
  [650] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__field_list,
  [657] = 1,
    ACTIONS(170), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [662] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym__field_list,
  [669] = 1,
    ACTIONS(155), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [674] = 2,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__parameter_list,
  [681] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [686] = 1,
    ACTIONS(189), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_SEMI,
  [691] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [696] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [701] = 2,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(195), 1,
      anon_sym_SEMI,
  [708] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym_string_literal,
  [715] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym__field_list,
  [722] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [727] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(59), 1,
      sym__parameter,
  [734] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [738] = 1,
    ACTIONS(205), 1,
      sym_identifier,
  [742] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [746] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [750] = 1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
  [754] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [758] = 1,
    ACTIONS(215), 1,
      sym_identifier,
  [762] = 1,
    ACTIONS(217), 1,
      sym_identifier,
  [766] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [770] = 1,
    ACTIONS(221), 1,
      anon_sym_LT,
  [774] = 1,
    ACTIONS(223), 1,
      sym_identifier,
  [778] = 1,
    ACTIONS(225), 1,
      anon_sym_SEMI,
  [782] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [786] = 1,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [790] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [794] = 1,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [798] = 1,
    ACTIONS(235), 1,
      aux_sym_doc_comment_token1,
  [802] = 1,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [806] = 1,
    ACTIONS(239), 1,
      anon_sym_GT,
  [810] = 1,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
  [814] = 1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
  [818] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [826] = 1,
    ACTIONS(249), 1,
      aux_sym_doc_comment_token1,
  [830] = 1,
    ACTIONS(251), 1,
      anon_sym_COLON,
  [834] = 1,
    ACTIONS(253), 1,
      sym_identifier,
  [838] = 1,
    ACTIONS(255), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 225,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 351,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 466,
  [SMALL_STATE(32)] = 476,
  [SMALL_STATE(33)] = 486,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 506,
  [SMALL_STATE(36)] = 516,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 532,
  [SMALL_STATE(39)] = 542,
  [SMALL_STATE(40)] = 548,
  [SMALL_STATE(41)] = 554,
  [SMALL_STATE(42)] = 564,
  [SMALL_STATE(43)] = 570,
  [SMALL_STATE(44)] = 576,
  [SMALL_STATE(45)] = 586,
  [SMALL_STATE(46)] = 596,
  [SMALL_STATE(47)] = 606,
  [SMALL_STATE(48)] = 616,
  [SMALL_STATE(49)] = 623,
  [SMALL_STATE(50)] = 628,
  [SMALL_STATE(51)] = 633,
  [SMALL_STATE(52)] = 638,
  [SMALL_STATE(53)] = 643,
  [SMALL_STATE(54)] = 650,
  [SMALL_STATE(55)] = 657,
  [SMALL_STATE(56)] = 662,
  [SMALL_STATE(57)] = 669,
  [SMALL_STATE(58)] = 674,
  [SMALL_STATE(59)] = 681,
  [SMALL_STATE(60)] = 686,
  [SMALL_STATE(61)] = 691,
  [SMALL_STATE(62)] = 696,
  [SMALL_STATE(63)] = 701,
  [SMALL_STATE(64)] = 708,
  [SMALL_STATE(65)] = 715,
  [SMALL_STATE(66)] = 722,
  [SMALL_STATE(67)] = 727,
  [SMALL_STATE(68)] = 734,
  [SMALL_STATE(69)] = 738,
  [SMALL_STATE(70)] = 742,
  [SMALL_STATE(71)] = 746,
  [SMALL_STATE(72)] = 750,
  [SMALL_STATE(73)] = 754,
  [SMALL_STATE(74)] = 758,
  [SMALL_STATE(75)] = 762,
  [SMALL_STATE(76)] = 766,
  [SMALL_STATE(77)] = 770,
  [SMALL_STATE(78)] = 774,
  [SMALL_STATE(79)] = 778,
  [SMALL_STATE(80)] = 782,
  [SMALL_STATE(81)] = 786,
  [SMALL_STATE(82)] = 790,
  [SMALL_STATE(83)] = 794,
  [SMALL_STATE(84)] = 798,
  [SMALL_STATE(85)] = 802,
  [SMALL_STATE(86)] = 806,
  [SMALL_STATE(87)] = 810,
  [SMALL_STATE(88)] = 814,
  [SMALL_STATE(89)] = 818,
  [SMALL_STATE(90)] = 822,
  [SMALL_STATE(91)] = 826,
  [SMALL_STATE(92)] = 830,
  [SMALL_STATE(93)] = 834,
  [SMALL_STATE(94)] = 838,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(74),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(75),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(16),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(91),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_list, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_list, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_list_repeat1, 2), SHIFT_REPEAT(92),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dto, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_repeat1, 2), SHIFT_REPEAT(78),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(88),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(18),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_type, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
