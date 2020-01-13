/*
** EPITECH PROJECT, 2018
** create_earth_decoration.c
** File description:
** create_earth_decoration
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static uint8_t create_fences_north_earth(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = window_size.x,
	pos.y = SUBTRACT_PERCENT(window_size.y, 76);
	for (int i = 0 ; i < 6 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t create_fences_south_earth(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = window_size.x,
	pos.y = SUBTRACT_PERCENT(window_size.y, 36);
	for (int i = 6 ; i < 12 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t create_fences_closing_earth(	sfVector2u	window_size,
						map_t		*map)
{
	sfVector2f	pos;
	sfIntRect	area = AREA_CLOSING_FENCE_EARTH;

	pos.x = SUBTRACT_PERCENT(window_size.x, 25);
	pos.y = SUBTRACT_PERCENT(window_size.y, 42);
	for (int i = 12 ; i < 17 ; ++i) {
		map->fences[i] = create_sprite_from_path(	PATH_FENCE,
								&area,
								pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.y -= 96;
	}
	return (SUCCESS);
}

uint8_t create_earth_decoration(sfVector2u window_size, map_t *map)
{
	sfIntRect	area = AREA_FENCE_EARTH;

	return (create_fences_north_earth(window_size, map, &area)
	|| create_fences_south_earth(window_size, map, &area)
	|| create_fences_closing_earth(window_size, map) ? ERROR : SUCCESS);
}
