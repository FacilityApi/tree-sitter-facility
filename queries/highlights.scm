[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
  (comment)
  (doc_comment)
] @comment

("method") @keyword.function

[
  "service"
  "data"
  "enum"
  "extern"
] @type.builtin

(type) @type.builtin

(service
  service_name: (identifier) @type)

(dto
  name: (identifier) @type)

(external_dto
  name: (identifier) @type)

(enum
  (identifier) @property)

(enum
  name: (identifier) @type)

(external_enum
  name: (identifier) @type)

(type
  name: (identifier) @type)

[
  "map"
  "nullable"
  "result"
  "required"
  "http"
  "csharp"
  "js"
  "info"
  "obsolete"
] @attribute.builtin

(parameter
  name: (identifier) @property)

(field
  name: (identifier) @variable)

(method
  name: (identifier) @function.method)

(number_literal) @number
(string_literal) @string

(remark) @text.literal
(remark_header) @text.title
