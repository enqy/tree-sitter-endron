[
  (lineComment)
  (docComment)
] @comment

[
  "@"
  "~"
  "!"
  "|"
  "?"
  "#"
  (aluFunc)
] @operator

(opDecl
  name: (ident) @function
  expr: (keyword) @type.builtin @keyword.fn
    (#match? @keyword.fn "fn"))

(opDecl
  name: (ident) @type
  expr: (keyword) @type.builtin @keyword.struct
    (#match? @keyword.struct "struct"))

(opDecl
  name: (ident) @variable)

(opSet name: (ident) @variable)

(opCall name:
  [
    (ident) @function
    (scope path: (ident) @function)
  ])

(opBuiltin name: (ident) @function.builtin)

(scope root: _ @module)

(ident) @variable

(keyword) @keyword

(literalString) @string

[
  (literalNumber)
  (literalDecimal)
] @number

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "{"
  "}"
] @punctuation.bracket
