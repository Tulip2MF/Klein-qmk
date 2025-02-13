#include QMK_KEYBOARD_H

enum klein_keymap_layers {
    L_BASE = 0,
    L_NAV,
    L_NUM,
    L_FUN,
    L_SYM,
    L_MEDIA,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐      [4]   [5]    ┌───┐
      *           │ 1 ├───┐           ┌───┤ 8 │
      *           └───┤ 2 ├───┐   ┌───┤ 7 ├───┘
      *               └───┤ 3 │   │ 6 ├───┘
      *                   └───┘   └───┘
      */
  [L_BASE] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────────────────────╮                      ╭────────────────────────────────────────────────────────────────╮
      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                        KC_Y, KC_U,         KC_I,         KC_O,         KC_P,
  // ├─────────────────────────────────────────────────────────────┤                      ├────────────────────────────────────────────────────────────────┤
      LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,                        KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
  // ├─────────────────────────────────────────────────────────────┤                      ├────────────────────────────────────────────────────────────────┤
      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                        KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,
  // ╰─────────────────────────────────────────────────────────────╯                      ╰────────────────────────────────────────────────────────────────╯
      LT(L_MEDIA, KC_ESC), LT(L_NAV, KC_SPC), KC_C, LT(L_NUM, KC_TAB), QK_BOOT,                QK_BOOT, LT(L_SYM, KC_ENT), KC_C, LT(L_NUM, KC_BSPC), LT(L_FUN, KC_DEL)
  // ╰───────────────────────────────────────────────────────────────────╯              ╰─────────────────────────────────────────────────────────────────╯
  ),
  
    [L_NAV] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_CAPS, KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_INS,  KC_HOME, KC_PGUP, KC_PGDN, KC_NO,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,    QK_BOOT, KC_ENT, KC_BSPC, KC_DEL
  //                 ╰─────────────────────────────╯ ╰────────────────────────────────╯
  ),
  
   [L_NUM] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
         KC_LBRC,   KC_7, KC_8, KC_9,   KC_RBRC,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_SCLN,   KC_4, KC_5, KC_6,   KC_EQL,       KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_GRV,    KC_1, KC_2, KC_3,   KC_BSLS,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                  KC_NO, KC_NO,  KC_DOT, KC_0, KC_MINS, QK_BOOT,    QK_BOOT, KC_ENT, KC_BSPC, KC_DEL
  //              ╰────────────────────────────────╯ ╰────────────────────────────────╯
  ),

   [L_FUN] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
         KC_F12, KC_F7,   KC_F8,  KC_F9, KC_PSCR,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_F11, KC_F4,   KC_F5,  KC_F6, KC_SYRQ,      KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_F10,  KC_F1,  KC_F2,  KC_F3, KC_PAUS,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                 KC_NO, KC_NO,   KC_ESC, KC_SPC, KC_TAB, QK_BOOT,    QK_BOOT, KC_NO,   KC_NO,   KC_NO
  //              ╰────────────────────────────────╯ ╰───────────────────────────────────╯
  ),

     [L_SYM] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
         KC_LCBR, KC_GRV,  KC_ASTR, KC_AMPR,KC_RCBR,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_COLN, KC_CIRC, KC_PERC, KC_DLR, KC_PLUS,    KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_TILD, KC_HASH, KC_AT, KC_EXLM,  KC_PIPE,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
              KC_NO, KC_NO,      KC_ESC, KC_SPC, KC_TAB, QK_BOOT,    QK_BOOT, KC_NO,   KC_NO,   KC_NO
  //              ╰────────────────────────────────╯ ╰──────────────────────────────────╯
  ),

    [L_MEDIA] = LAYOUT_split_3x5_4(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_NO,   KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                     KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_MUTE,    KC_MUTE, KC_MSTP, KC_MPLY,  KC_M
  //                 ╰─────────────────────────────╯ ╰─────────────────────────────────╯
  ),

};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    static const char PROGMEM klein_logo[] = {
        // 'zcubet', 128x64px
        0x00, 0x00, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x14, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0xfc, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x04, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xfc, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x0c, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0xf0, 0x30, 0x20, 0x20, 0x40, 0x40, 0xc0, 0x80, 0x80, 
        0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x30, 0x70, 0x90, 0x10, 0x08, 0x08, 0x08, 
        0x08, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xfc, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x3c, 0x67, 
        0x83, 0x83, 0xc7, 0x34, 0x18, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0xff, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1f, 0xe0, 0x20, 0x30, 0x10, 0x10, 0x10, 0x10, 0x08, 
        0x08, 0x08, 0x88, 0x48, 0xa8, 0xff, 0x38, 0x7e, 0xcb, 0x8d, 0x8c, 0x16, 0x12, 0x12, 0xf2, 0xba, 
        0x6f, 0xff, 0xba, 0xe2, 0x12, 0x12, 0x16, 0x8c, 0x8c, 0xcf, 0x7e, 0x38, 0xff, 0xa8, 0x48, 0xc8, 
        0x88, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x30, 0x20, 0xe0, 0x3c, 0x03, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0x81, 0x01, 0x01, 0x01, 0x01, 0x81, 
        0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xff, 0x01, 0x01, 0x01, 0x81, 0x01, 0xff, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0x01, 0x81, 0x01, 0x01, 
        0x01, 0x01, 0xff, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x38, 0xc0, 0xc0, 0x70, 0x18, 0x3c, 
        0x62, 0x41, 0x80, 0xf8, 0x87, 0xc1, 0x5f, 0xe0, 0xa0, 0xf3, 0x37, 0xf9, 0xbe, 0xfe, 0xdf, 0xda, 
        0xf2, 0xff, 0xda, 0x9d, 0xff, 0x3e, 0xf9, 0x1f, 0xf3, 0xe0, 0xe0, 0xfc, 0xc3, 0x83, 0xfc, 0x80, 
        0xc1, 0x63, 0x26, 0x18, 0x30, 0xc0, 0xc0, 0x30, 0x0e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
        0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 
        0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0x81, 
        0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x1c, 0x03, 0x03, 0x0e, 0x18, 0x34, 
        0x46, 0x82, 0x01, 0x1f, 0xe1, 0x83, 0xfb, 0x07, 0x07, 0xcf, 0xed, 0x9f, 0x7d, 0x7f, 0xfb, 0x5b, 
        0x4f, 0xff, 0x5b, 0xf9, 0xff, 0x7d, 0x9f, 0xf9, 0xcf, 0x07, 0x07, 0x3f, 0xc3, 0xc1, 0x3f, 0x01, 
        0x82, 0xc6, 0x24, 0x18, 0x0c, 0x03, 0x03, 0x0c, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
        0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 
        0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 
        0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf8, 0x07, 0x04, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x10, 
        0x10, 0x10, 0x11, 0x12, 0x15, 0xff, 0x1c, 0x7e, 0xd3, 0xb1, 0x31, 0x68, 0x48, 0x48, 0x4f, 0x5d, 
        0xf6, 0xff, 0x5d, 0x4f, 0x48, 0x48, 0x48, 0x31, 0x31, 0xf3, 0x7e, 0x1c, 0xff, 0x15, 0x12, 0x13, 
        0x11, 0x10, 0x10, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x04, 0x07, 0x7c, 0xc0, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
        0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 
        0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 
        0x40, 0x40, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x3c, 0xe6, 
        0xc1, 0xc1, 0xe3, 0x2c, 0x18, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
        0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x20, 0x20, 
        0x20, 0x20, 0x20, 0x20, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x20, 0x20, 0x20, 0x20, 
        0x20, 0x20, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
        0x30, 0x10, 0x10, 0x10, 0x10, 0x08, 0x09, 0x0f, 0x0c, 0x04, 0x04, 0x02, 0x02, 0x03, 0x01, 0x00, 
        0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x0c, 0x0e, 0x09, 0x08, 0x10, 0x10, 0x10, 
        0x10, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x00, 0x00, 0x00
    };

    if (is_keyboard_master()) {
        oled_write_raw_P(klein_logo, sizeof(klein_logo));
    } else {
        oled_write_raw_P(klein_logo, sizeof(klein_logo));
    }
    return false;
}

#endif
