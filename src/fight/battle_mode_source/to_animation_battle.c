/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animation of characters
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void initialisation_rectangle_characters_battle(rectangle_battle_t *rectangle)
{
	rectangle->rectangle_boss_forest.left = 0;
	rectangle->rectangle_boss_forest.top = 0;
	rectangle->rectangle_boss_forest.width = 600;
	rectangle->rectangle_boss_forest.height = 1796;
	rectangle->rectangle_boss_water.left = 0;
	rectangle->rectangle_boss_water.top = 0;
	rectangle->rectangle_boss_water.width = 600;
	rectangle->rectangle_boss_water.height = 600;
	rectangle->rectangle_boss_fire.left = 0;
	rectangle->rectangle_boss_fire.top = 0;
	rectangle->rectangle_boss_fire.width = 600;
	rectangle->rectangle_boss_fire.height = 1796;
	rectangle->rectangle_boss_wind.left = 0;
	rectangle->rectangle_boss_wind.top = 0;
	rectangle->rectangle_boss_wind.width = 600;
	rectangle->rectangle_boss_wind.height = 1796;
	initialisation_rectangle_characters_below_battle(rectangle);
}

void animation_characters_battle_boss_conditions(rectangle_battle_t *rectangle)
{
	if (rectangle->boss_animation_enable_disable ==
	BOSS_ANIMATION_ENABLE) {
		rectangle->rectangle_boss_forest.left =
		rectangle->rectangle_boss_forest.left + 600;
		rectangle->rectangle_boss_water.left =
		rectangle->rectangle_boss_water.left + 600;
		rectangle->rectangle_boss_fire.left =
		rectangle->rectangle_boss_fire.left + 600;
		rectangle->rectangle_boss_wind.left =
		rectangle->rectangle_boss_wind.left + 600;
		rectangle->rectangle_boss_wind.left =
		rectangle->rectangle_boss_wind.left + 600;
	}
}

void animation_characters_battle(rectangle_battle_t *rectangle)
{
	animation_characters_battle_boss_conditions(rectangle);

	rectangle->rectangle_hero_girl_standing.left =
	rectangle->rectangle_hero_girl_standing.left + 185;
	rectangle->rectangle_hero_girl_fight.left =
	rectangle->rectangle_hero_girl_fight.left + 187;
	rectangle->rectangle_hero_girl_won.left =
	rectangle->rectangle_hero_girl_won.left + 187;
	if (rectangle->verify != 2 && rectangle->verify_trigger_lost == 1)
		rectangle->rectangle_hero_girl_lost.left =
		rectangle->rectangle_hero_girl_lost.left + 187;
	animation_characters_below_battle(rectangle);
}

int condition_animation_characters_battle(rectangle_battle_t *rectangle,
position_battle_t *position_battle,
sprite_battle_t *sprite_battle)
{
	if (rectangle->rectangle_boss_forest.left >= 1796)
		rectangle->rectangle_boss_forest.left = 0;
	if (rectangle->rectangle_boss_water.left >= 1796)
		rectangle->rectangle_boss_water.left = 0;
	if (rectangle->rectangle_boss_fire.left >= 1796)
		rectangle->rectangle_boss_fire.left = 0;
	if (rectangle->rectangle_boss_wind.left >= 1796)
		rectangle->rectangle_boss_wind.left = 0;
	if (rectangle->rectangle_hero_girl_standing.left >= 555)
		rectangle->rectangle_hero_girl_standing.left = 0;
	if (rectangle->rectangle_hero_girl_fight.left >= 1110)
		rectangle->rectangle_hero_girl_fight.left = 0;
	if (rectangle->rectangle_hero_girl_won.left >= 1684)
		rectangle->rectangle_hero_girl_won.left = 1137;
	condition_animation_characters_battle_below(rectangle,
	position_battle,
	sprite_battle);
	return (0);
}

void set_rectangle_characters_battle(main_battle_t *main_battle)
{
	sfSprite_setTextureRect(main_battle->sprite_battle->sprite_boss_nature,
	main_battle->rectangle->rectangle_boss_forest);
	sfSprite_setTextureRect(main_battle->sprite_battle->sprite_boss_water,
	main_battle->rectangle->rectangle_boss_water);
	sfSprite_setTextureRect(main_battle->sprite_battle->sprite_boss_fire,
	main_battle->rectangle->rectangle_boss_fire);
	set_rectangle_characters_below_battle(main_battle->rectangle,
	main_battle->sprite_battle,
	main_battle->position_battle);
	clock_get_boss_battle(main_battle->clock_battle,
	main_battle->rectangle);
	condition_animation_characters_battle(main_battle->rectangle,
	main_battle->position_battle,
	main_battle->sprite_battle);
}
