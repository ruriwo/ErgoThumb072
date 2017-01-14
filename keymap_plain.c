#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: qwerty
     * ,---------------------------------------------------------.
     * |Esc  |  1|  2|  3|  4|  5|  `|  '|  6|  7|  8|  9|  0|  -|
     * |---------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|Spc|Spc|  Y|  U|  I|  O|  P|  \|
     * |---------------------------------------------------------|
     * |Ctrl|  A|  S|  D|  F|  G|  [||  ]|  H|  J|  K|  L|  ;|  =|
     * |---------------------------------------------------------|
     * |LSFT|  Z|  X|  C|  V|  B|Spc||Spc|  N|  M|  ,|  .|  /|RSFT|
     * |----------------------------------------------------------'
     * |Ctrl|Gui|Alt|Spc|FN0|Bsc|Spc||Spc|Spc|FN0|Spc|Alt|App|Ctrl|
     * `-----------------------------------------------------------'
     *                          |Del||Ent|
     *                          `--------'
     */

    [0] = KEYMAP( \
      // 1      2    3    4    5    6   7   8      9   10   11   12   13  14
         ESC,   1,   2,   3,   4,   5, GRV,QUOT,   6,   7,   8,   9,   0,MINS, \
         TAB,   Q,   W,   E,   R,   T, GRV,QUOT,   Y,   U,   I,   O,   P,BSLS, \
        LCTL,   A,   S,   D,   F,   G,LBRC,RBRC,   H,   J,   K,   L,SCLN, EQL, \
        LSFT,   Z,   X,   C,   V,   B, FN3, FN4,   N,   M,COMM, DOT,SLSH,RSFT, \
        LCTL,LGUI,LALT,LSFT, FN0, FN6, FN2, FN2, FN5, FN0,RSFT,RALT, APP,RCTL, \
                                       DEL, ENT),
    [1] = KEYMAP( \
      // 1      2    3    4    5    6   7   8      9   10   11   12   13  14
        TRNS,  F1,  F2,  F3,  F4,  F5,TRNS,TRNS,  F6,  F7,  F8,  F9, F10,TRNS, \
        TRNS,TRNS,TRNS,  UP,TRNS,TRNS, F11, F12,TRNS,TRNS,  UP,TRNS,TRNS,TRNS, \
        TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC, DEL,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                                      TRNS,TRNS),
    [2] = KEYMAP( \
      // 1      2    3    4    5    6   7   8      9   10   11   12   13  14
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,PSLS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P4,  P5,  P6,PMNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,  P3,PPLS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC,  P0,  P0,PDOT,PENT,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, ENT,TRNS, \
                                      TRNS,TRNS),
};

const action_t fn_actions[] PROGMEM = {
    /*FN0*/ [0] = ACTION_LAYER_MOMENTARY(1),
    /*FN1*/ [1] = ACTION_LAYER_TOGGLE(1),
    /*FN2*/ [2] = ACTION_LAYER_TOGGLE(2),
    /*FN3*/ [3] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_F13),
    /*FN4*/ [4] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_F14),
    /*FN5*/ [5] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),
    /*FN6*/ [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),
};
