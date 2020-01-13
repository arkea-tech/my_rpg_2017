/*
** EPITECH PROJECT, 2018
** call_dialogue_init_15_to_54.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

void call_dialogue_init_45_to_54(int number,
struct_font *font,
int next)
{
	if (number == 54)
		text_story_forest_spirit_won(font, next);
	if (number == 53)
		init_set_font_chest_green_element(font, next);
	if (number == 52)
		init_set_font_boss_wind_near_forest(font, next);
	if (number == 51)
		text_story_spirit_forest(font, next);
	if (number == 50)
		text_story_magus_equipment_not_found(font, next);
	if (number == 49)
		init_set_font_boss_wind_near_volcano(font, next);
	if (number == 48)
		text_story_magus_final(font, next);
	if (number == 47)
		text_story_spirit_final(font, next);
	if (number == 46)
		init_set_font_wind_chest_won(font);
	if (number == 45)
		init_set_font_boss_wind_lost(font, next);
}

void call_dialogue_init_35_to_44(int number,
struct_font *font,
int next)
{
	if (number == 44)
		init_set_font_boss_wind_win(font, next);
	if (number == 43)
		init_set_font_boss_wind_fighting(font, next);
	if (number == 42)
		init_set_font_boss_wind_near_mountain(font, next);
	if (number == 41)
		init_set_font_chest_white(font, next);
	if (number == 40)
		init_set_font_potion_wind_first(font);
	if (number == 39)
		text_story_wind_spirit(font, next);
	if (number == 38)
		text_story_spirit_sea_win(font, next);
	if (number == 37)
		init_set_font_chest_blue_victory(font, next);
	if (number == 36)
		init_set_font_boss_sea_loss(font, next);
	if (number == 35)
		init_set_font_boss_sea_win(font, next);

}

void call_dialogue_init_25_to_34(int number,
struct_font *font,
int next)
{
	if (number == 34)
		init_set_font_boss_sea_meet(font, next);
	if (number == 33)
		text_story_grandpa_sea_house_repeat(font, next);
	if (number == 32)
		text_story_grandpa_sea_inside_house(font, next);
	if (number == 31)
		text_story_grandpa_sea(font, next);
	if (number == 30)
		init_set_font_potion_sea_second(font);
	if (number == 29)
		init_set_font_potion_sea_first(font);
	if (number == 28)
		text_story_villager_sea(font, next);
	if (number == 27)
		text_story_spirit_sea(font, next);
	if (number == 26)
		text_story_spirit_fire_after_winning(font, next);
	if (number == 25)
		init_set_font_chest_red_after_winning(font, next);
}

void call_dialogue_init_15_to_24(int number,
struct_font *font,
int next)
{
	if (number == 24)
		init_set_font_boss_desert_win(font, next);
	if (number == 23)
		text_story_spirit_way_volcano(font, next);
	if (number == 22)
		text_story_spirit_desert_village(font, next);
	if (number == 21)
		text_story_desert_man(font, next);
	if (number == 20)
		text_story_desert_boy(font, next);
	if (number == 19)
		text_story_desert_lady(font, next);
	if (number == 18)
		text_story_desert_old_lady(font, next);
	if (number == 17)
		text_story_first_spirit(font, next);
	if (number == 16)
		text_story_magus_equipment_found(font, next);
	if (number == 15)
		init_set_font_boss_desert_loose(font, next);
}

void call_dialogue_init_6_to_14(int number,
struct_font *font,
int next)
{
	if (number == 14)
		init_set_font_potion_desert(font);
	if (number == 13)
		init_set_font_chest_red(font, next);
	if (number == 12)
		init_set_font_chest_blue(font, next);
	if (number == 11)
		init_set_font_chest_green(font, next);
	if (number == 10)
		init_set_font_sub_10(font, next);
	if (number == 9)
		init_set_font_sub_9(font, next);
	if (number == 8)
		init_set_font_sub_8(font, next);
	if (number == 7)
		init_set_font_sub_7(font, next);
	if (number == 6)
		init_set_font_sub_6(font, next);
}
