/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animation sub functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void
initialisation_rectangle_characters_below_battle(rectangle_battle_t *rectangle)
{
	rectangle->rectangle_hero_girl_standing.left = 0;
	rectangle->rectangle_hero_girl_standing.top = 0;
	rectangle->rectangle_hero_girl_standing.width = 185;
	rectangle->rectangle_hero_girl_standing.height = 190;
	rectangle->rectangle_hero_girl_fight.left = 570;
	rectangle->rectangle_hero_girl_fight.top = 0;
	rectangle->rectangle_hero_girl_fight.width = 187;
	rectangle->rectangle_hero_girl_fight.height = 190;
	rectangle->rectangle_hero_girl_won.left = 1137;
	rectangle->rectangle_hero_girl_won.top = 190;
	rectangle->rectangle_hero_girl_won.width = 187;
	rectangle->rectangle_hero_girl_won.height = 190;
	rectangle->rectangle_hero_girl_lost.left = 1137;
	rectangle->rectangle_hero_girl_lost.top = 772;
	rectangle->rectangle_hero_girl_lost.width = 187;
	rectangle->rectangle_hero_girl_lost.height = 190;
	initialisation_rectangle_characters_below_below_battle(rectangle);
}

void animation_characters_below_battle(rectangle_battle_t *rectangle)
{
	if (rectangle->verify_damage != 1 &&
		rectangle->verify_trigger_damage == 1)
		rectangle->rectangle_hero_girl_damage.left =
		rectangle->rectangle_hero_girl_damage.left + 185;
	if (rectangle->verify_dodge != 1 &&
		rectangle->verify_trigger_dodge == 1)
		rectangle->rectangle_hero_girl_dodge.left =
		rectangle->rectangle_hero_girl_dodge.left + 185;
}

void animation_characters_intro_outro(rectangle_battle_t *rectangle)
{
	rectangle->rectangle_you_lost.left =
	rectangle->rectangle_you_lost.left + 800;
	rectangle->rectangle_you_won.left =
	rectangle->rectangle_you_won.left + 600;
}

void set_rectangle_characters_below_battle(rectangle_battle_t *rectangle,
sprite_battle_t *sprite_battle,
position_battle_t *position_battle)
{
	sfSprite_setTextureRect(sprite_battle->sprite_boss_wind,
	rectangle->rectangle_boss_wind);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_battle,
	rectangle->rectangle_hero_girl_standing);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_fight_battle,
	rectangle->rectangle_hero_girl_fight);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_won_battle,
	rectangle->rectangle_hero_girl_won);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_lost_battle,
	rectangle->rectangle_hero_girl_lost);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_damage_battle,
	rectangle->rectangle_hero_girl_damage);
	sfSprite_setTextureRect(sprite_battle->sprite_girl_dodge_battle,
	rectangle->rectangle_hero_girl_dodge);
	set_rectangle_characters_below_below_battle(rectangle,
	sprite_battle,
	position_battle);
}

int
condition_animation_characters_battle_below(rectangle_battle_t *rectangle,
position_battle_t *position_battle,
sprite_battle_t *sprite_battle)
{
	if (rectangle->rectangle_hero_girl_lost.left >= 1684 &&
	rectangle->verify == 0) {
		rectangle->rectangle_hero_girl_lost.left = 1137;
		rectangle->rectangle_hero_girl_lost.top = 572;
		position_battle->position_girl_lost_battle.y = 605;
		rectangle->verify = 1;
	}
	if (rectangle->rectangle_hero_girl_lost.left >= 1684 &&
	rectangle->verify == 1) {
		rectangle->rectangle_hero_girl_lost.left = 1137;
		rectangle->rectangle_hero_girl_lost.top = 772;
		position_battle->position_girl_lost_battle.y = 610;
		rectangle->verify = 2;
	}
	condition_animation_characters_battle_below_below(rectangle,
	position_battle,
	sprite_battle);
	return (0);
}
