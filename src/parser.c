#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_attr = 2,
  aux_sym__cmd_token1 = 3,
  sym_cmd = 4,
  anon_sym_POUND = 5,
  anon_sym_STAR = 6,
  anon_sym_DASH = 7,
  sym__any = 8,
  sym_spec_file = 9,
  sym_section = 10,
  sym__attr = 11,
  sym__cmd = 12,
  sym_comment = 13,
  sym_changeLogEntry = 14,
  sym_code = 15,
  aux_sym__code = 16,
  aux_sym_spec_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_attr] = "attr",
  [aux_sym__cmd_token1] = "_cmd_token1",
  [sym_cmd] = "cmd",
  [anon_sym_POUND] = "#",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH] = "-",
  [sym__any] = "_any",
  [sym_spec_file] = "spec_file",
  [sym_section] = "section",
  [sym__attr] = "_attr",
  [sym__cmd] = "_cmd",
  [sym_comment] = "comment",
  [sym_changeLogEntry] = "changeLogEntry",
  [sym_code] = "code",
  [aux_sym__code] = "_code",
  [aux_sym_spec_file_repeat1] = "spec_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_attr] = sym_attr,
  [aux_sym__cmd_token1] = aux_sym__cmd_token1,
  [sym_cmd] = sym_cmd,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__any] = sym__any,
  [sym_spec_file] = sym_spec_file,
  [sym_section] = sym_section,
  [sym__attr] = sym__attr,
  [sym__cmd] = sym__cmd,
  [sym_comment] = sym_comment,
  [sym_changeLogEntry] = sym_changeLogEntry,
  [sym_code] = sym_code,
  [aux_sym__code] = aux_sym__code,
  [aux_sym_spec_file_repeat1] = aux_sym_spec_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym_spec_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__attr] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_changeLogEntry] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__code] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spec_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_attr);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__cmd_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__any);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__any);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__any);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_attr] = ACTIONS(1),
    [aux_sym__cmd_token1] = ACTIONS(3),
    [sym_cmd] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__any] = ACTIONS(1),
  },
  [1] = {
    [sym_spec_file] = STATE(14),
    [sym_section] = STATE(15),
    [sym__attr] = STATE(16),
    [sym__cmd] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_changeLogEntry] = STATE(16),
    [sym_code] = STATE(16),
    [aux_sym__code] = STATE(6),
    [aux_sym_spec_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_attr] = ACTIONS(7),
    [aux_sym__cmd_token1] = ACTIONS(9),
    [sym_cmd] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [sym__any] = ACTIONS(17),
  },
  [2] = {
    [sym_section] = STATE(15),
    [sym__attr] = STATE(16),
    [sym__cmd] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_changeLogEntry] = STATE(16),
    [sym_code] = STATE(16),
    [aux_sym__code] = STATE(6),
    [aux_sym_spec_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_attr] = ACTIONS(7),
    [aux_sym__cmd_token1] = ACTIONS(9),
    [sym_cmd] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [sym__any] = ACTIONS(17),
  },
  [3] = {
    [sym_section] = STATE(15),
    [sym__attr] = STATE(16),
    [sym__cmd] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_changeLogEntry] = STATE(16),
    [sym_code] = STATE(16),
    [aux_sym__code] = STATE(6),
    [aux_sym_spec_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_attr] = ACTIONS(23),
    [aux_sym__cmd_token1] = ACTIONS(9),
    [sym_cmd] = ACTIONS(26),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [sym__any] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(38), 1,
      sym__any,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      sym_attr,
      sym_cmd,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DASH,
  [15] = 4,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(17), 1,
      sym__any,
    STATE(6), 1,
      aux_sym__code,
    STATE(17), 1,
      sym_code,
  [28] = 4,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(40), 1,
      anon_sym_LF,
    ACTIONS(42), 1,
      sym__any,
    STATE(10), 1,
      aux_sym__code,
  [41] = 4,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(17), 1,
      sym__any,
    STATE(6), 1,
      aux_sym__code,
    STATE(18), 1,
      sym_code,
  [54] = 4,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(42), 1,
      sym__any,
    ACTIONS(44), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym__code,
  [67] = 4,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(42), 1,
      sym__any,
    ACTIONS(46), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym__code,
  [80] = 4,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym__any,
    STATE(10), 1,
      aux_sym__code,
  [93] = 3,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(53), 1,
      sym__any,
    STATE(8), 1,
      aux_sym__code,
  [103] = 3,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(55), 1,
      sym__any,
    STATE(9), 1,
      aux_sym__code,
  [113] = 2,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      aux_sym__cmd_token1,
  [120] = 2,
    ACTIONS(9), 1,
      aux_sym__cmd_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [127] = 2,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(63), 1,
      anon_sym_LF,
  [134] = 2,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(65), 1,
      anon_sym_LF,
  [141] = 2,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(67), 1,
      anon_sym_LF,
  [148] = 2,
    ACTIONS(3), 1,
      aux_sym__cmd_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 127,
  [SMALL_STATE(16)] = 134,
  [SMALL_STATE(17)] = 141,
  [SMALL_STATE(18)] = 148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_file_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_file_repeat1, 2), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_file_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_file_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_file_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spec_file_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changeLogEntry, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_r(void) {
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
