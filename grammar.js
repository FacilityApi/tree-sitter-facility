module.exports = grammar({
  name: "facility",

  rules: {
    source_file: ($) => $._definition,

    _definition: ($) =>
      seq(repeat(choice($.comment, $.doc_comment, $.attribute)), $.service),

    service: ($) =>
      seq("service", $.identifier, "{", repeat($._service_item), "}"),

    _service_item: ($) =>
      choice(
        $.dto,
        $.enum,
        $.external_dto,
        $.external_enum,
        $.method,
        $.doc_comment,
        $.comment,
        $.doc_comment,
        $.comment,
      ),

    dto: ($) => seq("data", $.identifier, $._field_list),

    enum: ($) =>
      seq(
        "enum",
        $.identifier,
        "{",
        repeat(choice($.comment, $.doc_comment, seq($.identifier, ","))),
        "}",
      ),

    external_dto: ($) =>
      seq(repeat($.attribute), "extern", "data", $.identifier, ";"),

    external_enum: ($) =>
      seq(repeat($.attribute), "extern", "enum", $.identifier, ";"),

    method: ($) =>
      seq(
        repeat($.attribute),
        "method",
        $.identifier,
        $._field_list,
        ":",
        $._field_list,
      ),

    _attribute_property: ($) =>
      choice(
        "validate",
        "obselete",
        "required",
        seq(
          choice("validate", "http", "info", "csharp", "js"),
          $._parameter_list,
        ),
      ),

    attribute: ($) =>
      seq(
        "[",
        $._attribute_property,
        repeat(seq(",", $._attribute_property)),
        "]",
      ),

    _parameter: ($) =>
      seq(
        $.identifier,
        ":",
        choice(
          $.string_literal,
          $.number_literal,
          seq($.identifier, repeat(seq(".", $.identifier))),
        ),
      ),

    _parameter_list: ($) =>
      seq(
        "(",
        choice(
          optional($._parameter),
          seq($._parameter, repeat(seq(",", $._parameter))),
        ),
        ")",
      ),

    _template_type: ($) => seq(choice("map", "nullable"), "<", $.type, ">"),

    type: ($) =>
      seq(
        choice(
          "string",
          "boolean",
          "double",
          "int32",
          "int64",
          "decimal",
          "byte",
          "object",
          "error",
          $.identifier,
          $._template_type,
        ),
        optional("[]"),
      ),

    _field_list: ($) =>
      seq("{", repeat(choice($.field, $.comment, $.doc_comment)), "}"),

    field: ($) => seq(repeat($.attribute), $.identifier, ":", $.type, ";"),

    doc_heading: ($) => seq("///", /.*/),
    doc_comment: ($) => seq("///", /.*/),
    comment: ($) => seq("//", /.*/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    string_literal: ($) => /".*"/,

    number_literal: ($) => /[0-9]+/,
  },
});
