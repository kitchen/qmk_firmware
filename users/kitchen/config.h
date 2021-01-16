#include "keymap_dvorak.h"

#define HOME_SCLN MT(MOD_RALT, DV_SCLN)
#define HOME_A MT(MOD_LALT, DV_A)
#define HOME_O MT(MOD_LCTL, DV_O)
#define HOME_E MT(MOD_LSFT, DV_E)
#define HOME_U MT(MOD_LGUI, DV_U)

#    define HOME_LSFT KC_NO
#    define HOME_RSFT KC_NO
#    define HOME_BSPC KC_BSPC
#    define HOME_LCTL KC_NO
#    define HOME_LALT KC_NO
#define HOME_H MT(MOD_LGUI, DV_H)
#define HOME_T MT(MOD_LSFT, DV_T)
#define HOME_N MT(MOD_LCTL, DV_N)
#define HOME_S MT(MOD_LALT, DV_S)
#define HOME_Z MT(MOD_RALT, DV_Z)

#define KITCHEN_LOCK G(C(DV_Q))

// "standard" six column layout
// TODO whiddle this down to 5 columns inspired by miryoku
#define KITCHEN_L0_R1L KC_TAB, DV_QUOT, DV_COMM, DV_DOT, DV_P, DV_Y
#define KITCHEN_L0_R1R DV_F, DV_G, DV_C, DV_R, DV_L, KC_NO
#define KITCHEN_L0_R2L KC_ESC, HOME_A, HOME_O, HOME_E, HOME_U, DV_I
#define KITCHEN_L0_R2R DV_D, HOME_H, HOME_T, HOME_N, HOME_S, DV_MINS
#define KITCHEN_L0_R3L HOME_LSFT, HOME_SCLN, DV_Q, DV_J, DV_K, DV_X
#define KITCHEN_L0_R3R DV_B, DV_M, DV_W, DV_V, HOME_Z, HOME_RSFT
#define KITCHEN_THUMB_L KC_ESC, LT(1, KC_BSPC), KC_TAB
#define KITCHEN_THUMB_R KC_ENT, LT(2, KC_SPC), KC_NO
