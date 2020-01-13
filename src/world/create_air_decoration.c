/*
** EPITECH PROJECT, 2018
** create_air_decoration.c
** File description:
** Air fences
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static uint8_t	create_fences_north_air(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 80);
	pos.y = SUBTRACT_PERCENT(window_size.y, 76);
	for (int i = 47 ; i < 52 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t	create_fences_south_air(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 80);
	pos.y = SUBTRACT_PERCENT(window_size.y, 36);
	for (int i = 52 ; i < 57 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

int8_t	create_air_decoration(sfVector2u window_size, map_t *map)
{
	sfIntRect	area = AREA_FENCE_AIR;

	return (create_fences_north_air(window_size, map, &area)
	|| create_fences_south_air(window_size, map, &area) ? ERROR : SUCCESS);
}
