/*
** EPITECH PROJECT, 2018
** init_set_font_boss_wind.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_boss_sea_win(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "This victory is only ephemeral.");
	set_font_pos_boss(font);
}

void init_set_font_boss_sea_meet(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "There you are. I could feel your presence\
from miles\n\naway. You killed two of my friends. I will not let you\n\nthe op\
portunity to have my stone. I hope you are\n\nready to die !");
	set_font_pos_boss(font);
}

void init_set_font_boss_desert_win(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "I can't believe...\n\nThis is happening..\
.");
	set_font_pos_boss(font);
}

void init_set_font_boss_wind_win(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "      How could you . . .");
	set_font_pos_boss(font);
}

void init_set_font_boss_wind_lost(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "      That was easy.");
	set_font_pos_boss(font);
}
