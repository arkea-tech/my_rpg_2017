/*
** EPITECH PROJECT, 2018
** events_menu.c
** File description:
** events of the menu
*/

#include "game.h"

static void	activate_menu_buttons(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	for (int i = 0 ; game->menu.menu_buttons[i] != NULL ; ++i) {
		rect = get_global_button_rect(game->menu.menu_buttons[i]);
		button_try_to_detect_hover(event,
					game->menu.menu_buttons[i], rect);
		button_try_to_detect_clicked(event,
					game->menu.menu_buttons[i], rect);
	}
}

void		handle_events_menu(sfEvent *event, game_t *game)
{
	activate_menu_buttons(event, game);
}
