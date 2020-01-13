/*
** EPITECH PROJECT, 2018
** event_debug.c
** File description:
** debug mode
*/

#include "game.h"
#include "csfml_practical.h"
#include "my_stdc.h"

void	debug_mode(sfEvent *event, game_t *game)
{
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyW)
		game->id_screen = WORLD;
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyF)
		game->id_screen = FIGHT;
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyC)
		game->id_screen = CREDIT;
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyR)
		game->state.story_state++;
}
