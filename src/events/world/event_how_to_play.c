/*
** EPITECH PROJECT, 2018
** event how to play
** File description:
** event how to play
*/

#include "world.h"
#include "csfml_practical.h"
#include "event.h"
#include "my_stdc.h"

int how_to_play_event(sfEvent *event, game_t *game, int offset)
{
	game->how_to.area_how_to_play.top = offset;
	if (event->type == sfEvtMouseButtonPressed)
		game->how_to.area_how_to_play.left = \
		game->how_to.area_how_to_play.left + 775;
	if (game->how_to.area_how_to_play.left > 775) {
		game->how_to.area_how_to_play.left = 0;
		game->world.help_button->state = IDLE;
		return (0);
	}
	sfSprite_setTextureRect(game->how_to.sprite_how_to,
		game->how_to.area_how_to_play);
	return (0);
}

void handle_how_to_play_event(sfEvent *event, game_t *game, int offset)
{
	if (game->world.help_button->state == CLICKED)
		how_to_play_event(event, game, offset);
}

void activate_how_to_play_menu(sfEvent *event, game_t *game)
{
	sfFloatRect rect;

	rect = get_global_button_rect(game->world.help_button);
	button_try_to_detect_hover(event, game->world.help_button, rect);
	button_try_to_detect_clicked(event, game->world.help_button, rect);
}