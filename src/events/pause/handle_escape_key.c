/*
** EPITECH PROJECT, 2018
** handle_escape_key.c
** File description:
** handle_escape_key.c
*/

#include "game.h"

void	handle_escape_key(sfEvent *event, game_t *game)
{
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyEscape) {
		if (game->pause_b) {
			game->pause_b = false;
			game->locked = false;
		} else {
			game->pause_b = true;
			game->locked = true;
		}
	}
}
