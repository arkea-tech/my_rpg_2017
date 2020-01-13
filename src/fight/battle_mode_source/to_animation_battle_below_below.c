/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animations below below
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void set_rectangle_boss_animation_battle(main_battle_t *main_battle,
const int boss_animation)
{
	set_rectangle_characters_battle(main_battle);
	main_battle->rectangle->boss_animation_enable_disable = boss_animation;
}

void
initialisation_rectangle_characters_below_below_battle(rectangle_battle_t
*rectangle)
{
	rectangle->rectangle_hero_girl_damage.left = 15;
	rectangle->rectangle_hero_girl_damage.top = 758;
	rectangle->rectangle_hero_girl_damage.width = 185;
	rectangle->rectangle_hero_girl_damage.height = 186;
	rectangle->rectangle_hero_girl_dodge.left = 1150;
	rectangle->rectangle_hero_girl_dodge.top = 0;
	rectangle->rectangle_hero_girl_dodge.width = 185;
	rectangle->rectangle_hero_girl_dodge.height = 190;
	rectangle->rectangle_you_lost.height = 188;
	rectangle->rectangle_you_lost.left = 0;
	rectangle->rectangle_you_lost.top = 0;
	rectangle->rectangle_you_lost.width = 800;
	rectangle->rectangle_you_lost.height = 510;
	rectangle->rectangle_you_lost.height = 560;
	rectangle->rectangle_you_won.left = 0;
	rectangle->rectangle_you_won.top = 0;
	rectangle->rectangle_you_won.width = 600;
	rectangle->rectangle_you_won.height = 820;
}

void set_rectangle_characters_below_below_battle(rectangle_battle_t *rectangle,
sprite_battle_t *sprite_battle,
position_battle_t
*position_battle)
{
	sfSprite_setTextureRect(sprite_battle->sprite_you_lost_battle,
	rectangle->rectangle_you_lost);
	sfSprite_setTextureRect(sprite_battle->sprite_you_won_battle,
	rectangle->rectangle_you_won);
	if (sprite_battle->verify_lets_fight == 1)
		sfSprite_move(sprite_battle->
		sprite_lets_fight_battle,
		position_battle->position_lets_fight_move_battle);
}

void
condition_animation_characters_battle_below_below(rectangle_battle_t *rectangle,
position_battle_t
*position_battle,
sprite_battle_t
*sprite_battle)
{
	sfSprite_setPosition(sprite_battle->sprite_girl_lost_battle,
	position_battle->position_girl_lost_battle);
	if (rectangle->rectangle_hero_girl_damage.left >= 1110) {
		rectangle->rectangle_hero_girl_damage.left = 945;
		rectangle->verify_damage = 1;
	}
	if (rectangle->rectangle_hero_girl_dodge.left >= 1705) {
		rectangle->rectangle_hero_girl_dodge.left = 1150;
		rectangle->verify_dodge = 1;
	}
	if (rectangle->rectangle_you_lost.left >= 3200
		&& rectangle->verify_lost == 0)
		rectangle->rectangle_you_lost.left = 0;
	if (rectangle->rectangle_you_won.left >= 1800) {
		rectangle->rectangle_you_won.left = 0;
	}
}
