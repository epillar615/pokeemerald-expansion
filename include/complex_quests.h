#ifndef GUARD_COMPLEX_QUESTS_H
#define GUARD_COMPLEX_QUESTS_H

#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"

/////////////////////////////////////////////
/////////////BEGIN STRING EXTERNS/////////////

//Descriptions
//Main
extern const u8 gText_MainQuestDesc_1[];
extern const u8 gText_MainQuestDesc_2[];
extern const u8 gText_MainQuestDesc_3[];
extern const u8 gText_MainQuestDesc_4[];
extern const u8 gText_MainQuestDesc_5[];
extern const u8 gText_MainQuestDesc_6[];
extern const u8 gText_MainQuestDesc_7[];
extern const u8 gText_MainQuestDesc_8[];
extern const u8 gText_MainQuestDesc_9[];

extern const u8 *const gTable_MainQuestDescs[];

//Roxanne Fossil Hunting
extern const u8 gText_FossilQuestDesc_1[];
extern const u8 gText_FossilQuestDesc_2[];
extern const u8 gText_FossilQuestDesc_3[];
extern const u8 gText_FossilQuestDesc_4[];
extern const u8 gText_FossilQuestDesc_5[];
extern const u8 gText_FossilQuestDesc_6[];
extern const u8 gText_FossilQuestDesc_7[];
extern const u8 gText_FossilQuestDesc_8[];
extern const u8 gText_FossilQuestDesc_9[];

extern const u8 *const gTable_FossilQuestDescs[];

//Maps
//Main Quest
extern const u8 gText_MainQuestMap_1[];
extern const u8 gText_MainQuestMap_2[];
extern const u8 gText_MainQuestMap_3[];
extern const u8 gText_MainQuestMap_4[];
extern const u8 gText_MainQuestMap_5[];
extern const u8 gText_MainQuestMap_6[];
extern const u8 gText_MainQuestMap_7[];
extern const u8 gText_MainQuestMap_8[];
extern const u8 gText_MainQuestMap_9[];

extern const u8 *const gTable_MainQuestMaps[];

//Roxanne Fossil Hunting
extern const u8 gText_FossilQuestMap_1[];
extern const u8 gText_FossilQuestMap_2[];
extern const u8 gText_FossilQuestMap_3[];
extern const u8 gText_FossilQuestMap_4[];
extern const u8 gText_FossilQuestMap_5[];
extern const u8 gText_FossilQuestMap_6[];
extern const u8 gText_FossilQuestMap_7[];
extern const u8 gText_FossilQuestMap_8[];
extern const u8 gText_FossilQuestMap_9[];

extern const u8 *const gTable_FossilQuestMaps[];

/////////////END STRING EXTERNS/////////////
////////////////////////////////////////////

/////////////////////////////////////////
///////////BEGIN QUEST STRINGS///////////

/////BEGIN DESCRIPTIONS/////

//Main Descriptions
const u8 gText_MainQuestDesc_1[] = _("Defeat the Rustboro Gym Leader,\nRoxanne.");
const u8 gText_MainQuestDesc_2[] = _("Defeat the Dewford Gym Leader,\nBrawly.");
const u8 gText_MainQuestDesc_3[] = _("Defeat the Mauville Gym Leader,\nWattson.");
const u8 gText_MainQuestDesc_4[] = _("Defeat the Lavaridge Gym Leader,\nFlannery.");
const u8 gText_MainQuestDesc_5[] = _("Defeat the Petalburg Gym Leader,\nNorman.");
const u8 gText_MainQuestDesc_6[] = _("Defeat the Fortree Gym Leader,\nWinona.");
const u8 gText_MainQuestDesc_7[] = _("Defeat the elusive Mossdeep Gym Leader.");
const u8 gText_MainQuestDesc_8[] = _("Defeat the Sootopolis Gym Leader,\nJuan.");
const u8 gText_MainQuestDesc_9[] = _("Defeat the Pokemon League Champion, \nWallace!");

//Roxanne Fossil Hunting Descriptions
const u8 gText_FossilQuestDesc_1[] = _("Speak to Roxanne to start her questline.");
const u8 gText_FossilQuestDesc_2[] = _("Locate the fossil rumoured to be in \nRusturf Tunnel.");
const u8 gText_FossilQuestDesc_3[] = _("Return to Roxanne with your discovery.");
const u8 gText_FossilQuestDesc_4[] = _("Defeat the Lavaridge Gym Leader,\nFlannery.");
const u8 gText_FossilQuestDesc_5[] = _("Defeat the Petalburg Gym Leader,\nNorman.");
const u8 gText_FossilQuestDesc_6[] = _("Defeat the Fortree Gym Leader,\nWinona.");
const u8 gText_FossilQuestDesc_7[] = _("Defeat the elusive Mossdeep Gym Leader.");
const u8 gText_FossilQuestDesc_8[] = _("Defeat the Sootopolis Gym Leader,\nJuan.");
const u8 gText_FossilQuestDesc_9[] = _("Defeat the Pokemon League Champion, \nWallace!");

