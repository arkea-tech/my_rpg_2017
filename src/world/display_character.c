/*
** EPITECH PROJECT, 2018
** display_character.c
** File description:
** display a charcter
*/

#include "world.h"
#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"
#include "char_select.h"

bool	display_character(sfRenderWindow *window, game_t *game)
{
	if (game->character.gender == FEMALE)
		sfRenderWindow_drawSprite(window,
		game->world.char_fem_mini[CUR_ROT][CUR_POS], NULL);
	else if (game->character.gender == MALE)
		sfRenderWindow_drawSprite(window,
		game->world.char_male_mini[CUR_ROT][CUR_POS], NULL);
	return (SUCCESS);
}
