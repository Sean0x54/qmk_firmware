#include QMK_KEYBOARD_H
#define HSV_BLACK  0, 0, 0

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 16, HSV_BLACK}
);

// Light All LEDs in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 16, HSV_WHITE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer
);

/*
 * Turn off backlight and RGB on startup 
 */

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
    rgblight_set_layer_state(0, true);
    backlight_level(10);
    backlight_disable();
    rgblight_disable();
}
/*
 * Turn on Backlighting for Layer 1
 */

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));

    if (layer_state_cmp(state,1)) {
        backlight_enable();
        //rgblight_enable();
        backlight_enable();
    } else {
        backlight_disable();
        rgblight_disable();
        backlight_disable();
    }

    return state;
}
