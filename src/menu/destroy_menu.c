/*
** EPITECH PROJECT, 2018
** destroy_menu.c
** File description:
** destroy_menu
*/

#include "game.h"

void	destroy_menu(game_t *game)
{
	buttons_destroy(&game->menu.menu_buttons);
	sfText_destroy(game->menu.credit);
	sfText_destroy(game->menu.game_name);
}
