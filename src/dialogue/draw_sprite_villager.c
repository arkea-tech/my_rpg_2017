/*
** EPITECH PROJECT, 2018
** draw_sprite_villager.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

static void	draw_sprite_we(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_grandpa_sea, NULL);
	if (next == 1 || next == 2)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy, NULL);
	if (next == 3)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_grandpa_sea, NULL);
	if (next == 7 || next == 8 || next == 10)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_grandpa_sea, NULL);
	if (next <= 8) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_grandpa_sea_inside_house(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	draw_sprite_we(window, next, sprite, font);
	if (next == 9) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_blue, NULL);
		sfRenderWindow_drawText(window, font->text_chest, NULL);
	}
	if (next == 10) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_grandpa_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 1)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy, NULL);
	if (next <= 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_villager_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 0)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_villager_sea, NULL);
	if (next <= 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_spirit_forest_won(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 5)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprite_spirit_forest, NULL);
	if (next <= 5) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
