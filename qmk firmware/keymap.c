/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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



//This keymap file serves as a template for your further development, it is not a fully functional layout.

#include QMK_KEYBOARD_H

#define LAYOUT_Wimads(                                          \
  k00, k01, k02, k03, k04,      k44, k43, k42, k41, k40, \
  k10, k11, k12, k13, k14,      k54, k53, k52, k51, k50, \
  k20, k21, k22, k23, k24,      k64, k63, k62, k61, k60, \
  k34, k31, k32, k33, k30,      k70, k73, k72            \
)                                                        \
{                                                        \
  {   k00,   k01,   k02,   k03,   k04 },                 \
  {   k10,   k11,   k12,   k13,   k14 },                 \
  {   k20,   k21,   k22,   k23,   k24 },                 \
  {   k30,   k31,   k32,   k33,   k34 },                 \
  {   k40,   k41,   k42,   k43,   k44 },                 \
  {   k50,   k51,   k52,   k53,   k54 },                 \
  {   k60,   k61,   k62,   k63,   k64 },                 \
  {   k70, KC_NO,   k72,   k73, KC_NO },                 \
} //edit this if you didn't add mouse keys, or if you wired them differently

enum charybdis_keymap_layers {
    _DEF = 0 //default
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEF] = LAYOUT_Wimads(
  // ╭────────────────────────────────────────────╮                   ╭─────────────────────────────────────────────╮
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  // ├────────────────────────────────────────────┤                   ├─────────────────────────────────────────────┤
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  // ├────────────────────────────────────────────┤                   ├─────────────────────────────────────────────┤
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
  // ╰─────────────────────────────────────────────────────╮  ╭─────────────────────────────────────────────────────╯
             KC_BTN1, KC_BTN2,   KC_DEL,  KC_ENT,  KC_LCTL,    KC_LSFT, KC_SPC,  KC_BSPC  
  //        ╰─────────────────╯ ╰──────────────────────────╯  ╰──────────────────────────╯
  ),
};

