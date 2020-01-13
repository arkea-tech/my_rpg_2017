/*
** EPITECH PROJECT, 2018
** launch_graphical_game.c
** File description:
** introduction creation
*/

#include "game.h"
#include "intro.h"
#include "intro_proto.h"
#include "get_func_proto.h"
#include "csfml_practical.h"
#include "my_stdc.h"

sfSprite *create_sprite(char const *path,
sfIntRect rect, sfVector2f pos)
{
	sfSprite *sprite;

	sprite = get_sprite(path, rect);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

int create_intro(intro_t *intro, sfVector2u window_size)
{
	sfVector2f pos = { SUBTRACT_PERCENT(window_size.x, 50),
		SUBTRACT_PERCENT(window_size.y, 50)};
	sfIntRect rect = get_rectangle(INTRO_RECT_VALUES_AREA);

	pos.x = pos.x - INTRO_RECT_VALUES_AREA[2] / 2;
	pos.y = pos.y - INTRO_RECT_VALUES_AREA[3] / 2;
	intro->intro_sprite = create_sprite(PATH_INTRO, rect, pos);
	intro->clock_intro = sfClock_create();
	if (intro->clock_intro == NULL)
		return (ERROR);
	return (0);
}
