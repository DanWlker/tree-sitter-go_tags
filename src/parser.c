#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_SPACE = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_SEMI = 4,
  anon_sym_COMMA = 5,
  aux_sym_identifier_token1 = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym__tag_definition = 9,
  sym_block = 10,
  sym__statement = 11,
  sym_identifier_expression_statement = 12,
  sym_expression_statement = 13,
  sym_expression = 14,
  sym_identifier = 15,
  sym_expression_content = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_block_repeat1 = 18,
  aux_sym_expression_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_SPACE] = " ",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__tag_definition] = "_tag_definition",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_identifier_expression_statement] = "identifier_expression_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_identifier] = "identifier",
  [sym_expression_content] = "expression_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__tag_definition] = sym__tag_definition,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_identifier_expression_statement] = sym_identifier_expression_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_identifier] = sym_identifier,
  [sym_expression_content] = sym_expression_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ':') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(6),
    [sym__tag_definition] = STATE(6),
    [sym_identifier] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_expression_content,
    STATE(15), 1,
      sym_expression,
    STATE(27), 1,
      sym_identifier,
    STATE(3), 4,
      sym__statement,
      sym_identifier_expression_statement,
      sym_expression_statement,
      aux_sym_block_repeat1,
  [22] = 6,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_expression_content,
    STATE(15), 1,
      sym_expression,
    STATE(27), 1,
      sym_identifier,
    STATE(4), 4,
      sym__statement,
      sym_identifier_expression_statement,
      sym_expression_statement,
      aux_sym_block_repeat1,
  [44] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_expression_content,
    STATE(15), 1,
      sym_expression,
    STATE(27), 1,
      sym_identifier,
    STATE(4), 4,
      sym__statement,
      sym_identifier_expression_statement,
      sym_expression_statement,
      aux_sym_block_repeat1,
  [66] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
    STATE(5), 3,
      sym__definition,
      sym__tag_definition,
      aux_sym_source_file_repeat1,
  [81] = 4,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_identifier,
    STATE(5), 3,
      sym__definition,
      sym__tag_definition,
      aux_sym_source_file_repeat1,
  [96] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(27), 3,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [108] = 4,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_expression_repeat1,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [122] = 4,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      aux_sym_expression_repeat1,
    ACTIONS(37), 2,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [136] = 4,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_expression_repeat1,
    ACTIONS(41), 2,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
  [150] = 2,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(27), 3,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [159] = 2,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(41), 3,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [168] = 3,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_SPACE,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
  [178] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 2,
      anon_sym_SPACE,
      aux_sym_identifier_token1,
  [186] = 3,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
  [196] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      anon_sym_SPACE,
      aux_sym_identifier_token1,
  [204] = 3,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_expression_content,
    STATE(18), 1,
      sym_expression,
  [214] = 3,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
  [224] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_block,
  [231] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [236] = 2,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_identifier_token1,
  [243] = 2,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_expression_content,
  [250] = 2,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      aux_sym_identifier_token1,
  [257] = 1,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [261] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [265] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [269] = 1,
    ACTIONS(94), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 257,
  [SMALL_STATE(25)] = 261,
  [SMALL_STATE(26)] = 265,
  [SMALL_STATE(27)] = 269,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_content, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_definition, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_definition, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_expression_statement, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression_statement, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_definition, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_expression_statement, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression_statement, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_go_tags(void) {
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
