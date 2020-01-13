/*
** EPITECH PROJECT, 2018
** draw_sprite_chest.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_spirit_north_volcano(sfRenderWindow *window, int next,
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

void draw_sprite_text_spirit_desert_village(sfRenderWindow *window, int next,
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

void draw_sprite_text_spirit(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 4)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit, NULL);
	if (next <= 4) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_chest_green(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_green, NULL);
		sfRenderWindow_drawText(window, font->text_chest, NULL);
	}
}
