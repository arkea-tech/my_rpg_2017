/*
** EPITECH PROJECT, 2018
** draw_gugus.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_gugus_final(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next < 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_gugus_equipment_not_found(sfRenderWindow *window,
int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	if (next == 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	if (next < 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_gugus_equipment_found(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	if (next == 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	if (next == 2)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	if (next < 3) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_9(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	}
	if (next == 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy, NULL);
	}
	if (next >= 2 && next <= 9) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_magus, NULL);
	}
	if (next <= 9) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_sub_8(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1,
		NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
