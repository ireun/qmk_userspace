/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define UNICODE_KEY_WINC KC_RIGHT_ALT
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTIONS {4}

#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP

#define QUICK_TAP_TERM 0
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif


#if defined(KEYBOARD_sofle_rev1)
// Add RGB underglow and top facing lighting
#    define WS2812_DI_PIN D3
#    define RGB_DI_PIN D3
// #    undef RGBLED_NUM
// #    define RGBLED_NUM 12
// #    undef RGBLED_SPLIT
// #    define RGBLED_SPLIT { 6, 6 }
// #    undef RGBLIGHT_LED_COUNT
#    ifdef RGB_MATRIX_ENABLE
#        define RGB_MATRIX_LED_COUNT RGBLED_NUM
#        define RGB_MATRIX_SPLIT RGBLED_SPLIT
#        define SPLIT_TRANSPORT_MIRRORss
#    else
#        define RGBLIGHT_EFFECT_BREATHING
#        define RGBLIGHT_EFFECT_RAINBOW_MOOD
#        define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#        define RGBLIGHT_EFFECT_SNAKE
#        define RGBLIGHT_EFFECT_KNIGHT
#        define RGBLIGHT_EFFECT_CHRISTMAS
#        define RGBLIGHT_EFFECT_STATIC_GRADIENT
#        define RGBLIGHT_EFFECT_ALTERNATING
#        define RGBLIGHT_EFFECT_TWINKLE
#        define RGBLIGHT_LIMIT_VAL 150
#        define RGBLIGHT_HUE_STEP 5
#        define RGBLIGHT_SAT_STEP 17
#        define RGBLIGHT_VAL_STEP 17
#    endif
#endif
