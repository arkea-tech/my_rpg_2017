/*
** EPITECH PROJECT, 2018
** launch_graphical_game.c
** File description:
** destroy introduction
*/

#include <SFML/Graphics.h>
#include "intro.h"
#include "intro_proto.h"

int destroy_intro(intro_t *intro)
{
	sfSprite_destroy(intro->intro_sprite);
	sfClock_destroy(intro->clock_intro);
	return (0);
}
