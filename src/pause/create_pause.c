/*
** EPITECH PROJECT, 2018
** create_pause.c
** File description:
** description
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static bool	create_bg_pause(sfVector2u window_size, game_t *game)
{
	sfVector2f	pos = {0, 0};
	sfIntRect	area = {0, 0, 480, 480};
	sfFloatRect	bounds;

	game->pause.frame = create_sprite_from_path(PATH_FRAME_PAUSE, &area,
									pos);
	if (game->pause.frame == NULL)
		return (ERROR);
	bounds = sfSprite_getLocalBounds(game->pause.frame);
	pos.x = window_size.x / 2 - bounds.width / 2;
	pos.y = window_size.y / 2 - bounds.height / 2;
	sfSprite_setPosition(game->pause.frame, pos);
	return (SUCCESS);
}

static bool	create_button_sound(	sfVector2u	window_size,
					button_t	**buttons,
					const char	*path_buttons[])
{
	create_sound_button(buttons, path_buttons, window_size);
	buttons[4] = NULL;
	return (SUCCESS);
}

static bool	create_buttons_pause(sfVector2u window_size, game_t *game)
{
	const char	*path_buttons[] = {	PATH_MENU_BUTTONS_IDLE,
						PATH_MENU_BUTTONS_HOVER,
						PATH_MENU_BUTTONS_CLICKED};
	sfIntRect	area = {568, 858, 330, 100};
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 50),
				SUBTRACT_PERCENT(window_size.y, 59)};

	game->pause.buttons = malloc(sizeof(button_t *) * 5);
	if (game->pause.buttons == NULL)
		return (ERROR);
	game->pause.buttons[RESUME] = create_button("MAIN MENU", path_buttons,
								&area, pos);
	button_center_pos(game->pause.buttons[RESUME]);
	pos.y = SUBTRACT_PERCENT(window_size.y, 41);
	game->pause.buttons[LEAVE_GAME] = create_button("LEAVE GAME",
							path_buttons,
							&area, pos);
	button_center_pos(game->pause.buttons[LEAVE_GAME]);
	create_button_sound(window_size, game->pause.buttons, path_buttons);
	return (SUCCESS);
}

bool	create_pause(sfVector2u window_size, game_t *game)
{
	if (create_bg_pause(window_size, game)
	|| create_buttons_pause(window_size, game))
		return (ERROR);
	return (SUCCESS);
}
