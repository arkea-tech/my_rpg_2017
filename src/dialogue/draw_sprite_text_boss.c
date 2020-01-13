/*
** EPITECH PROJECT, 2018
** draw_sprite_text_boss.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_boss_volcano_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next <= 2) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_boss, NULL);
		sfRenderWindow_drawText(window, font->text_boss, NULL);
		sfRenderWindow_drawText(window,
		font->text_boss_down, NULL);
	}
}

void draw_sprite_text_boss_forest_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0 || next == 2 || next == 3) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_boss, NULL);
		sfRenderWindow_drawText(window, font->text_boss, NULL);
		sfRenderWindow_drawText(window,
		font->text_boss_down, NULL);
	}
	if (next == 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy,
		NULL);
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_boss_wind_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_boss, NULL);
		sfRenderWindow_drawText(window, font->text_boss, NULL);
		sfRenderWindow_drawText(window,
		font->text_boss_down, NULL);
	}
	if (next == 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy,
		NULL);
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text_boss_sea_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_boss, NULL);
		sfRenderWindow_drawText(window, font->text_boss, NULL);
		sfRenderWindow_drawText(window,
		font->text_boss_down, NULL);
	}
}

void draw_sprite_text_boss_desert_loose(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_boss, NULL);
		sfRenderWindow_drawText(window, font->text_boss, NULL);
		sfRenderWindow_drawText(window,
		font->text_boss_down, NULL);
	}
}
