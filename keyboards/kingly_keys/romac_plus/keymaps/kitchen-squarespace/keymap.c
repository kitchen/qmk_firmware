/* Copyright 2018 Jack Humbert
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

#include QMK_KEYBOARD_H
#include <sendstring_dvorak.h>

#define EMOJI 0
#define REACJI 1

enum custom_keycodes {
    POOP = SAFE_RANGE,
    DOGEINTENSIFIES,
    AWYISS,
    AWESOME,
    ITSHAPPENING,
    BONGOCAT,
    DOGE,
    YEY,
    SHIPPARROT,
    RPOOP,
    RDOGEINTENSIFIES,
    RAWYISS,
    RAWESOME,
    RITSHAPPENING,
    RBONGOCAT,
    RDOGE,
    RYEY,
    RSHIPPARROT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [EMOJI]  = LAYOUT(POOP, DOGEINTENSIFIES, AWYISS, AWESOME, ITSHAPPENING, BONGOCAT, DOGE, YEY, SHIPPARROT, RGB_TOG, MO(REACJI), KC_NO),
    [REACJI] = LAYOUT(RPOOP, RDOGEINTENSIFIES, RAWYISS, RAWESOME, RITSHAPPENING, RBONGOCAT, RDOGE, RYEY, RSHIPPARROT, KC_NO, KC_NO, KC_NO),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case POOP:
            if (record->event.pressed) {
                SEND_STRING(":poop:");
            }
            break;
        case DOGEINTENSIFIES:
            if (record->event.pressed) {
                SEND_STRING(":dogeintensifies:");
            }
            break;
        case AWYISS:
            if (record->event.pressed) {
                SEND_STRING(":aw_yiss:");
            }
            break;
        case AWESOME:
            if (record->event.pressed) {
                SEND_STRING(":awesome:");
            }
            break;
        case ITSHAPPENING:
            if (record->event.pressed) {
                SEND_STRING(":itshappening:");
            }
            break;
        case BONGOCAT:
            if (record->event.pressed) {
                SEND_STRING(":bongocat:");
            }
            break;
        case DOGE:
            if (record->event.pressed) {
                SEND_STRING(":doge:");
            }
            break;
        case YEY:
            if (record->event.pressed) {
                SEND_STRING(":yey:");
            }
            break;
        case SHIPPARROT:
            if (record->event.pressed) {
                SEND_STRING(":shipit_parrot:");
            }
            break;
        case RPOOP:
            if (record->event.pressed) {
                SEND_STRING("+:poop:\n");
            }
            break;
        case RDOGEINTENSIFIES:
            if (record->event.pressed) {
                SEND_STRING("+:dogeintensifies:\n");
            }
            break;
        case RAWYISS:
            if (record->event.pressed) {
                SEND_STRING("+:aw_yiss:\n");
            }
            break;
        case RAWESOME:
            if (record->event.pressed) {
                SEND_STRING("+:awesome:\n");
            }
            break;
        case RITSHAPPENING:
            if (record->event.pressed) {
                SEND_STRING("+:itshappening:\n");
            }
            break;
        case RBONGOCAT:
            if (record->event.pressed) {
                SEND_STRING("+:bongocat:\n");
            }
            break;
        case RDOGE:
            if (record->event.pressed) {
                SEND_STRING("+:doge:\n");
            }
            break;
        case RYEY:
            if (record->event.pressed) {
                SEND_STRING("+:yey:\n");
            }
            break;
        case RSHIPPARROT:
            if (record->event.pressed) {
                SEND_STRING("+:shipit_parrot:\n");
            }
            break;
    }

    return true;
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
}

static void render_squarespace_logo(void) {
    static const char PROGMEM squarespace_logo[] = {// 'squarespace', 32x24px
                                                    0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x8e, 0xc6, 0xe0, 0x70, 0x38, 0x1c, 0x8c, 0xc6, 0xc6, 0x06, 0x06, 0x0e, 0x0c, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x83, 0x81, 0x08, 0x1c, 0x8e, 0xc7, 0xe3, 0x71, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x8e, 0xc7, 0xe3, 0x71, 0x21, 0x01, 0x83, 0xe7, 0xfe, 0x38, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x61, 0x60, 0xc0, 0xc0, 0xc6, 0xc7, 0x63, 0x71, 0x38, 0x1c, 0x0e, 0xc7, 0xe3, 0x71, 0x38, 0x1c, 0x0e, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00};
    oled_write_raw_P(squarespace_logo, sizeof(squarespace_logo));
}

void oled_task_user(void) { render_squarespace_logo(); }
#endif

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        /* rgblight_increase_speed_noeeprom(); */
        rgblight_step();
    } else {
        rgblight_step_reverse();
    }
}
#endif
