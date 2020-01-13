/*
** EPITECH PROJECT, 2018
** display_tile_map.c
** File description:
** Map
*/

#include "game.h"
#include "my_stdc.h"

int8_t	display_tile_map(sfRenderWindow *window, map_t *map, int story_state)
{
	destroy_map(map);
	if (create_tile_map(map, story_state))
		return (ERROR);
	sfRenderWindow_drawVertexArray(window,
					map->tiled_map,
					&map->state_texture);
	return (SUCCESS);
}
