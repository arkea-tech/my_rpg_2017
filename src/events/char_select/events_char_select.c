/*
** EPITECH PROJECT, 2018
** events_char_select.c
** File description:
** events in chr selection
*/

#include "game.h"
#include "button.h"

static void	activate_mouse_on_characters(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	rect = get_global_button_rect(game->select.char_male);
	button_try_to_detect_hover(event, game->select.char_male, rect);
	button_try_to_detect_clicked(event, game->select.char_male, rect);
	rect = get_global_button_rect(game->select.char_female);
	button_try_to_detect_hover(event, game->select.char_female, rect);
	button_try_to_detect_clicked(event, game->select.char_female, rect);
}

static void	activate_button_return(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	rect = get_global_button_rect(game->select.return_b);
	button_try_to_detect_hover(event, game->select.return_b, rect);
	button_try_to_detect_clicked(event, game->select.return_b, rect);
}

void	handle_events_char_select(sfEvent *event, game_t *game)
{
	activate_mouse_on_characters(event, game);
	activate_button_return(event, game);
}
