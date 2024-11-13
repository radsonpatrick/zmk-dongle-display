/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
 
 #include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SYM_1
#define LV_ATTRIBUTE_IMG_SYM_1
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_1 uint8_t sym_1_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 
  0x18, 
  0xfc, 
  0xfc, 
  0x00, 
};

const lv_img_dsc_t sym_1 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 6,
  .data_size = 14,
  .data = sym_1_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_2
#define LV_ATTRIBUTE_IMG_SYM_2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_2 uint8_t sym_2_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x88, 
  0xcc, 
  0xe4, 
  0xbc, 
  0x98, 
};

const lv_img_dsc_t sym_2 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 6,
  .data_size = 14,
  .data = sym_2_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_3
#define LV_ATTRIBUTE_IMG_SYM_3
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_3 uint8_t sym_3_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x48, 
  0xc4, 
  0x94, 
  0xfc, 
  0x68, 
};

const lv_img_dsc_t sym_3 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 6,
  .data_size = 14,
  .data = sym_3_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_4
#define LV_ATTRIBUTE_IMG_SYM_4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_4 uint8_t sym_4_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x60, 
  0x70, 
  0x58, 
  0xfc, 
  0x40, 
};

const lv_img_dsc_t sym_4 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 6,
  .data_size = 14,
  .data = sym_4_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_5
#define LV_ATTRIBUTE_IMG_SYM_5
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_5 uint8_t sym_5_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x40, 
  0xdc, 
  0x94, 
  0xf4, 
  0x64, 
};

const lv_img_dsc_t sym_5 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 6,
  .data_size = 14,
  .data = sym_5_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_OK
#define LV_ATTRIBUTE_IMG_SYM_OK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_OK uint8_t sym_ok_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x60, 
  0xc0, 
  0x60, 
  0x30, 
  0x18, 
};

const lv_img_dsc_t sym_ok = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_ok_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_NOK
#define LV_ATTRIBUTE_IMG_SYM_NOK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_NOK uint8_t sym_nok_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xd8, 
  0x70, 
  0x20, 
  0x70, 
  0xd8, 
};

const lv_img_dsc_t sym_nok = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_nok_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_OPEN
#define LV_ATTRIBUTE_IMG_SYM_OPEN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_OPEN uint8_t sym_open_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x20, 
  0x70, 
  0xd8, 
  0x70, 
  0x20, 
};

const lv_img_dsc_t sym_open = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_open_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_BT
#define LV_ATTRIBUTE_IMG_SYM_BT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_BT uint8_t sym_bt_map[] = {
  0xe9, 0xe9, 0xe9, 0xff, 	/*Color of index 0*/
  0x1b, 0x1b, 0x1b, 0xff, 	/*Color of index 1*/

  0x3f, 0xf0, 
  0x77, 0xb8, 
  0xf3, 0x3c, 
  0x80, 0x04, 
  0x9c, 0xe4, 
  0xc8, 0x4c, 
  0xe3, 0x1c, 
  0x77, 0xb8, 
  0x3f, 0xf0, 
};

const lv_img_dsc_t sym_bt = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 9,
  .data_size = 26,
  .data = sym_bt_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_USB
#define LV_ATTRIBUTE_IMG_SYM_USB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_USB uint8_t sym_usb_map[] = {
  0xf6, 0xf6, 0xf6, 0xff, 	/*Color of index 0*/
  0x10, 0x10, 0x10, 0xff, 	/*Color of index 1*/

  0x0f, 0xfc, 
  0xf8, 0x04, 
  0x88, 0x04, 
  0xa8, 0x04, 
  0x88, 0x04, 
  0xa8, 0x04, 
  0x88, 0x04, 
  0xf8, 0x04, 
  0x0f, 0xfc, 
};

const lv_img_dsc_t sym_usb = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 9,
  .data_size = 26,
  .data = sym_usb_map,
};



