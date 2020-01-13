/*
** EPITECH PROJECT, 2018
** main_event.c
** File description:
** Events handling rpg project
*/

#include "game.h"
#include "event.h"
#include "pause.h"
#include "char_select.h"
#include "my_stdc.h"

static void handle_all_events(	sfEvent		*event,
				game_t		*game,
				sfVector2u	UNUSED(window_size))
{
	//debug_mode(event, game);
	if (game->locked) {
		if (game->pause_b)
			handle_events_pause(event, game);
		else if (game->char_select_confirm)
			handle_events_char_select_confirm(event, game);
		return;
	} else {
		if (game->id_screen == MENU)
			handle_events_menu(event, game);
		if (game->id_screen == CHAR_SELECT)
			handle_events_char_select(event, game);
		if (game->id_screen == WORLD)
			handle_events_world(event, game);
		if (game->id_screen == FIGHT)
			handle_events_fight(event, game);
		handle_events_dialogue(event, game);
	}
}

void	event_handling(gui_t *gui, game_t *game)
{
	sfEvent		event;
	sfVector2u	window_size = sfRenderWindow_getSize(gui->window);

	while (sfRenderWindow_pollEvent(gui->window, &event)) {
		handle_escape_key(&event, game);
		handle_all_events(&event, game, window_size);
	}
	if (game->shutdown)
		sfRenderWindow_close(gui->window);
}
