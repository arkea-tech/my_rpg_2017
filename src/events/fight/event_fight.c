/*
** EPITECH PROJECT, 2018
** event_fight.c
** File description:
** event_fight
*/

#include "game.h"
#include "event.h"

void	activate_mouse_spell_buttons(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	for (uint8_t i = 0 ; i < NB_SPELL ; ++i) {
		rect = get_global_button_rect(game->fight.button_tab_spells[i]);
		button_try_to_detect_hover_simple(event,
					game->fight.button_tab_spells[i],
					rect);
		button_try_to_detect_clicked_simple(event,
					game->fight.button_tab_spells[i],
					rect);
	}
}

void	handle_events_fight(sfEvent *event, game_t *game)
{
	activate_mouse_spell_buttons(event, game);
	activate_how_to_play_menu(event, game);
	handle_how_to_play_event(event, game, 525);
}
