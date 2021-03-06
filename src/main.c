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

#include <cpctelera.h>
#include "scenes/menu.h"
#include "scenes/game.h"
#include "sprites/sprites.h"
#include "constants.h"

// Initialization of the Amstrad CPC at the start of the application
void initializeCPC() {
   // Disable firmware: we dont want it to interfere with our code
   cpct_disableFirmware();

   // Set the hardware palette (convert firmware colour values to hardware ones and set the palette)
   cpct_fw2hw(G_palette, 16);
   cpct_setPalette(G_palette, 16);    // Descomentar estas tres lineas cuando tengamos paleta
   cpct_setBorder(G_palette[0]);

   // Change to Mode 0 (160x200, 16 colours)
   cpct_setVideoMode(0);

}

void initScene(u8 *scene) {
   // Scene inits
   switch(*scene) {
      case G_sceneMenu:
         initMenu();
      break;
      case G_sceneGame:
         initGame();
      break;
   }
}

void application() {
   //u8 scene = G_sceneGame;    // Primera escena (y la actual)
   u8 scene = G_sceneMenu;      // Primera escena (y la actual)
   u8 nextScene = scene;        // Siguiente escena (siempre empieza siendo igual a la primera)

   // Initialize CPC before starting the game
   initializeCPC();

   // Inicializamos la primera escena
   initScene(&scene);

   // Main loop
   while (1) {
      // Scene updates
      switch(scene) {
         case G_sceneMenu:
            nextScene = updateMenu();
         break;
         case G_sceneGame:
            nextScene = updateGame();
         break;
      }

      // Comprobamos si vamos a cambiar de escena
      if(scene != nextScene) {
         // Cambiamos la escena actual y la inicializamos
         scene = nextScene;
         initScene(&scene);
      }
   }
}

// Main
// IMPORTANTE: No anadir mas lineas de codigo a esta funcion.
// Cuando movemos la pila no se debe hacer uso de ella dentro
// de la misma funcion, asi que simplemente llamamos a application()
void main(void) {
   cpct_setStackLocation((void*)0x8000);

   application();   
}
