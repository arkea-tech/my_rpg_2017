/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** dialogue
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

void draw_sprite_text_sub_2(sfRenderWindow *window, int next,
struct_sprite *sprite)
{
	if (next == 0) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_grandma, NULL);
	}
	if (next < 1) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
	}
}

void draw_sprite_text_sub_1(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0 || next == 2 || next == 4)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy, NULL);
	if (next == 1 || next == 3)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_teenager, NULL);
	if (next < 5) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}

void draw_sprite_text(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font)
{
	if (next == 0 || next == 2)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_hero_boy, NULL);
	if (next == 1 || next == 3)
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_wizard, NULL);
	if (next < 4) {
		sfRenderWindow_drawSprite(window,
		sprite->dialogue_sprt_1, NULL);
		sfRenderWindow_drawText(window, font->text, NULL);
		sfRenderWindow_drawText(window, font->text_2, NULL);
	}
}
