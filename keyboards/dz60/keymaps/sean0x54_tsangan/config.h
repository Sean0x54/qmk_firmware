#pragma once

#define RGBLIGHT_LAYERS
#undef RGBLIGHT_ANIMATIONS

// Turn off RGB when computer goes to sleep
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_SLEEP
#endif // RGBLIGHT_ENABLE
