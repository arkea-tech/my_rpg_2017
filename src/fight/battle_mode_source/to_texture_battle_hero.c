/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** texture battle girl or boy
*/

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

bool initialisation_texture_battle_heroes(texture_battle_t *texture_battle,
short check)
{
	if (check == HERO_GIRL_BATTLE) {
		texture_battle->texture_girl_battle =
		sfTexture_createFromFile(CHARACTER_GIRL_BATTLE, NULL);
		if (!texture_battle->texture_girl_battle)
			return (1);
	}
	if (check == HERO_BOY_BATTLE) {
		texture_battle->texture_girl_battle =
		sfTexture_createFromFile(CHARACTER_BOY_BATTLE, NULL);
		if (!texture_battle->texture_girl_battle)
			return (1);
	}
	return (0);
}

void set_texture_battle_heroes(texture_battle_t *texture_battle,
sprite_battle_t *sprite_battle)
{
	sfSprite_setTexture(sprite_battle->sprite_girl_battle,
	texture_battle->texture_girl_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_girl_fight_battle,
	texture_battle->texture_girl_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_girl_won_battle,
	texture_battle->texture_girl_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_girl_lost_battle,
	texture_battle->texture_girl_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_girl_damage_battle,
	texture_battle->texture_girl_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_girl_dodge_battle,
	texture_battle->texture_girl_battle, sfTrue);
}
