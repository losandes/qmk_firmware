/*
Copyright 2018 Massdrop Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef USE_MASSDROP_CONFIGURATOR

// #include "led_matrix.h"

//Off
led_setup_t leds_off_override[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Rainbow scrolling
led_setup_t leds_rainbow_s_override[] = {
    { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

//Rainbow no scrolling
led_setup_t leds_rainbow_ns_override[] = {
    { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER },
    { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER },
    { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER },
    { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER },
    { .end = 1 },
};

//Teal <-> Salmon
led_setup_t leds_teal_salmon_override[] = {
    { .hs = 0,  .he = 33,  .rs = 24,  .re = 24,  .gs = 215, .ge = 215, .bs = 204, .be = 204, .ef = EF_NONE },
    { .hs = 33, .he = 66,  .rs = 24,  .re = 255, .gs = 215, .ge = 114, .bs = 204, .be = 118, .ef = EF_NONE },
    { .hs = 66, .he = 100, .rs = 255, .re = 255, .gs = 114, .ge = 114, .bs = 118, .be = 118, .ef = EF_NONE },
    { .end = 1 },
};

//Yellow
led_setup_t leds_yellow_override[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Red
led_setup_t leds_red_override[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Green
led_setup_t leds_green_override[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE },
    { .end = 1 },
};

//Blue
led_setup_t leds_blue_override[] = {
    { .hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE },
    { .end = 1 },
};

//Purple
led_setup_t leds_purple[] = {
    { .hs = 0, .he = 100, .rs = 127, .re = 127, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE },
    { .end = 1 },
};

//White
led_setup_t leds_white_override[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE },
    { .end = 1 },
};

//White with moving red stripe
led_setup_t leds_white_with_red_stripe_override[] = {
    { .hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE },
    { .hs = 0, .he = 15, .rs = 0, .re = 0, .gs = 0, .ge = 255, .bs = 0, .be = 255, .ef = EF_SCR_R | EF_SUBTRACT },
    { .hs = 15, .he = 30, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 0, .ef = EF_SCR_R | EF_SUBTRACT },
    { .end = 1 },
};

//Black with moving red stripe
led_setup_t leds_black_with_red_stripe_override[] = {
    { .hs = 0, .he = 15, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R },
    { .hs = 15, .he = 30, .rs = 255, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R },
    { .end = 1 },
};

//pink and cyan scrolling
led_setup_t leds_cyan_pink_s[] = {
    { .hs = 0, .he = 25,  .rs = 255, .re = 255, .gs = 20, .ge = 20, .bs = 147, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .hs = 25, .he = 50, .rs = 255,  .re = 0, .gs = 20, .ge = 255, .bs = 147, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 50,  .he = 75,  .rs = 0,  .re = 0,  .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE | EF_SCR_R },
    { .hs = 75, .he = 100,  .rs = 0,  .re = 255, .gs = 255, .ge = 20, .bs = 255, .be = 147, .ef = EF_NONE | EF_SCR_R },
    { .end = 1 },
};

//Rainbow Scrolling With Gap
led_setup_t leds_rainbow_gap_1_s[] = {
  { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 83.33,  .he = 100,    .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .end = 1 },
};

led_setup_t leds_rainbow_gap_2_s[] = {
  { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 16.67,  .he = 33.33,  .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 0, .ge = 0,   .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R },
  { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 83.33,  .he = 100,    .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .end = 1 },
};

led_setup_t leds_rainbow_gap_3_s[] = {
  { .hs = 0,      .he = 16.67,  .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 16.67,  .he = 33.33,  .rs = 0, .re = 0,   .gs = 0, .ge = 0, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .hs = 33.33,  .he = 50,     .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 0, .ge = 0,   .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R },
  { .hs = 66.67,  .he = 83.33,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
  { .hs = 83.33,  .he = 100,    .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R },
  { .end = 1 },
};

//Irish scrolling
led_setup_t leds_irish_s[] = {
    { .hs = 0,      .he = 16.67,  .rs = 22,  .re = 22,  .gs = 155, .ge = 155, .bs = 98,  .be = 98,  .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.67,  .he = 33.33,  .rs = 22,  .re = 22,  .gs = 155, .ge = 155, .bs = 98,  .be = 98,  .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.33,  .he = 50,     .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 50,     .he = 66.67,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.67,  .he = 83.33,  .rs = 255, .re = 255, .gs = 136, .ge = 136, .bs = 62,  .be = 62,  .ef = EF_OVER | EF_SCR_R },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 136, .ge = 136, .bs = 62,  .be = 62,  .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

//Irish No Scrolling
led_setup_t leds_irish_ns[] = {
    { .hs = 0,      .he = 16.67,  .rs = 22,  .re = 22,  .gs = 155, .ge = 155, .bs = 98,  .be = 98,  .ef = EF_OVER },
    { .hs = 16.67,  .he = 33.33,  .rs = 22,  .re = 22,  .gs = 155, .ge = 155, .bs = 98,  .be = 98,  .ef = EF_OVER },
    { .hs = 33.33,  .he = 50,     .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 50,     .he = 66.67,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER },
    { .hs = 66.67,  .he = 83.33,  .rs = 255, .re = 255, .gs = 136, .ge = 136, .bs = 62,  .be = 62,  .ef = EF_OVER },
    { .hs = 83.33,  .he = 100,    .rs = 255, .re = 255, .gs = 136, .ge = 136, .bs = 62,  .be = 62,  .ef = EF_OVER },
    { .end = 1 },
};

//blue-white-orange Scrolling
led_setup_t leds_bwo_s[] = {
    { .hs = 0,      .he = 16.67,  .rs = 22, .re = 22, .gs = 155,   .ge = 155, .bs = 98,   .be = 98,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 16.67,  .he = 33.33,  .rs = 22, .re = 255,   .gs = 155, .ge = 255, .bs = 98,   .be = 255,   .ef = EF_OVER | EF_SCR_R },
    { .hs = 33.33,  .he = 50,     .rs = 255,   .re = 255,   .gs = 255, .ge = 255, .bs = 255,   .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 50,     .he = 66.67,  .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R },
    { .hs = 66.67,  .he = 83.33,  .rs = 255 ,   .re = 255, .gs = 136,   .ge = 136,   .bs = 62, .be = 62, .ef = EF_OVER | EF_SCR_R },
    { .hs = 83.33,  .he = 100,    .rs = 255 ,   .re = 22, .gs = 136,   .ge = 155,   .bs = 62, .be = 98,   .ef = EF_OVER | EF_SCR_R },
    { .end = 1 },
};

#endif
