/*
** EPITECH PROJECT, 2018
** create_menu_bg.c
** File description:
** create_menu_bg.c
*/

#include "menu.h"
#include "my_stdc.h"
#include "csfml_practical.h"

bool	create_menu_bg(game_t *game)
{
	sfIntRect	area = {0, 0, 3000, 3000};
	sfVector2f	pos = {0.0, 0.0};
	sfFloatRect	rect = {0, 0, 2300, 1400};
	sfView		*view_bg = sfView_createFromRect(rect);

	game->menu.bg = create_sprite_from_path(PATH_BG_MENU, &area, pos);
	if (game->menu.bg == NULL || view_bg == NULL)
		return (ERROR);
	game->menu.bg_view = view_bg;
	return (SUCCESS);
}
