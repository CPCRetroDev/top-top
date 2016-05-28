//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of TopTop: An Amstrad CPC Game
//  Copyright (C) 2015 Rantan (@RantanGames)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#include "audio.h"

__at(0x7D00) const u8 G_toptop_music[195] = {
 0x41, 0x54, 0x31, 0x30, 0x01, 0x40, 0x42, 0x0f, 0x02, 0x06, 0x2a, 0x00, 0x12, 0x7d, 0x1b, 0x7d,
 0x22, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x14, 0x7d, 0x01, 0x00, 0x36, 0x03, 0x0d,
 0x14, 0x7d, 0x01, 0x00, 0x7c, 0x0c, 0x34, 0x30, 0x2c, 0x28, 0x24, 0x20, 0x1c, 0x18, 0x14, 0x10,
 0x0c, 0x08, 0x04, 0x0d, 0x14, 0x7d, 0x30, 0x00, 0x00, 0x00, 0x4d, 0x7d, 0x00, 0x4e, 0x7d, 0x78,
 0x7d, 0x7d, 0x7d, 0x00, 0x4e, 0x7d, 0xbe, 0x7d, 0x9e, 0x7d, 0x01, 0x3c, 0x7d, 0x00, 0x8a, 0xe0,
 0x00, 0x00, 0x01, 0x04, 0x4b, 0x02, 0x4b, 0x4b, 0x04, 0x4b, 0x02, 0x4b, 0x4b, 0x04, 0x4b, 0x02,
 0x4b, 0x4b, 0x04, 0x4b, 0x04, 0x4b, 0x04, 0x4b, 0x02, 0x4b, 0x4b, 0x04, 0x4b, 0x02, 0x4b, 0x4b,
 0x04, 0x4b, 0x02, 0x4b, 0x4b, 0x04, 0x4b, 0x00, 0x42, 0x80, 0x00, 0x00, 0x00, 0x8a, 0xe0, 0x00,
 0x00, 0x02, 0x04, 0x42, 0x00, 0x02, 0x4b, 0x53, 0x08, 0x53, 0x55, 0x08, 0x55, 0x59, 0x04, 0x5d,
 0x04, 0x4b, 0x08, 0x4b, 0x53, 0x08, 0x53, 0x55, 0x08, 0x55, 0x59, 0x04, 0x29, 0x00, 0x80, 0xe0,
 0x00, 0x00, 0x02, 0x08, 0x41, 0x49, 0x08, 0x49, 0x4b, 0x08, 0x4b, 0x4f, 0x04, 0x53, 0x04, 0x41,
 0x08, 0x41, 0x49, 0x08, 0x49, 0x4b, 0x42, 0x00, 0x06, 0x4b, 0x4f, 0x04, 0x53, 0x00, 0x42, 0x80,
 0x00, 0x00, 0x00
};

__at(0x7DD2) const u8 G_toptop_effects[231] = {
 0x41, 0x54, 0x31, 0x30, 0x01, 0x40, 0x42, 0x0f, 0x02, 0xff, 0xc5, 0x00, 0xf0, 0x7d, 0xf9, 0x7d,
 0x08, 0x7e, 0x17, 0x7e, 0x40, 0x7e, 0x54, 0x7e, 0x69, 0x7e, 0x75, 0x7e, 0x9c, 0x7e, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x7c, 0x01, 0x78, 0x02, 0x74, 0x03, 0x70,
 0x05, 0x6c, 0x08, 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x36, 0x0c, 0x7c, 0x0b, 0x78, 0x09, 0x78, 0x07,
 0x34, 0x30, 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x7c, 0x07, 0x74, 0x0c, 0x6c, 0x10, 0x68, 0x0c, 0x64,
 0x07, 0x60, 0x0c, 0x78, 0x07, 0x70, 0x0c, 0x68, 0x10, 0x64, 0x0c, 0x60, 0x07, 0x5c, 0x0c, 0x74,
 0x07, 0x6c, 0x0c, 0x64, 0x10, 0x60, 0x0c, 0x5c, 0x07, 0x58, 0x0c, 0x0d, 0xf2, 0x7d, 0x01, 0x00,
 0x7c, 0x0c, 0x34, 0x30, 0x2c, 0x28, 0x24, 0x20, 0x1c, 0x18, 0x14, 0x10, 0x0c, 0x08, 0x04, 0x0d,
 0xf2, 0x7d, 0x01, 0x00, 0x3e, 0x2c, 0x7c, 0x16, 0x74, 0x0c, 0x6c, 0x0a, 0x60, 0x08, 0x54, 0x04,
 0x4c, 0x03, 0x48, 0x01, 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x3c, 0xb0, 0xff, 0xff, 0x20, 0x14, 0x04,
 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x3e, 0x15, 0x32, 0x00, 0x22, 0x00, 0x16, 0x00, 0x0a, 0x00, 0x06,
 0x00, 0x3e, 0x13, 0x32, 0x00, 0x22, 0x00, 0x16, 0x00, 0x0a, 0x00, 0x06, 0x00, 0x3e, 0x12, 0x32,
 0x00, 0x22, 0x00, 0x16, 0x00, 0x0a, 0x00, 0x0d, 0xf2, 0x7d, 0x01, 0x00, 0x02, 0x20, 0x0d, 0xf2,
 0x7d, 0x40, 0x00, 0x00, 0x00, 0xb3, 0x7e, 0x00, 0xb4, 0x7e, 0xb4, 0x7e, 0xb4, 0x7e, 0x01, 0xa9,
 0x7e, 0x00, 0x42, 0x80, 0x00, 0x00, 0x00
};






