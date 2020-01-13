/*
** EPITECH PROJECT, 2018
** init_set_font_chest_color.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_boss_desert_loose(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "I knew you were weak...\n\nThis is not a \
suprise to me.");
	set_font_pos_boss(font);
}

void init_set_font_chest_red_after_winning(struct_font *font, int UNUSED(next))
{

	set_font_chest(font, "            You earned the\n\n              FIRE\
ELEMENT !", sfYellow);
	set_font_pos_chest(font);
}

void init_set_font_chest_white(struct_font *font, int next)
{
	if (next == 0)
		set_font_chest(font, "            You earned a\n\n          MA\
GIC PARCHMENT !", sfBlack);
	if (next == 1)
		set_font_chest(font, "           You learnt:\n\n TORNADO and G\
LACIAL WIND !", sfBlack);
	if (next == 2) {
		set_font(font, "I am now ready.\nI have enough strength to con\
tront anyone.", "Player");
		set_font_pos(font);
	}
	set_font_pos_chest(font);
}

void init_set_font_chest_red(struct_font *font, int UNUSED(next))
{

	set_font_chest(font, "            You earned an\n\nARROW and 10 BOWS O\
F FIRE !", sfYellow);
	set_font_pos_chest(font);
}

void init_set_font_chest_blue_victory(struct_font *font, int UNUSED(next))
{
	set_font_chest(font, "      You earned the\n\n    WATER ELEMENT !",
	sfYellow);
	set_font_pos_chest(font);
}
