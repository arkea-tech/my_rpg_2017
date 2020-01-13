/*
** EPITECH PROJECT, 2018
** create_fire_decoration.c
** File description:
** fire fences
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static uint8_t create_fences_north_fire(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 30);
	pos.y = SUBTRACT_PERCENT(window_size.y, 76);
	for (int i = 17 ; i < 22 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t create_fences_south_fire(	sfVector2u	window_size,
						map_t		*map,
						sfIntRect	*area)
{
	sfVector2f pos;

	pos.x = SUBTRACT_PERCENT(window_size.x, 30);
	pos.y = SUBTRACT_PERCENT(window_size.y, 36);
	for (int i = 22 ; i < 27 ; ++i) {
		map->fences[i] = create_sprite_from_path(PATH_FENCE, area, pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.x -= 95;
	}
	return (SUCCESS);
}

static uint8_t create_fences_closing_fire(	sfVector2u	window_size,
						map_t		*map)
{
	sfVector2f	pos;
	sfIntRect	area = AREA_CLOSING_FENCE_FIRE;

	pos.x = SUBTRACT_PERCENT(window_size.x, 50);
	pos.y = SUBTRACT_PERCENT(window_size.y, 42);
	for (int i = 27 ; i < 32 ; ++i) {
		map->fences[i] = create_sprite_from_path(	PATH_FENCE,
								&area,
								pos);
		if (map->fences[i] == NULL)
			return (ERROR);
		pos.y -= 96;
	}
	return (SUCCESS);
}

int8_t create_fire_decoration(sfVector2u window_size, map_t *map)
{
	sfIntRect	area = AREA_FENCE_FIRE;

	return (create_fences_north_fire(window_size, map, &area)
	|| create_fences_south_fire(window_size, map, &area)
	|| create_fences_closing_fire(window_size, map) ? ERROR : SUCCESS);
}
