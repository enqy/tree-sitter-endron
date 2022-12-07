module.exports = grammar({
  name: "endron",

  rules: {
    source_file: ($) =>
      repeat(
        $._line,
      ),

    block: ($) =>
      seq(
        "{",
        repeat(
          $._line,
        ),
        "}",
      ),

    _line: ($) =>
      choice(
        $.op,
        $.lineComment,
        $.docComment,
      ),

    op: ($) =>
      choice(
        $.opDecl,
        $.opSet,
        $.opCall,
        $.opBuiltin,
        $.opBranch,
        $.opAlu,
      ),

    opDecl: ($) =>
      seq(
        "@",
        field("name", $._expr),
        ";",
        field("expr", $._expr),
      ),

    opSet: ($) =>
      seq(
        "~",
        field("name", $._expr),
        ";",
        $._params,
      ),

    opCall: ($) =>
      seq(
        "!",
        field("name", $._expr),
        ";",
        $._params,
      ),

    opBuiltin: ($) =>
      seq(
        "|",
        field("name", $._expr),
        ";",
        $._params,
      ),

    opBranch: ($) =>
      seq(
        "?",
        field("cond", $._expr),
        ";",
        $._expr,
        ",",
        $._expr,
      ),

    opAlu: ($) =>
      seq(
        "#",
        field("func", $.aluFunc),
        ";",
        $._params,
      ),

    aluFunc: ($) =>
      choice(
        "+",
        "-",
        "*",
        "**",
        "/",
        ">",
        "<",
        "=",
      ),

    _params: ($) =>
      seq(
        $._expr,
        repeat(
          seq(
            ",",
            $._expr,
          ),
        ),
      ),

    _expr: ($) =>
      choice(
        $.ident,
        $.keyword,
        $.literalString,
        $.literalNumber,
        $.literalDecimal,
        $.block,
        $.scope,
      ),

    scope: ($) =>
      seq(
        field(
          "root",
          seq(
            ":",
            choice(
              $._modifierScope,
              $._identScope,
            ),
          ),
        ),
        field("path", $._scopePath),
      ),

    _modifierScope: ($) =>
      seq(
        choice(
          repeat1("*"),
          "^",
          "_",
        ),
        optional("."),
      ),

    _identScope: ($) =>
      seq(
        $.ident,
        ".",
      ),

    _scopePath: ($) =>
      seq(
        $.ident,
        repeat(
          seq(
            ".",
            $.ident,
          ),
        ),
      ),

    ident: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    keyword: ($) => /\$[a-zA-Z_][a-zA-Z0-9_]*/,

    literalString: ($) => /"(?:\\.|[^"\\])*"/,

    literalNumber: ($) => /[0-9]+/,

    literalDecimal: ($) => /[0-9]+\.[0-9]+/,

    lineComment: ($) => /\/\/.*/,

    docComment: ($) => /\/\/\/.*/,
  },
});
