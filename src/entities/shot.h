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

#ifndef _SHOT_H_
#define _SHOT_H_

#include <types.h>
#include "../sprites/animation.h"
#include "heroe.h"
#include "../constants.h"

typedef enum ShotDir {
	sd_left,
	sd_right,
	sd_up
};

//Entidad heroe
typedef struct Shot {
	u8 x;
	u8 y;
	u8 preX[2];
	u8 preY[2];
	u8 width;
	u8 height;
	enum shotLevel level;
	u8 active;
	u8 drawable;
	enum ShotDir dir;
	TAnimation anim;
	TAnimFrame** nextAnim;
	u8 sensor1;
	u8 sensor2;
};

void initShots(struct Shot*);
void createShot(struct Heroe*, struct Shot*);
void updateSensorShot(struct Shot*);

#endif