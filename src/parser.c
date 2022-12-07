#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_AT = 3,
  anon_sym_SEMI = 4,
  anon_sym_TILDE = 5,
  anon_sym_BANG = 6,
  anon_sym_PIPE = 7,
  anon_sym_QMARK = 8,
  anon_sym_COMMA = 9,
  anon_sym_POUND = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_STAR = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_EQ = 18,
  anon_sym_COLON = 19,
  anon_sym_CARET = 20,
  anon_sym__ = 21,
  anon_sym_DOT = 22,
  sym_ident = 23,
  sym_keyword = 24,
  sym_literalString = 25,
  sym_literalNumber = 26,
  sym_literalDecimal = 27,
  sym_lineComment = 28,
  sym_docComment = 29,
  sym_source_file = 30,
  sym_block = 31,
  sym__line = 32,
  sym_op = 33,
  sym_opDecl = 34,
  sym_opSet = 35,
  sym_opCall = 36,
  sym_opBuiltin = 37,
  sym_opBranch = 38,
  sym_opAlu = 39,
  sym_aluFunc = 40,
  sym__params = 41,
  sym__expr = 42,
  sym_scope = 43,
  sym__modifierScope = 44,
  sym__identScope = 45,
  sym__scopePath = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym__params_repeat1 = 48,
  aux_sym__modifierScope_repeat1 = 49,
  aux_sym__scopePath_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_SEMI] = ";",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUND] = "#",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [sym_ident] = "ident",
  [sym_keyword] = "keyword",
  [sym_literalString] = "literalString",
  [sym_literalNumber] = "literalNumber",
  [sym_literalDecimal] = "literalDecimal",
  [sym_lineComment] = "lineComment",
  [sym_docComment] = "docComment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym__line] = "_line",
  [sym_op] = "op",
  [sym_opDecl] = "opDecl",
  [sym_opSet] = "opSet",
  [sym_opCall] = "opCall",
  [sym_opBuiltin] = "opBuiltin",
  [sym_opBranch] = "opBranch",
  [sym_opAlu] = "opAlu",
  [sym_aluFunc] = "aluFunc",
  [sym__params] = "_params",
  [sym__expr] = "_expr",
  [sym_scope] = "scope",
  [sym__modifierScope] = "_modifierScope",
  [sym__identScope] = "_identScope",
  [sym__scopePath] = "_scopePath",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__params_repeat1] = "_params_repeat1",
  [aux_sym__modifierScope_repeat1] = "_modifierScope_repeat1",
  [aux_sym__scopePath_repeat1] = "_scopePath_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_ident] = sym_ident,
  [sym_keyword] = sym_keyword,
  [sym_literalString] = sym_literalString,
  [sym_literalNumber] = sym_literalNumber,
  [sym_literalDecimal] = sym_literalDecimal,
  [sym_lineComment] = sym_lineComment,
  [sym_docComment] = sym_docComment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym__line] = sym__line,
  [sym_op] = sym_op,
  [sym_opDecl] = sym_opDecl,
  [sym_opSet] = sym_opSet,
  [sym_opCall] = sym_opCall,
  [sym_opBuiltin] = sym_opBuiltin,
  [sym_opBranch] = sym_opBranch,
  [sym_opAlu] = sym_opAlu,
  [sym_aluFunc] = sym_aluFunc,
  [sym__params] = sym__params,
  [sym__expr] = sym__expr,
  [sym_scope] = sym_scope,
  [sym__modifierScope] = sym__modifierScope,
  [sym__identScope] = sym__identScope,
  [sym__scopePath] = sym__scopePath,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__params_repeat1] = aux_sym__params_repeat1,
  [aux_sym__modifierScope_repeat1] = aux_sym__modifierScope_repeat1,
  [aux_sym__scopePath_repeat1] = aux_sym__scopePath_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_literalString] = {
    .visible = true,
    .named = true,
  },
  [sym_literalNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_literalDecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_lineComment] = {
    .visible = true,
    .named = true,
  },
  [sym_docComment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_opDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_opSet] = {
    .visible = true,
    .named = true,
  },
  [sym_opCall] = {
    .visible = true,
    .named = true,
  },
  [sym_opBuiltin] = {
    .visible = true,
    .named = true,
  },
  [sym_opBranch] = {
    .visible = true,
    .named = true,
  },
  [sym_opAlu] = {
    .visible = true,
    .named = true,
  },
  [sym_aluFunc] = {
    .visible = true,
    .named = true,
  },
  [sym__params] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym__modifierScope] = {
    .visible = false,
    .named = true,
  },
  [sym__identScope] = {
    .visible = false,
    .named = true,
  },
  [sym__scopePath] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__modifierScope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scopePath_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_cond = 1,
  field_expr = 2,
  field_func = 3,
  field_name = 4,
  field_path = 5,
  field_root = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_cond] = "cond",
  [field_expr] = "expr",
  [field_func] = "func",
  [field_name] = "name",
  [field_path] = "path",
  [field_root] = "root",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 2},
    {field_root, 0},
    {field_root, 1},
  [3] =
    {field_expr, 3},
    {field_name, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_func, 1},
  [7] =
    {field_cond, 1},
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 6:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_literalString);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literalNumber);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_literalDecimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_lineComment);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_lineComment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_literalString] = ACTIONS(1),
    [sym_literalNumber] = ACTIONS(1),
    [sym_literalDecimal] = ACTIONS(1),
    [sym_lineComment] = ACTIONS(1),
    [sym_docComment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__line] = STATE(3),
    [sym_op] = STATE(3),
    [sym_opDecl] = STATE(23),
    [sym_opSet] = STATE(23),
    [sym_opCall] = STATE(23),
    [sym_opBuiltin] = STATE(23),
    [sym_opBranch] = STATE(23),
    [sym_opAlu] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_lineComment] = ACTIONS(17),
    [sym_docComment] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(26), 1,
      anon_sym_TILDE,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(32), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_lineComment,
    ACTIONS(44), 1,
      sym_docComment,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym__line,
      sym_op,
      aux_sym_source_file_repeat1,
    STATE(23), 6,
      sym_opDecl,
      sym_opSet,
      sym_opCall,
      sym_opBuiltin,
      sym_opBranch,
      sym_opAlu,
  [42] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_lineComment,
    ACTIONS(51), 1,
      sym_docComment,
    STATE(2), 3,
      sym__line,
      sym_op,
      aux_sym_source_file_repeat1,
    STATE(23), 6,
      sym_opDecl,
      sym_opSet,
      sym_opCall,
      sym_opBuiltin,
      sym_opBranch,
      sym_opAlu,
  [83] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      sym_lineComment,
    ACTIONS(51), 1,
      sym_docComment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym__line,
      sym_op,
      aux_sym_source_file_repeat1,
    STATE(23), 6,
      sym_opDecl,
      sym_opSet,
      sym_opCall,
      sym_opBuiltin,
      sym_opBranch,
      sym_opAlu,
  [124] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      sym_lineComment,
    ACTIONS(59), 1,
      sym_docComment,
    STATE(4), 3,
      sym__line,
      sym_op,
      aux_sym_source_file_repeat1,
    STATE(23), 6,
      sym_opDecl,
      sym_opSet,
      sym_opCall,
      sym_opBuiltin,
      sym_opBranch,
      sym_opAlu,
  [165] = 4,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      sym_docComment,
    STATE(6), 1,
      aux_sym__scopePath_repeat1,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [188] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      sym_docComment,
    STATE(8), 1,
      aux_sym__scopePath_repeat1,
    ACTIONS(68), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [211] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      sym_docComment,
    STATE(6), 1,
      aux_sym__scopePath_repeat1,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [234] = 2,
    ACTIONS(66), 1,
      sym_docComment,
    ACTIONS(61), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_DOT,
      sym_lineComment,
  [252] = 4,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      sym_docComment,
    STATE(13), 1,
      aux_sym__params_repeat1,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [273] = 4,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      sym_docComment,
    STATE(11), 1,
      aux_sym__params_repeat1,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [294] = 2,
    ACTIONS(93), 1,
      sym_docComment,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [311] = 4,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      sym_docComment,
    STATE(11), 1,
      aux_sym__params_repeat1,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [332] = 2,
    ACTIONS(101), 1,
      sym_docComment,
    ACTIONS(99), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [349] = 2,
    ACTIONS(105), 1,
      sym_docComment,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [366] = 6,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_literalNumber,
    STATE(35), 1,
      sym__params,
    STATE(10), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(111), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [390] = 6,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_literalNumber,
    STATE(32), 1,
      sym__params,
    STATE(10), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(111), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [414] = 6,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_literalNumber,
    STATE(21), 1,
      sym__params,
    STATE(10), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(111), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [438] = 6,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_literalNumber,
    STATE(25), 1,
      sym__params,
    STATE(10), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(111), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [462] = 2,
    ACTIONS(89), 1,
      sym_docComment,
    ACTIONS(84), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_POUND,
      sym_lineComment,
  [478] = 2,
    ACTIONS(117), 1,
      sym_docComment,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [493] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      sym_literalNumber,
    STATE(53), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(119), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [514] = 2,
    ACTIONS(125), 1,
      sym_docComment,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [529] = 2,
    ACTIONS(129), 1,
      sym_docComment,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [544] = 2,
    ACTIONS(133), 1,
      sym_docComment,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [559] = 2,
    ACTIONS(137), 1,
      sym_docComment,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [574] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      sym_literalNumber,
    STATE(26), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(139), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [595] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      sym_literalNumber,
    STATE(48), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(143), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [616] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(149), 1,
      sym_literalNumber,
    STATE(49), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(147), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [637] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      sym_literalNumber,
    STATE(52), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(151), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [658] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(157), 1,
      sym_literalNumber,
    STATE(44), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(155), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [679] = 2,
    ACTIONS(161), 1,
      sym_docComment,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [694] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      sym_literalNumber,
    STATE(43), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(163), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [715] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      sym_literalNumber,
    STATE(24), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(167), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [736] = 2,
    ACTIONS(173), 1,
      sym_docComment,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_lineComment,
  [751] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(177), 1,
      sym_literalNumber,
    STATE(20), 3,
      sym_block,
      sym__expr,
      sym_scope,
    ACTIONS(175), 4,
      sym_ident,
      sym_keyword,
      sym_literalString,
      sym_literalDecimal,
  [772] = 3,
    ACTIONS(181), 1,
      anon_sym_STAR,
    STATE(54), 1,
      sym_aluFunc,
    ACTIONS(179), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
  [788] = 6,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      sym_ident,
    STATE(40), 1,
      aux_sym__modifierScope_repeat1,
    STATE(41), 2,
      sym__modifierScope,
      sym__identScope,
  [808] = 3,
    ACTIONS(191), 1,
      anon_sym_STAR,
    STATE(39), 1,
      aux_sym__modifierScope_repeat1,
    ACTIONS(194), 2,
      anon_sym_DOT,
      sym_ident,
  [819] = 4,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      sym_ident,
    STATE(39), 1,
      aux_sym__modifierScope_repeat1,
  [832] = 2,
    ACTIONS(202), 1,
      sym_ident,
    STATE(12), 1,
      sym__scopePath,
  [839] = 2,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      sym_ident,
  [846] = 1,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [850] = 1,
    ACTIONS(206), 1,
      anon_sym_COMMA,
  [854] = 1,
    ACTIONS(208), 1,
      anon_sym_DOT,
  [858] = 1,
    ACTIONS(210), 1,
      sym_ident,
  [862] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [866] = 1,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [870] = 1,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [874] = 1,
    ACTIONS(218), 1,
      sym_ident,
  [878] = 1,
    ACTIONS(220), 1,
      sym_ident,
  [882] = 1,
    ACTIONS(222), 1,
      anon_sym_SEMI,
  [886] = 1,
    ACTIONS(224), 1,
      anon_sym_SEMI,
  [890] = 1,
    ACTIONS(226), 1,
      anon_sym_SEMI,
  [894] = 1,
    ACTIONS(228), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 414,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 493,
  [SMALL_STATE(23)] = 514,
  [SMALL_STATE(24)] = 529,
  [SMALL_STATE(25)] = 544,
  [SMALL_STATE(26)] = 559,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 595,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 637,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 679,
  [SMALL_STATE(33)] = 694,
  [SMALL_STATE(34)] = 715,
  [SMALL_STATE(35)] = 736,
  [SMALL_STATE(36)] = 751,
  [SMALL_STATE(37)] = 772,
  [SMALL_STATE(38)] = 788,
  [SMALL_STATE(39)] = 808,
  [SMALL_STATE(40)] = 819,
  [SMALL_STATE(41)] = 832,
  [SMALL_STATE(42)] = 839,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 850,
  [SMALL_STATE(45)] = 854,
  [SMALL_STATE(46)] = 858,
  [SMALL_STATE(47)] = 862,
  [SMALL_STATE(48)] = 866,
  [SMALL_STATE(49)] = 870,
  [SMALL_STATE(50)] = 874,
  [SMALL_STATE(51)] = 878,
  [SMALL_STATE(52)] = 882,
  [SMALL_STATE(53)] = 886,
  [SMALL_STATE(54)] = 890,
  [SMALL_STATE(55)] = 894,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__scopePath_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__scopePath_repeat1, 2), SHIFT_REPEAT(46),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scopePath_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scopePath, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scopePath, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scopePath, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scopePath, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__params, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__params_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__params_repeat1, 2), SHIFT_REPEAT(36),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__params_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__params, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opCall, 4, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opCall, 4, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opBranch, 6, .production_id = 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opBranch, 6, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opSet, 4, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opSet, 4, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opDecl, 4, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opDecl, 4, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opBuiltin, 4, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opBuiltin, 4, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opAlu, 4, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opAlu, 4, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__modifierScope_repeat1, 2), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__modifierScope_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifierScope, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identScope, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifierScope, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aluFunc, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_endron(void) {
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
