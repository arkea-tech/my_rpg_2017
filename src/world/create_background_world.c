/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "world.h"

bool create_background_world(background_world_t *background_world)
{
	background_world->
		texture_world_background =
		sfTexture_createFromFile("./ressources/img/background_world.pn\
g", NULL);
	if (!background_world->texture_world_background)
		return (1);
	background_world->sprite_world_background
		= sfSprite_create();
	sfSprite_setTexture(
		background_world->sprite_world_background,
		background_world->
		texture_world_background,
		sfTrue);
	return (0);
}

void draw_background_world(	sfRenderWindow		*window,
				background_world_t	*background_world)
{
	sfRenderWindow_drawSprite(window,
		background_world->sprite_world_background, NULL);
}

void destroy_background_world(background_world_t *background_world)
{
	sfSprite_destroy(background_world->sprite_world_background);
	sfTexture_destroy(background_world->texture_world_background);
}
