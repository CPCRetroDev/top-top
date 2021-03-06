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

#ifndef _GAME_H_
#define _GAME_H_

#include <types.h>
#include "../constants.h"
#include "../entities/heroe.h"
#include "../entities/shot.h"

void initGame();
void initLevel();
void firstDraw();
u8 updateGameLevel();
u8 updateGame();
u8 updateScreens();
void createHeroes();
void updateHeroe(struct Heroe*);
void checkHeroeCollision(struct Heroe*, u8*);
void drawHeroes();
void updateShots(struct Heroe*, struct Shot*);
void checkShotsCollision(struct Shot*, u8*, u8);
void drawShots();
void drawGameBorder();
void drawHUD();
void redrawHUD();
void drawTile(u8, u8, u8);
void changeTile(u8, u8, u8, u8);
void redrawTiles(u8);
void repaintBackgroundOverSprite(u8, u8, u8);
void repaintBackgroundOverShot(struct Shot*, u8);
void drawMap();
void swapPrePosShot(u8*, u8*);
void drawHUDBorder();
void drawHudBorderTile(u8, u8, u8*);
void drawHudSprite(u8, u8, u8, u8, u8*);
void drawHearts();
void drawSingleHeart(struct Heroe *heroe, u8 x, i8 offSetHeart, u8* heartFull, u8* heartHalf);
void drawLevel();
void drawPortraits();
void drawStars(struct Heroe *heroe, u8 x, i8 offSetStar);
void interactWithItems(struct Heroe*, u8*, u8);
void interactWithDoors(struct Heroe*, u8*);
void checkButtons(u8 buttons[G_maxButtons][2], u8 doors[G_maxButtons][2], u8 mapDest[G_mapHTiles][G_mapWTiles], u8 sideHeroe, i8 nextDoor, u8 mapValue, u8 i, u8 side);
void checkNextLevel();
u8 tile2tile1(u8 x, u8 y);
void swapBuffers(u8**);
//PANTALLAS
void drawGameOver();
void drawTextGameOver();
void drawGameComplete();
void drawTextGameComplete();
void drawScreenOptions();
void drawScreensBorder();
void drawScreensBorderTile(u8 x, u8 y, u8 *spriteBorder);
void drawScreensBorderSprite(u8 x, u8 y, u8 *spriteBorder);
//FIN PANTALLAS

extern struct Heroe heroe1;
extern struct Heroe heroe2;

extern struct Shot shots1[G_maxShots];
extern struct Shot shots2[G_maxShots];

extern u8 map1[G_mapHTiles][G_mapWTiles];
extern u8 map2[G_mapHTiles][G_mapWTiles];

extern u8 doorLevel1;
extern u8 doorLevel2;

extern u8 blueDoor[G_maxButtons][2];
extern u8 redDoor[G_maxButtons][2];

extern u8 blueButton[G_maxButtons][2];
extern u8 redButton[G_maxButtons][2];

extern u8 level;
extern u8 nextMap;

extern u8 redrawHearts;
extern u8 redrawStars;

extern u8 sceneGame;		// pantalla actual

#endif