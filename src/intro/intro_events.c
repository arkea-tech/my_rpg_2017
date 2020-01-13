/*
** EPITECH PROJECT, 2018
** intro_events.c
** File description:
** event intro
*/

#include "game.h"

void	event_handler_intro(sfRenderWindow *window, game_t *game)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtKeyPressed) {
			game->id_screen = MENU;
		}
	}
}
