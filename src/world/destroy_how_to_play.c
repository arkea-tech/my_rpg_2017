/*
** EPITECH PROJECT, 2018
** destroy_how_to_play.c
** File description:
** description
*/

#include "game.h"

void	destroy_how_to_play(game_t *game)
{
	sfTexture_destroy(game->how_to.texture_how_to);
	sfSprite_destroy(game->how_to.sprite_how_to);
	button_destroy(game->world.help_button);
}
