/*
** EPITECH PROJECT, 2018
** create_map_decoration.c
** File description:
** map deco
*/

#include "game.h"
#include "my_stdc.h"

uint8_t create_map_decoration(sfVector2u window_size, map_t *map)
{
	map->fences = malloc(sizeof(sfSprite *) * (TOTAL_FENCES + 1));
	if (map->fences == NULL)
		return (ERROR);
	map->fences[TOTAL_FENCES] = NULL;
	if (create_earth_decoration(window_size, map))
		return (ERROR);
	if (create_fire_decoration(window_size, map))
		return (ERROR);
	if (create_water_decoration(window_size, map))
		return (ERROR);
	if (create_air_decoration(window_size, map))
		return (ERROR);
	return (SUCCESS);
}
