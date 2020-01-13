/*
** EPITECH PROJECT, 2018
** handle_events_char_select_confirm.c
** File description:
** handle_events_char_select_confirm
*/

#include "game.h"

void	handle_events_char_select_confirm(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	rect = get_global_button_rect(game->select.new);
	button_try_to_detect_hover(event, game->select.new, rect);
	button_try_to_detect_clicked(event, game->select.new, rect);
	rect = get_global_button_rect(game->select.back);
	button_try_to_detect_hover(event, game->select.back, rect);
	button_try_to_detect_clicked(event, game->select.back, rect);
}
