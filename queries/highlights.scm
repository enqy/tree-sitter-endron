[
  (lineComment)
  (docComment)
] @comment

[
  "@"
  "~"
] @constructor

[
  "!"
  "|"
  "#"
] @function.call

[
  "?"
] @function.builtin

[
  "$"
] @type.builtin

(aluFunc) @operator

(opDecl
  name: (ident) @function
  expr: [
    (earlyOpType
      name: (ident) @keyword.fn
      (#match? @keyword.fn "fn"))
    (block
      (op
        (opType
          (earlyOpType
            name: (ident) @keyword.fn
            (#match? @keyword.fn "fn")))))
  ])

(opDecl
  name: (ident) @type
  expr: [
    (earlyOpType
      name: (ident) @keyword.type
      (#match? @keyword.type "type"))
    (block
      (op
        (opType
          (earlyOpType
            name: (ident) @keyword.type
            (#match? @keyword.type "type")))))
  ])

(opDecl
  name: (ident) @variable)

(earlyOpType
  name: (scope
          root: _
          path: (ident) @type))

(earlyOpType
  name: (ident) @type.builtin)

(opSet name: (ident) @variable)

(opCall name:
  [
    (ident) @function
    (scope path: (ident) @function)
  ])

(opBuiltin name: (ident) @function.builtin)

(scope root: _ @module)

(ident) @variable

(literalString) @string

(literalNumber) @number

(literalDecimal) @number @float

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "{"
  "}"
] @punctuation.bracket
