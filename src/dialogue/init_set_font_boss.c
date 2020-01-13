/*
** EPITECH PROJECT, 2018
** init_set_font_boss.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_boss_wind_fighting(struct_font *font, int next)
{
	if (next == 0) {
		set_font_boss(font, "BOSS", B_DEFEAT);
	}
	if (next == 1) {
		set_font(font, "Oh no !", "Player");
		set_font_pos(font);
	}
	set_font_pos_boss(font);
}

void init_set_font_boss_wind_near_volcano(struct_font *font,
int next)
{
	if (next == 0)
		set_font_boss(font, "BOSS", "               Get back . . .");
	if (next == 1) {
		set_font_boss(font, "BOSS", "       \
leave before it's too late.");
	}
	if (next == 2) {
		set_font_boss(font, "BOSS", "              I warned you.");
	}
	set_font_pos_boss(font);
}

void init_set_font_boss_wind_near_forest(struct_font *font, int next)
{
	if (next == 0) {
		set_font_boss(font, "BOSS", "      \n        How dare you walk\
ing onto my lands...\n\nYou will not leave this place in one peace.");
	}
	if (next == 1) {
		set_font(font, "I am here to bring back the stone you stole fr\
om\nthe spirit to bring back the peace into the forest.", "Player");
		set_font_pos(font);
	}
	if (next == 2) {
		set_font_boss(font, "BOSS", "\n      Haha... Let me laugh.\n\n\
If you want to get the stone, you will have to kill\n\nme first.");
	}
	if (next == 3) {
		set_font_boss(font, "BOSS", "\n      Give your prayer, my frie\
nd !");
	}
	set_font_pos_boss(font);
}

void init_set_font_boss_wind_near_mountain(struct_font *font, int next)
{
	if (next == 0) {
		set_font_boss(font, "BOSS", "      \n         The order is not\
ready to be reinstated.\n\n\n                           THE CHAOS IS NEAR !");
	}
	if (next == 1) {
		set_font(font, "The balace of the elements must be restored !",
		"Player");
		set_font_pos(font);
	}
	set_font_pos_boss(font);
}

void init_set_font_boss_sea_loss(struct_font *font, int UNUSED(next))
{
	set_font_boss(font, "BOSS", "I can not believe you got here, you are s\
o weak.");
	set_font_pos_boss(font);
}
