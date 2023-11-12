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

(type) @type

[
  (comment)
  (doc_comment)
] @comment

(number_literal) @number
(string_literal) @string
