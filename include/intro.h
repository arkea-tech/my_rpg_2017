/*
** EPITECH PROJECT, 2018
** rpg.h
** File description:
** intro.h file
*/

#ifndef		INTRO_H_
#define		INTRO_H_

#include <SFML/Graphics.h>

typedef struct intro_s
{
	sfSprite *intro_sprite;
	sfClock *clock_intro;
} intro_t;

static const char PATH_INTRO[] = "ressources/img/elements_intro.png";

static const int INTRO_RECT_VALUES_AREA[4] = {
	0,
	0,
	500,
	238
};

static const int INTRO_ONE_SPRITE_WIDTH = 500;
static const int INTRO_ONE_SPRITE_HEIGHT = 238;

static const int INTRO_TOTAL_WIDTH = 2500;
static const int INTRO_MAX_TOP = 1904;

#endif	/* INTRO_H_ */
