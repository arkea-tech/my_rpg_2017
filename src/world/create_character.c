/*
** EPITECH PROJECT, 2018
** create_character.c
** File description:
** create char
*/

#include "game.h"
#include "my_stdc.h"

bool	create_character(sfVector2u window_size, game_t *game)
{
	sfIntRect	area = AREA_FEM_CHAR_MINI;
	sfVector2f	pos;

	pos.x = game->state.x;
	pos.y = game->state.y;
	if (pos.x == -1.0) {
		pos.x = SUBTRACT_PERCENT(window_size.x, 10);
		pos.y = SUBTRACT_PERCENT(window_size.y, 56);
	}
	if (create_character_fem(pos, &area, game))
		return (ERROR);
	area = AREA_MALE_CHAR_MINI;
	if (create_character_male(pos, &area, game))
		return (ERROR);
	return (SUCCESS);
}
