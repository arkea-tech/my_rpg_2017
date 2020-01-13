/*
** EPITECH PROJECT, 2018
** draw_sprite_text_chest.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_chest_potion_wind_first(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_potion, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_chest_potion_sea_first(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_potion, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_chest_potion_sea_second(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_potion, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_chest_potion_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_chest_potion, NULL);
		sfRenderWindow_drawText(window,
		font->text_chest, NULL);
	}
}

void draw_sprite_text_boss_desert_win(sfRenderWindow *window, int next,
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