//////END DESCRIPTIONS//////

//////////BEGIN MAPS////////

//Main Quest Maps
const u8 gText_MainQuestMap_1[] = _("Rustboro City");
const u8 gText_MainQuestMap_2[] = _("Dewford Town");
const u8 gText_MainQuestMap_3[] = _("Mauville City");
const u8 gText_MainQuestMap_4[] = _("Lavaridge Town");
const u8 gText_MainQuestMap_5[] = _("Petalburg Gym");
const u8 gText_MainQuestMap_6[] = _("Fortree City");
const u8 gText_MainQuestMap_7[] = _("Mossdeep City");
const u8 gText_MainQuestMap_8[] = _("Sootopolis City");
const u8 gText_MainQuestMap_9[] = _("The Pokemon League");

//Roxanne Quest Maps
const u8 gText_FossilQuestMap_1[] = _("Rustboro City");
const u8 gText_FossilQuestMap_2[] = _("Rusturf Tunnel");
const u8 gText_FossilQuestMap_3[] = _("Rustboro City");
const u8 gText_FossilQuestMap_4[] = _("Lavaridge Town");
const u8 gText_FossilQuestMap_5[] = _("Petalburg Gym");
const u8 gText_FossilQuestMap_6[] = _("Fortree City");
const u8 gText_FossilQuestMap_7[] = _("Mossdeep City");
const u8 gText_FossilQuestMap_8[] = _("Sootopolis City");
const u8 gText_FossilQuestMap_9[] = _("The Pokemon League");

/////////END MAPS///////////

////////////////////////////////////////
///////////BEGIN QUEST ARRAYS///////////

//Main Quest Arrays
const u8 *const gTable_MainQuestDescs[9] = {
    gText_MainQuestDesc_1,
    gText_MainQuestDesc_2,
    gText_MainQuestDesc_3,
    gText_MainQuestDesc_4,
    gText_MainQuestDesc_5,
    gText_MainQuestDesc_6,
    gText_MainQuestDesc_7,
    gText_MainQuestDesc_8,
    gText_MainQuestDesc_9,
};

const u8 *const gTable_MainQuestMaps[9] = {
    gText_MainQuestMap_1,
    gText_MainQuestMap_2,
    gText_MainQuestMap_3,
    gText_MainQuestMap_4,
    gText_MainQuestMap_5,
    gText_MainQuestMap_6,
    gText_MainQuestMap_7,
    gText_MainQuestMap_8,
    gText_MainQuestMap_9,
};

static const u16 MainQuestSprites[9]={
	OBJ_EVENT_GFX_ROXANNE,
	OBJ_EVENT_GFX_BRAWLY,
	OBJ_EVENT_GFX_WATTSON,
    OBJ_EVENT_GFX_FLANNERY,
    OBJ_EVENT_GFX_NORMAN,
    OBJ_EVENT_GFX_WINONA,
    OBJ_EVENT_GFX_LIZA,
    OBJ_EVENT_GFX_JUAN,
    OBJ_EVENT_GFX_WALLACE,
};

static const u8 MainQuestSpriteTypes[9]={
	OBJECT,
	OBJECT,
	OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
};

//Roxanne Quest Arrays
const u8 *const gTable_FossilQuestDescs[9] = {
    gText_FossilQuestDesc_1,
    gText_FossilQuestDesc_2,
    gText_FossilQuestDesc_3,
    gText_FossilQuestDesc_4,
    gText_FossilQuestDesc_5,
    gText_FossilQuestDesc_6,
    gText_FossilQuestDesc_7,
    gText_FossilQuestDesc_8,
    gText_FossilQuestDesc_9,
};

const u8 *const gTable_FossilQuestMaps[9] = {
    gText_FossilQuestMap_1,
    gText_FossilQuestMap_2,
    gText_FossilQuestMap_3,
    gText_FossilQuestMap_4,
    gText_FossilQuestMap_5,
    gText_FossilQuestMap_6,
    gText_FossilQuestMap_7,
    gText_FossilQuestMap_8,
    gText_FossilQuestMap_9,
};

static const u16 FossilQuestSprites[9]={
	OBJ_EVENT_GFX_ROXANNE,
	OBJ_EVENT_GFX_ROXANNE,
	OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
    OBJ_EVENT_GFX_ROXANNE,
};

static const u8 FossilQuestSpriteTypes[9]={
	OBJECT,
	OBJECT,
	OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
    OBJECT,
};

/////////END QUEST ARRAYS/////////
//////////////////////////////////

#endif