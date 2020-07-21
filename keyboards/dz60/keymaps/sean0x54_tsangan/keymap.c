#include QMK_KEYBOARD_H
#define HSV_BLACK  0, 0, 0 
#undef HSV_ORANGE 
#define HSV_ORANGE 10,255,255 // Tap Dance declarations

// Tap Dance declarations
enum { 
    TD_QUOT_GRAVE,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for single quote, twice for grave
    [TD_QUOT_GRAVE] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRAVE),
};


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

	[0] = LAYOUT_60_tsangan(
      KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
      LT(2, KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
      LT(1, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, TD(TD_QUOT_GRAVE), KC_ENT, 
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP), TT(2),
      KC_LCTL, KC_LALT, KC_LGUI,     KC_SPC, RGUI_T(KC_LEFT), RALT_T(KC_DOWN), RCTL_T(KC_RIGHT)
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

	[1] = LAYOUT_60_tsangan(
      KC_TRNS, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL, 
      KC_TRNS,    KC_FN5,   KC_FN6,   KC_FN7,   KC_FN8,   KC_FN9,   KC_NO,    KC_NO,    KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    KC_NO,    KC_INS,
      KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_NO,    KC_NO,    KC_PAST,  KC_PSLS,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  KC_TRNS,
      RGB_TOG,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PPLS,  KC_PMNS,  KC_END,   KC_PGDN,  KC_DOWN,  KC_NO, KC_TRNS,
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
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

	[2] = LAYOUT_60_tsangan(
      KC_PWR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, RESET, 
      BL_TOGG, BL_INC, BL_DEC, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, KC_NO, 
      RGB_TOG, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, KC_TRNS,
      KC_NO, KC_NO, KC_NO, KC_TRNS, RGB_RMOD, RGB_HUD, RGB_MOD
      )
};

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 16, HSV_BLACK}
);

// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 1, HSV_CYAN}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {10, 1, HSV_PURPLE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer     // Overrides other layers
);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
    rgblight_setrgb(RGB_ORANGE);
    rgblight_sethsv_noeeprom(HSV_ORANGE);

}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));

    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, !led_state.caps_lock);
    return true;
}


