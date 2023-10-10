#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), KC_NO, KC_NO, KC_Z, RALT_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(3,KC_SPC), LT(1,KC_BSPC), LT(2,KC_LGUI), LT(5,KC_ESC), LT(4,KC_TAB), LT(6,KC_ENT)),
	[1] = LAYOUT_split_3x6_3(KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL),
	[2] = LAYOUT_split_3x6_3(KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN1, KC_BTN3),
	[3] = LAYOUT_split_3x6_3(KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE),
	[4] = LAYOUT_split_3x6_3(KC_NO, KC_7, KC_8, KC_9, KC_ASTR, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_6, KC_EQL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_3, KC_SCLN, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_NO, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_MINS, KC_AMPR, KC_UNDS, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x6_3(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO)
};
enum custom_layers {
    _BASE,
    _NAV,
    _MOUSE,
    _MEDIA,
    _NUM,
    _SYM,
    _FN,
};

//layer control
#define SPCNAV  LT(1, KC_SPC)   // Space when tapped, Nav layer when held
#define BSMOUSE LT(2, KC_BSPC)  // Backspace when tapped, Mouse layer when held
#define DELMED  LT(3, KC_BSPC)  // Delete when tapped, Media layer when held
#define ENTNUM  LT(4, KC_ENT)   // Enter when tapped, Num layer when held
#define TABSYM  LT(5, KC_TAB)   // Tab when tapped, Symbol layer when held
#define ESCFN  LT(6, KC_ESC)   // Escape when tapped, Fn layer when held

//home row mods
#define LGUI_A LGUI_T(KC_A)
#define LALT_S LALT_T(KC_S)
#define LCTL_D LCTL_T(KC_D)
#define LSFT_F LSFT_T(KC_F)
#define LSFT_J LSFT_T(KC_J)
#define LCTL_K LCTL_T(KC_K)
#define LALT_L LALT_T(KC_L)
#define LGUI_QUOT LGUI_T(KC_QUOT)
#define RALT_X RALT_T(KC_X)
#define RALT_DOT RALT_T(KC_DOT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,    KC_Q,   KC_W,     KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    LGUI_A, LALT_S ,  LCTL_D,  LSFT_F,  KC_G,                         KC_H,    LSFT_F,  LSFT_J,  LCTL_K,  LALT_L, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_Z,    RALT_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M,   KC_COMM, RALT_DOT, KC_SLSH, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          DELMED,  SPCNAV, BSMOUSE,     TABSYM,  ENTNUM,   ESCFN
                                      //`--------------------------'  `--------------------------'

  ),

  [_NAV] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, QK_BOOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSHIFT, KC_NO,                      CW_TOGG, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_NO,  KC_RALT,  KC_NO,   KC_NO,    KC_NO,                       KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,    KC_NO,  KC_NO,       KC_ENT, KC_BSPC, KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

  [_MOUSE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, QK_BOOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSHIFT, KC_NO,                      KC_NO,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_NO,  KC_RALT,  KC_NO,   KC_NO,    KC_NO,                       KC_NO,  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,   KC_NO,      KC_BTN2, KC_BTN1, KC_BTN3
                                      //`--------------------------'  `--------------------------'
  ),

  [_MEDIA] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, QK_BOOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                       RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSHIFT, KC_NO,                      KC_NO,  KC_MPREV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_NO,  KC_RALT,  KC_NO,   KC_NO,    KC_NO,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,   KC_NO,      KC_MSTP, KC_MPLY, KC_MUTE
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  KC_7,    KC_8,    KC_9,  KC_ASTR, KC_COLN,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,  QK_BOOT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_4,    KC_5,    KC_6,    KC_NO,  KC_EQL,                       KC_NO, KC_LSHIFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_1,    KC_2,    KC_3,    KC_NO,  KC_SCLN,                       KC_NO,   KC_NO,   KC_NO, KC_RALT,  KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_DOT,   KC_0,  KC_MINS,     KC_NO,   KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,  KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN, KC_GRV,                        KC_NO,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_MINS, KC_AMPR, KC_UNDS,    KC_NO,   KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  [_FN] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                       KC_NO,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_F10,  KC_F1,   KC_F2,   KC_3,    KC_PAUS,                       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_APP,  KC_SPC,  KC_TAB,      KC_NO,  KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  )
};
