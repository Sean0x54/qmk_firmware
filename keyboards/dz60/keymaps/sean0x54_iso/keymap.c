#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |    Back   |
     * |-----------------------------------------------------------------------------------------|
     * |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
     * |-----------------------------------------------------------------------------------------|
     * |   LCtl   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter    |
     * |-----------------------------------------------------------------------------------------|
     * |    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  | Fn  |
     * |-----------------------------------------------------------------------------------------|
     * |  LCtl  | LGui | LAlt |                     Space                 |  RAlt |  RGui | RCtrl|
     * `-----------------------------------------------------------------------------------------'
     */

	[0] = LAYOUT_60_iso_5x1u_split_rshift(
      //        2       3       4       5       6       7       8       9       10      11      12          13          14          15       16
      KC_GESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,    KC_EQL,     KC_BSPC, 
      KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,    KC_RBRC,     
      KC_CAPS,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOTE,   KC_GRAVE,   KC_ENT, 
      KC_LSFT,  KC_BSLS, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, RSFT_T(KC_UP), TT(1),
      KC_LCTL, KC_LALT, KC_LGUI,        KC_SPC,                 _______,RGUI_T(KC_LEFT),_______,RALT_T(KC_DOWN),RCTL_T(KC_RIGHT) 
      ), 

    // Borrow Ducky One Layer for Mouse and Extended Buttons

    /* Layer 1: HHKB
     * ,-----------------------------------------------------------------------------------------.
     * | ` | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |      Del    |
     * |-----------------------------------------------------------------------------------------|
     * |      | BTN1 | MS_U | BNT2 | WH_U |     | Ins |     | Up | Pau | PgUp |Home | Prt | Menu |
     * |-----------------------------------------------------------------------------------------|
     * |        | MS_L | MS_D | MS_R | WH_D |    | Scr  | Left| Down | Rght| PgDn | End | Enter  |
     * |-----------------------------------------------------------------------------------------|
     * |          |      |     |     |     |      | CALC | MUTE | VOL- | VOL+ |     |     |      |
     * |-----------------------------------------------------------------------------------------|
     * |        |      |        |                                 |       |       |      |       |
     * `-----------------------------------------------------------------------------------------'
     */

	[1] = LAYOUT_60_tsangan(
      KC_GRAVE,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,    KC_F7,    KC_F8,      KC_F9,    KC_F10,   KC_F11,     KC_F12,     KC_DEL, 
      _______,      KC_BTN1,    KC_MS_U,    KC_BTN2,    KC_WH_U,    _______,    KC_INS,   _______,  KC_UP,      KC_PAUS,  KC_PGUP,  KC_HOME,    KC_PSCR,    KC_MENU,
      _______,      KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_WH_D,    _______,    KC_SLCK,  KC_LEFT,  KC_DOWN,    KC_RIGHT, KC_PGDN,  KC_END,     _______,
      _______,      _______,    _______,    _______,    _______,    _______,    KC_CALC,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,    _______,
      _______,      _______,    _______,    _______,    _______,    _______,    _______
      ),
};
