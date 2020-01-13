/*
** EPITECH PROJECT, 2018
** event_pause.c
** File description:
** event_pause.c
*/

#include "event.h"
#include "game.h"

static void	perform_action_pause_buttons(	sfEvent		*event,
						game_t		*game,
						sfFloatRect	rect,
						int		i)
{
	if (event->type == sfEvtMouseButtonReleased
	&& sfFloatRect_contains(&rect,
				event->mouseButton.x,
				event->mouseButton.y))
		game->pause.buttons[i]->state = CLICKED;
}

static void	activate_hover_pause_buttons(	sfEvent		*event,
						game_t		*game,
						sfFloatRect	rect,
						int		i)
{
	if (sfFloatRect_contains(&rect,
				event->mouseMove.x,
				event->mouseMove.y))
		game->pause.buttons[i]->state = HOVER;
	else
		game->pause.buttons[i]->state = IDLE;
}

static void	activate_pause_buttons(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	for (int i = 0 ; game->pause.buttons[i] != NULL ; ++i) {
		rect = get_global_button_rect(game->pause.buttons[i]);
		activate_hover_pause_buttons(event, game, rect, i);
		perform_action_pause_buttons(event, game, rect, i);
	}
}

void	handle_events_pause(sfEvent *event, game_t *game)
{
	activate_pause_buttons(event, game);
}
