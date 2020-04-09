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
     * |    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift        |
     * |-----------------------------------------------------------------------------------------|
     * |  LCtl  | LAlt |  LGui  |               Space             |  Mo 2 |  RGui | RAlt | Mo 1  |
     * `-----------------------------------------------------------------------------------------'
     */

	[0] = LAYOUT_60_ansi(
      KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP), 
      KC_LCTL, KC_LALT, KC_LGUI,     KC_SPC,     TG(2), RALT_T(KC_LEFT), RCTL_T(KC_DOWN), LT(1,KC_RGHT)
      ), 

    /* Layer 1: HHKB
     * ,-----------------------------------------------------------------------------------------.
     * | ` | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    Del    |
     * |-----------------------------------------------------------------------------------------|
     * |  Caps  | Fn5 | Fn6 | Fn7 | Fn8 | Fn9 |     |     | Psc | Slk | Pus | Up  |     |  Ins   |
     * |-----------------------------------------------------------------------------------------|
     * |          | VoD | VoU | Mut |     |     |  *  |  /  | Hom | PgU | Lef | Rig |   Enter    |
     * |-----------------------------------------------------------------------------------------|
     * |             |     |     |     |     |     |  +  |  -  | End | PgD | Dow |         |     |
     * |-----------------------------------------------------------------------------------------|
     * |        |      |        |                                 |       |       |      |       |
     * `-----------------------------------------------------------------------------------------'
     */

	[1] = LAYOUT_60_ansi(
      KC_GRAVE, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL, 
      KC_NO,    KC_FN5,   KC_FN6,   KC_FN7,   KC_FN8,   KC_FN9,   KC_NO,    KC_NO,    KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    KC_NO,    KC_INS,
      KC_CAPS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_NO,    KC_NO,    KC_PAST,  KC_PSLS,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  KC_PENT,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PPLS,  KC_PMNS,  KC_END,   KC_PGDN,  KC_DOWN,  KC_NO,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS
      ),

    /* Layer 2: Mouse and Lights
     * ,-----------------------------------------------------------------------------------------.
     * | Pwr | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    Del    |
     * |-----------------------------------------------------------------------------------------|
     * |  Caps  | Fn5 | Fn6 | Fn7 | Fn8 | Fn9 |     |     | Psc | Slk | Pus | Up  |     |  Ins   |
     * |-----------------------------------------------------------------------------------------|
     * |          | VoD | VoU | Mut |     |     |  *  |  /  | Hom | PgU | Lef | Rig |   Enter    |
     * |-----------------------------------------------------------------------------------------|
     * |             |     |     |     |     |     |  +  |  -  | End | PgD | Dow |         |     |
     * |-----------------------------------------------------------------------------------------|
     * |        |      |        |                                 |       |       |      |       |
     * `-----------------------------------------------------------------------------------------'
     */

	[2] = LAYOUT_60_ansi(
      KC_PWR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, RESET, 
      BL_TOGG, BL_INC, BL_DEC, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, KC_NO, 
      RGB_TOG, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, 
      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, RGB_RMOD, RGB_HUD, RGB_MOD
      )
};


layer_state_t layer_state_set_user(layer_state_t  state) {
    switch (biton32(state)) {
    case 1:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case 2:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case 3:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}

void keyboard_post_init_user(void) {
    layer_state_set_user(layer_state);
}

/*
void matrix_init_user(void) {
  DDRB |= (1 << 2);
  PORTB &= ~(1 << 2);
}

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
    PORTB |= (1 << 2);
  } else {
    PORTB &= ~(1 << 2);
  }
}
*/


