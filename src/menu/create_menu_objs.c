/*
** EPITECH PROJECT, 2018
** create_menu_objs.c
** File description:
** create_menu_objs
*/

#include "game.h"
#include "csfml_practical.h"
#include "my_stdc.h"

static bool	create_main_menu_buttons(button_t	***buttons,
					sfVector2u	window_size,
					sfIntRect	*area,
					sfVector2f	pos)
{
	const char	*paths_buttons[] = {	PATH_MENU_BUTTONS_IDLE,
						PATH_MENU_BUTTONS_HOVER,
						PATH_MENU_BUTTONS_CLICKED};

	(*buttons)[PLAY] = create_button("NEW GAME", paths_buttons, area, pos);
	pos.y = SUBTRACT_PERCENT(window_size.y, 55);
	(*buttons)[CONTINUE] = create_button("CONTINUE", paths_buttons, area,
									pos);
	pos.y = SUBTRACT_PERCENT(window_size.y, 40);
	(*buttons)[SETTINGS] = create_button("SETTINGS", paths_buttons, area,
									pos);
	pos.y = SUBTRACT_PERCENT(window_size.y, 25);
	(*buttons)[LEAVE] = create_button("LEAVE", paths_buttons, area, pos);
	(*buttons)[4] = NULL;
	if (!(*buttons)[PLAY] || !(*buttons)[CONTINUE] || !(*buttons)[SETTINGS]
	|| !(*buttons)[LEAVE])
		return (ERROR);
	return (SUCCESS);
}

static bool	create_menu_buttons(button_t ***buttons, sfVector2u window_size)
{
	sfIntRect	area = {122, 383, 311, 124};
	sfVector2f	pos = {	window_size.x / 2,
				SUBTRACT_PERCENT(window_size.y, 70)};

	*buttons = malloc(sizeof(button_t *) * 5);
	if (*buttons == NULL)
		return (ERROR);
	if (create_main_menu_buttons(buttons, window_size, &area, pos))
		return (ERROR);
	for (int i = 0 ; i < 4 ; ++i) {
		button_center_pos((*buttons)[i]);
		button_set_font_size((*buttons)[i], 32);
	}
	return (SUCCESS);
}

static bool	create_credit(menu_t *menu, sfVector2u window_size)
{
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 50),
				SUBTRACT_PERCENT(window_size.y, 12)};

	menu->credit = create_text(pos, CREDITS, 26);
	if (menu->credit == NULL)
		return (ERROR);
	text_set_center(menu->credit);
	return (SUCCESS);
}

static bool	create_game_name(menu_t *menu, sfVector2u window_size)
{
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 50),
				SUBTRACT_PERCENT(window_size.y, 82)};

	menu->game_name = create_text(pos, GAME_NAME, 60);
	if (menu->game_name == NULL)
		return (ERROR);
	text_set_center(menu->game_name);
	return (SUCCESS);
}

bool	create_menu_objs(sfRenderWindow *window, game_t *game)
{
	sfVector2u	window_size = sfRenderWindow_getSize(window);

	if (create_menu_buttons(&game->menu.menu_buttons, window_size)
	|| create_credit(&game->menu, window_size)
	|| create_game_name(&game->menu, window_size))
		return (ERROR);
	game->menu.clock_menu = sfClock_create();
	if (game->menu.clock_menu == NULL)
		return (ERROR);
	return (SUCCESS);
}
