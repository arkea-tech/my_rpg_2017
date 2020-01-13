/*
** EPITECH PROJECT, 2018
** create_location_indicator.c
** File description:
** create location indicator
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

bool	create_location_indicator(sfVector2u window_size, game_t *game)
{
	sfIntRect	area = AREA_LOCATION_INDICATOR;
	sfVector2f	pos = {SUBTRACT_PERCENT(window_size.x, 12), 0};

	game->world.location_indicator = \
		create_sprite_from_path(FRAME_LOCATION_INDICATOR, &area, pos);
	if (game->world.location_indicator == NULL)
		return (ERROR);
	return (SUCCESS);
}
