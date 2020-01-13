/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite battle_mode
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void set_sprite_battle_background(sprite_battle_t *sprite_battle)
{
	sprite_battle->sprite_water = sfSprite_create();
	sprite_battle->sprite_wind = sfSprite_create();
	sprite_battle->sprite_fire = sfSprite_create();
	sprite_battle->sprite_nature = sfSprite_create();
}

void draw_sprite_background_battle_below(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == BOSS_VOLCANO) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->sprite_fire, NULL);
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->sprite_boss_fire,
		NULL);
	}
	if (check == BOSS_FOREST) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->sprite_nature, NULL);
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->sprite_boss_nature,
		NULL);
	}
}

void draw_sprite_background_battle(sfRenderWindow *window,
main_battle_t *main_battle, short check)
{
	if (check == BOSS_WATER) {
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_water,
		NULL);
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_boss_water,
		NULL);
	}
	if (check == BOSS_WIND) {
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_wind, NULL);
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_boss_wind,
		NULL);
	}
	draw_sprite_background_battle_below(window, main_battle, check);
}
