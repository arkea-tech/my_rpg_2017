/*
** EPITECH PROJECT, 2018
** draw_sprite_text_men.c
** File description:
** description
*/


#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_chest_red_after_winning(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_red, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_chest_white(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next < 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_chest_white, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
	if (next == 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy,
		NULL);
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_chest_red(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_red, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_chest_blue(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_blue, NULL);
		sfRenderWindow_drawText(window, font->text_chest, NULL);
	}
}

void draw_sprite_text_man_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0 || next == 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_woman_desert,
		NULL);
	if (next == 2 || next == 5)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy,
		NULL);
	if (next == 3 || next == 4)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_man_desert,
		NULL);
	if (next <= 5) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
