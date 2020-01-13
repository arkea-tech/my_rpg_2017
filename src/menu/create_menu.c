/*
** EPITECH PROJECT, 2018
** create_menu.c
** File description:
** create_menu (alloc)
*/

#include "menu.h"
#include "game.h"
#include "my_stdc.h"

bool	create_menu(sfRenderWindow *window, game_t *game)
{
	if (create_menu_bg(game))
		return (ERROR);
	else if (create_menu_objs(window, game))
		return (ERROR);
	return (SUCCESS);
}
