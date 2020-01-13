/*
** EPITECH PROJECT, 2018
** battle_boss
** File description:
** description
*/

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

bool initialisation_texture_battle_boss(texture_battle_t *texture_battle)
{
	texture_battle->texture_boss_water =
	sfTexture_createFromFile(WATER_BOSS, NULL);
	if (!texture_battle->texture_boss_water)
		return (1);
	texture_battle->texture_boss_wind =
	sfTexture_createFromFile(WIND_BOSS, NULL);
	if (!texture_battle->texture_boss_wind)
		return (1);
	texture_battle->texture_boss_fire =
	sfTexture_createFromFile(VOLCANO_BOSS, NULL);
	if (!texture_battle->texture_boss_fire)
		return (1);
	texture_battle->texture_boss_nature =
	sfTexture_createFromFile(FOREST_BOSS, NULL);
	if (!texture_battle->texture_boss_nature)
		return (1);
	return (0);
}

void set_texture_battle_boss(texture_battle_t *texture_battle,
sprite_battle_t *sprite_battle)
{
	sfSprite_setTexture(sprite_battle->sprite_boss_fire,
	texture_battle->texture_boss_fire, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_boss_wind,
	texture_battle->texture_boss_wind, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_boss_water,
	texture_battle->texture_boss_water, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_boss_nature,
	texture_battle->texture_boss_nature, sfTrue);
}
