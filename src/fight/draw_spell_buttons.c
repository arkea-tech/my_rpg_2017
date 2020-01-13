/*
** EPITECH PROJECT, 2018
** draw_spell_buttons.c
** File description:
** draw earth air fire and water
*/

#include "game.h"

void	draw_spell_buttons(sfRenderWindow *window, game_t *game)
{
	for (uint8_t i = 0;i < NB_SPELL;++i)
		display_button(window, game->fight.button_tab_spells[i]);
}
