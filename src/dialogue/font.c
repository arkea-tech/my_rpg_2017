/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** dialogue
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void set_font_pos_chest(struct_font *font)
{
	font->pos_text_chest.x = 200;
	font->pos_text_chest.y = 700;
	sfText_setPosition(font->text_chest, font->pos_text_chest);
}

void set_font_pos(struct_font *font)
{
	font->pos_text.x = 100;
	font->pos_text.y = 777;
	sfText_setPosition(font->text, font->pos_text);
	font->pos_text_2.x = 450;
	font->pos_text_2.y = 655;
	sfText_setPosition(font->text_2, font->pos_text_2);
}
