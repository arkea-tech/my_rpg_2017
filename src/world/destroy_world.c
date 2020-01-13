/*
** EPITECH PROJECT, 2018
** destroy_world.c
** File description:
** destroy_world
*/

#include "game.h"

void	destroy_map(map_t *map)
{
	sfVertexArray_destroy(map->tiled_map);
}

static void	destroy_character(game_t *game)
{
	for (int i = 0 ; i < 4 ; ++i) {
		for (int i2 = 0 ; i2 < 3 ; ++i2) {
			sfSprite_destroy(game->world.char_male_mini[i][i2]);
			sfSprite_destroy(game->world.char_fem_mini[i][i2]);
		}
	}
}

void	destroy_world(game_t *game)
{
	sfSprite_destroy(game->world.elem_air);
	sfSprite_destroy(game->world.elem_earth);
	sfSprite_destroy(game->world.elem_fire);
	sfSprite_destroy(game->world.elem_water);
	sfSprite_destroy(game->world.inventory_girl);
	sfSprite_destroy(game->world.inventory_boy);
	destroy_character(game);
	destroy_background_world(&(game->world.background_world));
	sfSprite_destroy(game->world.location_indicator);
	free(game->world.locations);
	sfText_destroy(game->world.location_text);
	sfSprite_destroy(game->world.surround_hud);
	button_destroy(game->world.inventory_button);
	destroy_how_to_play(game);
}
