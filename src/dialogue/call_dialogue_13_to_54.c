/*
** EPITECH PROJECT, 2018
** call_dialogue_13_to_54.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

void call_dialogue_46_to_53(sfRenderWindow *win,
int next,
call_dia_t *di,
int number)
{
	if (number == 53)
		draw_sprite_text_chest_green(win, next, di->sprite, di->font);
	if (number == 52)
		draw_sprite_text_boss_forest_meet(win, next, di->sprite,
		di->font);
	if (number == 51)
		draw_sprite_text_spirit_forest(win, next, di->sprite, di->font);
	if (number == 50)
		draw_sprite_text_gugus_equipment_not_found(win, next,
		di->sprite, di->font);
	if (number == 49)
		draw_sprite_text_boss_volcano_meet(win, next, di->sprite,
		di->font);
	if (number == 48)
		draw_sprite_text_gugus_final(win, next, di->sprite, di->font);
	if (number == 47)
		draw_sprite_text_spirit_final(win, next, di->sprite, di->font);
	if (number == 46)
		draw_sprite_text_chest_white(win, next, di->sprite, di->font);
}

void call_dialogue_37_to_45(sfRenderWindow *win,
int nex,
call_dia_t *di,
int number)
{
	if (number == 45)
		draw_sprite_text_boss_sea_meet(win, nex, di->sprite, di->font);
	if (number == 44)
		draw_sprite_text_boss_sea_meet(win, nex, di->sprite, di->font);
	if (number == 43)
		draw_sprite_text_boss_wind_meet(win, nex, di->sprite, di->font);
	if (number == 42)
		draw_sprite_text_boss_wind_meet(win, nex, di->sprite, di->font);
	if (number == 41)
		draw_sprite_text_chest_white(win, nex, di->sprite, di->font);
	if (number == 40)
		draw_sprite_text_chest_potion_wind_first(win, nex, di->sprite,
		di->font);
	if (number == 39)
		draw_sprite_text_spirit_wind(win, nex, di->sprite, di->font);
	if (number == 38)
		draw_sprite_text_sub_8(win, nex, di->sprite, di->font);
	if (number == 37)
		draw_sprite_text_chest_blue(win, nex, di->sprite, di->font);
}

void call_dialogue_29_to_36(sfRenderWindow *win,
int next,
call_dia_t *di,
int number)
{
	if (number == 36)
		draw_sprite_text_boss_sea_meet(win, next, di->sprite, di->font);
	if (number == 35)
		draw_sprite_text_boss_sea_meet(win, next, di->sprite, di->font);
	if (number == 34)
		draw_sprite_text_boss_sea_meet(win, next, di->sprite, di->font);
	if (number == 33)
		draw_sprite_grandpa_sea_repeat_house(win, next, di->sprite,
		di->font);
	if (number == 32)
		draw_sprite_grandpa_sea_inside_house(win, next, di->sprite,
		di->font);
	if (number == 31)
		draw_sprite_grandpa_sea(win, next, di->sprite, di->font);
	if (number == 30)
		draw_sprite_text_chest_potion_sea_second(win, next, di->sprite,
		di->font);
	if (number == 29)
		draw_sprite_text_chest_potion_sea_first(win, next, di->sprite,
		di->font);
}

void call_dialogue_21_to_28(sfRenderWindow *win,
int ne,
call_dia_t *di,
int number)
{
	if (number == 28)
		draw_sprite_text_villager_sea(win, ne, di->sprite, di->font);
	if (number == 27)
		draw_sprite_text_spirit_sea(win, ne, di->sprite, di->font);
	if (number == 26)
		draw_sprite_text_spirit_fire_after_winning(win, ne,
		di->sprite, di->font);
	if (number == 25)
		draw_sprite_text_chest_red_after_winning(win, ne, di->sprite,
		di->font);
	if (number == 24)
		draw_sprite_text_boss_desert_win(win, ne, di->sprite, di->font);
	if (number == 23)
		draw_sprite_text_spirit_way_volcano(win, ne, di->sprite,
		di->font);
	if (number == 22)
		draw_sprite_text_spirit_desert_village(win, ne, di->sprite,
		di->font);
	if (number == 21)
		draw_sprite_text_man_desert(win, ne, di->sprite, di->font);
}

void call_dialogue_13_to_20(sfRenderWindow *win,
int next,
call_dia_t *di,
int number)
{
	if (number == 20)
		draw_sprite_text_boy_desert(win, next, di->sprite, di->font);
	if (number == 19)
		draw_sprite_text_lady_desert(win, next, di->sprite, di->font);
	if (number == 18)
		draw_sprite_text_old_lady_desert(win, next, di->sprite,
		di->font);
	if (number == 17)
		draw_sprite_text_spirit(win, next, di->sprite, di->font);
	if (number == 16)
		draw_sprite_text_gugus_equipment_found(win, next, di->sprite,
		di->font);
	if (number == 15)
		draw_sprite_text_boss_desert_loose(win, next, di->sprite,
		di->font);
	if (number == 14)
		draw_sprite_text_chest_potion_desert(win, next, di->sprite,
		di->font);
	if (number == 13)
		draw_sprite_text_chest_red(win, next, di->sprite, di->font);
}
