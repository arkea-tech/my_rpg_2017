/*
** EPITECH PROJECT, 2018
** modif_terrain_events.c
** File description:
** Story state events modify terrain
*/

#include "world.h"

void	modify_terrain_events(map_t *map, int story_state)
{
	if (story_state == 1)
		map->map_nb[1][16] = 1;
	if (story_state == 2)
		map->map_nb[3][14] = 1;
	if (story_state == 3)
		map->map_nb[1][12] = 1;
	if (story_state == 4)
		map->map_nb[3][9] = 1;
	if (story_state == 5)
		map->map_nb[1][7] = 1;
	if (story_state == 6)
		map->map_nb[3][4] = 1;
	if (story_state == 7)
		map->map_nb[1][2] = 1;
}
