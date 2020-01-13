/*
** EPITECH PROJECT, 2018
** world_create.c
** File description:
** world_create
*/

#include "game.h"
#include "world_pnj_proto.h"
#include "my_stdc.h"

static bool	init_variables_inside_struct_to_zero(world_t *world)
{
	world->current_posture = 0;
	world->current_rotation = 0;
	world->map.textures = NULL;
	world->clock_mvmt = sfClock_create();
	if (world->clock_mvmt == NULL)
		return (ERROR);
	return (SUCCESS);
}

bool	create_world(sfRenderWindow *window, game_t *game)
{
	sfVector2u	window_size = sfRenderWindow_getSize(window);

	game->dialogue.next = 0;
	if (init_variables_inside_struct_to_zero(&game->world))
		return (ERROR);
	if (create_character(window_size, game)
	|| create_location_indicator(window_size, game)
	|| create_locations(game)
	|| create_location_text(window_size, game)
	|| create_surround_hud(window_size, game)
	|| create_inventory_button(window_size, game)
	|| create_help_button(window_size, game)
	|| create_inventory(window_size, game)
	|| create_tile_map(&game->world.map, game->state.story_state)
	|| create_map_decoration(window_size, &game->world.map)
	|| create_spirits(window_size, game)
	|| create_background_world(&(game->world.background_world)))
		return (ERROR);
	return (SUCCESS);
}
