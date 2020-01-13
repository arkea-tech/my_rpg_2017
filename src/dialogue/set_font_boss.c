/*
** EPITECH PROJECT, 2018
** set_font_boss.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

int init_font(struct_font *font)
{
	font->rpg_style = sfFont_createFromFile(\
	"ressources/img/dialogue_pics/lunchds.ttf");
	if (!font->rpg_style)
		return (84);
	font->rpg_style_chest = sfFont_createFromFile(\
	"ressources/img/dialogue_pics/A Goblin Appears!.otf");
	if (!font->rpg_style_chest)
		return (84);
	font->rpg_style_boss = sfFont_createFromFile(\
	"ressources/img/dialogue_pics/A Goblin Appears!.otf");
	if (!font->rpg_style_boss)
		return (84);
	return (0);
}

void set_font_boss(struct_font *font, char array[100], char const *array_next)
{
	font->text_boss = sfText_create();
	sfText_setFont(font->text_boss, font->rpg_style_boss);
	sfText_setString(font->text_boss, array);
	sfText_setCharacterSize(font->text_boss, 35);
	sfText_setColor(font->text_boss, sfRed);
	font->text_boss_down = sfText_create();
	sfText_setFont(font->text_boss_down, font->rpg_style_boss);
	sfText_setString(font->text_boss_down, array_next);
	sfText_setCharacterSize(font->text_boss_down, 30);
	sfText_setColor(font->text_boss_down, sfWhite);
}

void set_font_chest(struct_font *font, char const *array, sfColor color)
{
	font->text_chest = sfText_create();
	sfText_setFont(font->text_chest, font->rpg_style_chest);
	sfText_setString(font->text_chest, array);
	sfText_setCharacterSize(font->text_chest, 60);
	sfText_setColor(font->text_chest, color);
}

void set_font(struct_font *font, char array[100], char array_2[100])
{
	font->text = sfText_create();
	sfText_setFont(font->text, font->rpg_style);
	sfText_setString(font->text, array);
	sfText_setCharacterSize(font->text, 60);
	sfText_setColor(font->text, sfBlack);
	font->text_2 = sfText_create();
	sfText_setFont(font->text_2, font->rpg_style);
	sfText_setString(font->text_2, array_2);
	sfText_setCharacterSize(font->text_2, 80);
	sfText_setColor(font->text_2, sfWhite);
}

void set_font_pos_boss(struct_font *font)
{
	font->pos_text_boss.x = 350;
	font->pos_text_boss.y = 725;
	sfText_setPosition(font->text_boss, font->pos_text_boss);
	font->pos_text_boss_down.x = 300;
	font->pos_text_boss_down.y = 820;
	sfText_setPosition(font->text_boss_down, font->pos_text_boss_down);
}
