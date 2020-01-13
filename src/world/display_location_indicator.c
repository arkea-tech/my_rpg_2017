/*
** EPITECH PROJECT, 2018
** display_location_indicator.c
** File description:
** display_location_indicator
*/

#include "game.h"

void	display_location_indicator(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->world.location_indicator, NULL);
}
