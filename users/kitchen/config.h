
#ifdef KITCHEN_HOME_ROW_MODS
#    define HOME_SCLN MT(MOD_RALT, DV_SCLN)
#    define HOME_A MT(MOD_LALT, DV_A)
#    define HOME_O MT(MOD_LCTL, DV_O)
#    define HOME_E MT(MOD_LSFT, DV_E)
#    define HOME_U MT(MOD_LGUI, DV_U)

#    define HOME_H MT(MOD_LGUI, DV_H)
#    define HOME_T MT(MOD_LSFT, DV_T)
#    define HOME_N MT(MOD_LCTL, DV_N)
#    define HOME_S MT(MOD_LALT, DV_S)
#    define HOME_Z MT(MOD_RALT, DV_Z)
#    define HOME_LSFT KC_NO
#    define HOME_RSFT KC_NO
#    define HOME_BSPC KC_BSPC
#    define HOME_LCTL KC_NO
#    define HOME_LALT KC_NO
#else
#    define HOME_SCLN DV_SCLN
#    define HOME_A DV_A
#    define HOME_O DV_O
#    define HOME_E DV_E
#    define HOME_U DV_U
#    define HOME_H DV_H
#    define HOME_T DV_T
#    define HOME_N DV_N
#    define HOME_S DV_S
#    define HOME_Z DV_Z
#    define HOME_LSFT KC_LSFT
#    define HOME_RSFT KC_RSFT
#    define HOME_BSPC LGUI_T(KC_BSPC)
#    define HOME_LCTL KC_LCTL
#    define HOME_LALT KC_LALT
#endif
