/*
** EPITECH PROJECT, 2018
** destroy_char_select.c
** File description:
** destroy_char_select
*/

#include "game.h"

void	destroy_char_select(game_t *game)
{
	sfSprite_destroy(game->select.bg);
	button_destroy(game->select.char_male);
	button_destroy(game->select.char_female);
	sfText_destroy(game->select.title);
	sfSprite_destroy(game->select.confirm_bg);
	button_destroy(game->select.new);
	button_destroy(game->select.back);
	sfSprite_destroy(game->select.face_f);
	sfSprite_destroy(game->select.face_m);
	sfText_destroy(game->select.confirm_text_m);
	sfText_destroy(game->select.confirm_text_f);
	sfText_destroy(game->select.confirm_text_w);
	sfText_destroy(game->select.confirm_text_final);
	button_destroy(game->select.return_b);
}
