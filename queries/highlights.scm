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
  "method"
  "service"
  "data"
  "enum"
  "extern"
] @keyword

[
  "map"
  "nullable"
  (type)
] @type

[
  (comment)
  (doc_comment)
] @comment

(field
  name: (identifier) @variable)

(parameter
  name: (identifier) @property)

(method
  name: (identifier) @function.method)

(number_literal) @number
(string_literal) @string
