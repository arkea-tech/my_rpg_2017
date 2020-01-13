/*
** EPITECH PROJECT, 2018
** draw_sprite_spirit.c
** File description:
** description
*/


#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_spirit_wind(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 3)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit_wind, NULL);
	if (next <= 3) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_spirit_forest(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit_forest, NULL);
	if (next <= 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_spirit_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 2)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit_sea, NULL);
	if (next <= 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1,
		NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_spirit_fire_after_winning(sfRenderWindow *window,
int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit, NULL);
	if (next <= 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_spirit_way_volcano(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 0)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit, NULL);
	if (next <= 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
