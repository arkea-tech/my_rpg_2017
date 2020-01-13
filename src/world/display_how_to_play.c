/*
** EPITECH PROJECT, 2018
** how to play
** File description:
** how to play
*/

#include "world.h"
#include "game.h"
#include "csfml_practical.h"

void display_how_to_play(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window,
		game->how_to.sprite_how_to, NULL);
}