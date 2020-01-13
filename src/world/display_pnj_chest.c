/*
** EPITECH PROJECT, 2018
** world_main.c
** File description:
** launch_world
*/

#include <SFML/Graphics.h>
#include "game.h"
#include "world.h"
#include "world_pnj.h"
#include "my_stdc.h"

void display_pnj_chest(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->world.spirits.earth, NULL);
	sfRenderWindow_drawSprite(window, game->world.spirits.water, NULL);
	sfRenderWindow_drawSprite(window, game->world.spirits.wind, NULL);
	sfRenderWindow_drawSprite(window, game->world.spirits.fire, NULL);
	if (game->world.pot == 0)
		sfRenderWindow_drawSprite(window, game->world.chest, NULL);
}
