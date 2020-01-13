/*
** EPITECH PROJECT, 2018
** rpg.h
** File description:
** Main header for the rpg project
*/

#ifndef		_RPG_H_
#define		_RPG_H_

typedef struct game_s game_t;

#include "gui.h"
#include "menu.h"
#include "pause.h"
#include "char_select.h"
#include "char.h"
#include "inventory.h"
#include "game_state.h"
#include "audio.h"
#include "world.h"
#include "intro.h"
#include "how_to_play.h"
#include "dialogue.h"
#include "fight.h"
#include "battle_mode.h"
#include "credit.h"

static const char CREDITS[] = "Game created by Nicolas KEITA, \
Raja BEN ALI, Gabriel PIRONNEAU, Guillaume Houbion and Damien Madroszyk";
static const char GAME_NAME[] = "ELEMENTARY QUESTS";

struct game_s {
	int		id_screen;
	intro_t		intro;
	menu_t		menu;
	pause_t		pause;
	select_t	select;
	bool		locked;
	bool		pause_b;
	bool		char_select_confirm;
	bool		shutdown;
	sfView		*view;
	char_t		character;
	inventory_t	invent;
	how_to_play_t	how_to;
	game_state_t	state;
	audio_t		audio;
	world_t		world;
	dialogue_t	dialogue;
	fight_t		fight;
	credit_t	credit;
};

enum id_screen_e {
	INTRO = 0,
	MENU,
	CHAR_SELECT,
	WORLD,
	FIGHT,
	CREDIT
};

static const int	NB_SCENE = 6;
#endif	/* _RPG_H_ */
