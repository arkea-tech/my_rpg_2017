/*
** EPITECH PROJECT, 2018
** draw_sprite_sub.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_sub_7(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_woman, NULL);
	}
	if (next == 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_woman, NULL);
	}
	if (next < 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_6(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_man, NULL);
	}
	if (next < 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_5(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_teenager_girl, NULL);
	}
	if (next < 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_4(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_teenager_boy, NULL);
	}
	if (next < 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_3(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_grandpa, NULL);
	}
	if (next < 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
