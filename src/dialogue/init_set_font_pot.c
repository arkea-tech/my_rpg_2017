/*
** EPITECH PROJECT, 2018
** init_set_font_pot.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_potion_wind_first(struct_font *font)
{
	set_font_chest(font, DIA_MYST_POT, sfBlack);
	set_font_pos_chest(font);
}

void init_set_font_potion_sea_first(struct_font *font)
{
	set_font_chest(font, DIA_HEAL_POT, sfBlack);
	set_font_pos_chest(font);
}

void init_set_font_potion_sea_second(struct_font *font)
{
	set_font_chest(font, DIA_H_D_POT, sfBlack);
	set_font_pos_chest(font);
}

void init_set_font_potion_desert(struct_font *font)
{
	set_font_chest(font, DIA_H_M_POT, sfBlack);
	set_font_pos_chest(font);
}

void init_set_font_wind_chest_won(struct_font *font)
{
	set_font_chest(font, W_ELEM, sfBlack);
	set_font_pos_chest(font);
}
