/*
** EPITECH PROJECT, 2018
** test_story_forest.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_chest_blue(struct_font *font, int UNUSED(next))
{
	set_font_chest(font, "You learned two new attacks\n\n     RAIN OF HAIL\
and WAVE !", sfYellow);
	set_font_pos_chest(font);
}

void init_set_font_chest_green_element(struct_font *font, int UNUSED(next))
{
	set_font_chest(font, "             You earned the\n\n             NATU\
RE ELEMENT", sfWhite);
	set_font_pos_chest(font);
}

void init_set_font_chest_green(struct_font *font, int UNUSED(next))
{
	set_font_chest(font, "        You have found some\n\n      ROCKS, SLIN\
GSHOT and a\n\n           WOODEN SPEAR !", sfWhite);
	set_font_pos_chest(font);
}

void text_story_forest_spirit_won(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "We were right to bring you here!\nI am so happ\
y that we already have the first stone!\nKeep it preciously... \nIts value is \
infinite to us. ", "Spirit");
	if (next == 1)
		set_font(font, "Your trip does not end here!\nThe road is stil\
l long to bring back the balance\nof the elements.", "Spirit");
	if (next == 2)
		set_font(font, "The next stone you will have to take back by f\
orce\nis the fire stone, located into the desert.\nLet me help you to find the\
way...", "Spirit");
	if (next == 3)
		set_font(font, "Follow the signs that tell you the desert of t\
he\ncity of fire", "Spirit");
	if (next == 4)
		set_font(font, "The spirits of the desert will help you gettin\
g\ncloser to the monster.", "Spirit");
	if (next == 5)
		set_font(font, "Thank you and be careful.", "Spirit");
	set_font_pos(font);
}

void text_story_wind_spirit(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Oh you arrived so far, \
i can't believe it!", "Spirit");
	if (next == 1)
		set_font(font, "This is the last evil to beat,\nin \
order to have all the stones gathered.", "Spirit");
	if (next == 2)
		set_font(font, "But be careful, \
he is extremely strong !", "Spirit");
	if (next == 3)
		set_font(font, "May the force be with you.", "Spirit");
	set_font_pos(font);
}
