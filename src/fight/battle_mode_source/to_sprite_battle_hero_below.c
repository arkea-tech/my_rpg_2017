/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite below function
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void draw_sprite_hero_battle_below_below(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == HERO_DODGE) {
		main_battle->rectangle->verify_trigger_dodge = 1;
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_girl_dodge_battle,
		NULL);
		main_battle->rectangle->verify = 0;
		main_battle->rectangle->verify_damage = 0;
	}
	if (check == HERO_DAMAGE) {
		main_battle->rectangle->verify_trigger_damage = 1;
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_girl_damage_battle,
		NULL);
		main_battle->rectangle->verify = 0;
		main_battle->rectangle->verify_dodge = 0;
	}
}

void draw_sprite_hero_battle_below(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == HERO_WON) {
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_girl_won_battle,
		NULL);
		main_battle->rectangle->verify = 0;
		main_battle->rectangle->verify_dodge = 0;
		main_battle->rectangle->verify_damage = 0;
	}
	if (check == HERO_LOST) {
		main_battle->rectangle->verify_trigger_lost = 1;
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_girl_lost_battle,
		NULL);
		main_battle->rectangle->verify_dodge = 0;
		main_battle->rectangle->verify_damage = 0;
	}
	draw_sprite_hero_battle_below_below(window, main_battle, check);
}
