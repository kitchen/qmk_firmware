/* Copyright 2020 gtips
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
#include "keymap_dvorak.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE]    = LAYOUT_wrapper(KITCHEN_L_BASE_R1L, KITCHEN_L_BASE_R1R, KITCHEN_L_BASE_R2L, KITCHEN_L_BASE_R2R, KITCHEN_L_BASE_R3L, KITCHEN_L_BASE_R3R, KITCHEN_L_BASE_5THUMB),
    [L_NUMBERS] = LAYOUT_wrapper(KITCHEN_L_NUMBERS_LEFT, KITCHEN_L_NUMBERS_R1R, KITCHEN_L_NUMBERS_LEFT, KITCHEN_L_NUMBERS_R2R, KITCHEN_L_NUMBERS_MODS, KITCHEN_L_NUMBERS_R3R, KITCHEN_L_NUMBERS_5THUMB
    [L_SYMBOLS] = LAYOUT_wrapper(KITCHEN_L_SYMBOLS_LEFT, KITCHEN_L_SYMBOLS_R1R, KITCHEN_L_SYMBOLS_LEFT, KITCHEN_L_SYMBOLS_R2R, KITCHEN_L_SYMBOLS_MODS, KITCHEN_L_SYMBOLS_R3R, KITCHEN_L_SYMBOLS_5THUMB),
    [L_NAV]     = LAYOUT_wrapper(KITCHEN_L_NAV_R1L, KITCHEN_L_NAV_R1R, KITCHEN_L_NAV_R2L, KITCHEN_L_NAV_R2R, KITCHEN_L_NAV_R3L, KITCHEN_L_NAV_R3R, KITCHEN_L_NAV_5THUMB, KITCHEN_L_NAV_THUMB),
};
