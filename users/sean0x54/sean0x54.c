#include QMK_KEYBOARD_H

/*
 * Turn off backlight and RGB on startup 
 */

void keyboard_post_init_user(void) {
    backlight_level(10);
    backlight_disable();
}
/*
 * Turn on Backlighting for Layer 1, off for anything else
 */
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state,1)) {
        backlight_enable();
    } else {
        backlight_disable();
    }

    return state;
}
