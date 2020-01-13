/*
** EPITECH PROJECT, 2018
** display_location_text.c
** File description:
** description
*/

#include "game.h"

void	update_text_according_to_chapter(game_t *game)
{
	switch (game->state.chapter) {
	case EARTH:
		sfText_setString(game->world.location_text,
				game->world.locations[FOREST]);
		break;
	case FIRE:
		sfText_setString(game->world.location_text,
				game->world.locations[DESERT]);
		break;
	case WATER:
		sfText_setString(game->world.location_text,
				game->world.locations[BEACH]);
		break;
	case AIR:
		sfText_setString(game->world.location_text,
				game->world.locations[MONTAIN]);
		break;
	default:
		break;
	}
}

void	display_location_text(sfRenderWindow *window, game_t *game)
{
	if (game->state.story_state != 0)
		update_text_according_to_chapter(game);
	sfRenderWindow_drawText(window, game->world.location_text, NULL);
}
