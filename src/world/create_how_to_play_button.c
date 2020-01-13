/*
** EPITECH PROJECT, 2018
** create how to play button
** File description:
** create how to play button
*/

#include "game.h"
#include "my_stdc.h"

void create_how_to_play(game_t *game, sfVector2u window_size)
{
	sfIntRect area = {0, 0, 775, 525};
	sfVector2f pos= {((window_size.x / 2) - (387)), \
	((window_size.y / 2) - (262))};

	game->how_to.area_how_to_play = area;
	game->how_to.texture_how_to = \
	sfTexture_createFromFile(HOW_TO_PLAY, NULL);
	game->how_to.sprite_how_to = \
	sfSprite_create();
	sfSprite_setTexture(game->how_to.sprite_how_to, \
	game->how_to.texture_how_to, sfTrue);
	sfSprite_setTextureRect(game->how_to.sprite_how_to,
				game->how_to.area_how_to_play);
	sfSprite_setPosition(game->how_to.sprite_how_to, pos);
}

bool	create_help_button(sfVector2u window_size, game_t *game)
{
	sfIntRect area = AREA_HELP_BUTTON;
	sfVector2f pos= {((window_size.x / 2) - (27.5)), 20};
	const char *frames_button[] = {HELP_BUTTON_IDLE,
					HELP_BUTTON_HOVER,
					HELP_BUTTON_CLICKED};

	game->world.help_button = create_button(NULL, frames_button,
							&area, pos);
	create_how_to_play(game, window_size);
	if (game->world.help_button == NULL)
		return (ERROR);
	return (SUCCESS);
}
