module.exports = grammar({
  name: "facility",

  rules: {
    source_file: ($) => $._definition,

    _definition: ($) =>
      seq(
        repeat(choice($.comment, $.doc_comment, $.attribute)),
        $.service,
        repeat($.remark),
      ),

    service: ($) =>
      seq(
        "service",
        field("service_name", $.identifier),
        choice(
          seq("{", repeat($._service_item), "}"),
          seq(";", repeat($._service_item)),
        ),
      ),

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

    dto: ($) => seq("data", field("name", $.identifier), $._field_list),

    enum: ($) =>
      seq(
        "enum",
        field("name", $.identifier),
        "{",
        repeat(choice($.comment, $.doc_comment, seq($.identifier, ","))),
        "}",
      ),

    external_dto: ($) =>
      seq(
        repeat($.attribute),
        "extern",
        "data",
        field("name", $.identifier),
        ";",
      ),

    external_enum: ($) =>
      seq(
        repeat($.attribute),
        "extern",
        "enum",
        field("name", $.identifier),
        ";",
      ),

    method: ($) =>
      seq(
        repeat($.attribute),
        "method",
        field("name", $.identifier),
        $._field_list,
        ":",
        $._field_list,
      ),

    _attribute_property: ($) =>
      choice(
        "validate",
        "obsolete",
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

    parameter: ($) =>
      seq(
        field("name", $.identifier),
        ":",
        choice(
          $.string_literal,
          $.number_literal,
          $.range,
          seq($.identifier, repeat(seq(".", $.identifier))),
        ),
      ),

    _parameter_list: ($) =>
      seq(
        "(",
        choice(
          optional($.parameter),
          seq($.parameter, repeat(seq(",", $.parameter))),
        ),
        ")",
      ),

    range: ($) => seq($.number_literal, "..", optional($.number_literal)),

    template_type: ($) =>
      seq(
        choice("map", "nullable", "result"),
        "<",
        choice($.template_type, $.list_type, $.required_type, $.type),
        ">",
      ),
    list_type: ($) => seq($.type, "[]"),
    required_type: ($) => seq($.type, "!"),

    type: ($) =>
      seq(
        choice(
          "string",
          "datetime",
          "boolean",
          "double",
          "int32",
          "int64",
          "decimal",
          "bytes",
          "object",
          "error",
          field("name", $.identifier),
        ),
      ),

    _field_list: ($) =>
      seq("{", repeat(choice($.field, $.comment, $.doc_comment)), "}"),

    field: ($) =>
      seq(
        repeat($.attribute),
        field("name", $.identifier),
        ":",
        choice($.template_type, $.list_type, $.required_type, $.type),
        ";",
      ),

    remark_header: ($) => seq("#", $.identifier),
    remark: ($) => seq($.remark_header, repeat(/[a-zA-Z_][a-zA-Z_0-9].*/)),
    doc_heading: ($) => seq("///", /.*/),
    doc_comment: ($) => seq("///", /.*/),
    comment: ($) => seq("//", /.*/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    string_literal: ($) => /".*"/,

    number_literal: ($) => /[0-9]+/,
  },
});
