/*
** EPITECH PROJECT, 2018
** create_water_decoration.c
** File description:
** create water deco
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static uint8_t	create_fences_north_water(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 55);
	pos.y = SUBTRACT_PERCENT(window_size.y, 76);
	for (int i = 32 ; i < 37 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t	create_fences_south_water(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 55);
	pos.y = SUBTRACT_PERCENT(window_size.y, 36);
	for (int i = 37 ; i < 42 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t	create_fences_closing_water(	sfVector2u	window_size,
						map_t		*map)
{
	sfVector2f	pos;
	sfIntRect	area = AREA_CLOSING_FENCE_WATER;

	pos.x = SUBTRACT_PERCENT(window_size.x, 75);
	pos.y = SUBTRACT_PERCENT(window_size.y, 42);
	for (int i = 42 ; i < 47 ; ++i) {
		map->fences[i] = create_sprite_from_path(	PATH_FENCE,
								&area,
								pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.y -= 96;
	}
	return (SUCCESS);
}

int8_t	create_water_decoration(sfVector2u window_size, map_t *map)
{
	sfIntRect	area = AREA_FENCE_WATER;

	return (create_fences_north_water(window_size, map, &area)
	|| create_fences_south_water(window_size, map, &area)
	|| create_fences_closing_water(window_size, map) ? ERROR : SUCCESS);
}
