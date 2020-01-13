/*
** EPITECH PROJECT, 2018
** pause_destroy.c
** File description:
** pause destroy
*/

#include "game.h"

void	destroy_pause(game_t *game)
{
	buttons_destroy(&game->pause.buttons);
	sfSprite_destroy(game->pause.frame);
}
