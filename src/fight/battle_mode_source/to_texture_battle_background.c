/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** texture functions
*/

#include <stdbool.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

bool initialisation_texture_battle_background(texture_battle_t *texture_battle)
{
	texture_battle->texture_water =
	sfTexture_createFromFile(WATER_BACKGROUND, NULL);
	if (!texture_battle->texture_water)
		return (1);
	texture_battle->texture_wind =
	sfTexture_createFromFile(WIND_BACKGROUND, NULL);
	if (!texture_battle->texture_wind)
		return (1);
	texture_battle->texture_fire =
	sfTexture_createFromFile(VOLCANO_BACKGROUND, NULL);
	if (!texture_battle->texture_fire)
		return (1);
	texture_battle->texture_nature =
	sfTexture_createFromFile(FOREST_BACKGROUND, NULL);
	if (!texture_battle->texture_nature)
		return (1);
	return (0);
}

void set_texture_battle_background(texture_battle_t *texture_battle,
sprite_battle_t *sprite_battle)
{
	sfSprite_setTexture(sprite_battle->sprite_fire,
	texture_battle->texture_fire, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_wind,
	texture_battle->texture_wind, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_water,
	texture_battle->texture_water,
	sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_nature,
	texture_battle->texture_nature, sfTrue);
}
