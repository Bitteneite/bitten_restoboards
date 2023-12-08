/*
  oooooooooo.   o8o      .       .                                       ooooo                           
  `888'   `Y8b  `"'    .o8     .o8                                       `888'                           
   888     888 oooo  .o888oo .o888oo  .ooooo.  ooo. .oo.    .oooo.o       888  ooo. .oo.    .ooooo.      
   888oooo888' `888    888     888   d88' `88b `888P"Y88b  d88(  "8       888  `888P"Y88b  d88' `"Y8     
   888    `88b  888    888     888   888ooo888  888   888  `"Y88b.        888   888   888  888           
   888    .88P  888    888 .   888 . 888    .o  888   888  o.  )88b       888   888   888  888   .o8 .o. 
  o888bood8P'  o888o   "888"   "888" `Y8bod8P' o888o o888o 8""888P'      o888o o888o o888o `Y8bod8P' Y8P 
╔════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║ ────────── Special Keyboard Manufacturing & Restoration Division © 1992. No Rights Reserved ────────── ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════╝
*/

#pragma once

#include_next <config.h>

// Vial
#define VIAL_KEYBOARD_UID {0xD7, 0x66, 0x33, 0xD8, 0xBC, 0x42, 0x3B, 0x54}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Solenoid
#define SOLENOID_DEFAULT_DWELL 10 
#define SOLENOID_MAX_DWELL 20
#define SOLENOID_MIN_DWELL 5
#define SOLENOID_PIN GP2