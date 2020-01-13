/*
** EPITECH PROJECT, 2018
** dialogue_event_main.c
** File description:
** dialogue_event
*/

#include "game.h"

void	handle_events_dialogue(sfEvent *event, game_t *game)
{
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyX) {
		game->dialogue.b_trigger_a = 1;
		game->dialogue.next += 1;
	}
}
