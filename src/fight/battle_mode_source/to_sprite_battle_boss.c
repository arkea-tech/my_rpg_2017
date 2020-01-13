/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite boss
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void set_sprite_battle_boss(sprite_battle_t *sprite_battle)
{
	sprite_battle->sprite_boss_water = sfSprite_create();
	sprite_battle->sprite_boss_wind = sfSprite_create();
	sprite_battle->sprite_boss_fire = sfSprite_create();
	sprite_battle->sprite_boss_nature = sfSprite_create();
}

void initialisation_position_boss(position_battle_t *position_battle)
{
	position_battle->position_boss_water.x = 50;
	position_battle->position_boss_water.y = 250;
	position_battle->position_boss_wind.x = 50;
	position_battle->position_boss_wind.y = 250;
	position_battle->position_boss_fire.x = 50;
	position_battle->position_boss_fire.y = 250;
	position_battle->position_boss_nature.x = 50;
	position_battle->position_boss_nature.y = 250;
}

void set_position_battle_boss(position_battle_t *sprite_battle_position,
sprite_battle_t *sprite_battle)
{
	sfSprite_setPosition(sprite_battle->sprite_boss_water,
	sprite_battle_position->position_boss_water);
	sfSprite_setPosition(sprite_battle->sprite_boss_wind,
	sprite_battle_position->position_boss_wind);
	sfSprite_setPosition(sprite_battle->sprite_boss_fire,
	sprite_battle_position->position_boss_fire);
	sfSprite_setPosition(sprite_battle->sprite_boss_nature,
	sprite_battle_position->position_boss_nature);
}
