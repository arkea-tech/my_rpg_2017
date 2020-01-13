/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** intro and outro text
*/

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

bool initialisation_texture_battle_intro_outro(texture_battle_t *texture_battle)
{
	texture_battle->texture_you_lost_battle =
	sfTexture_createFromFile(YOU_LOST_BATTLE, NULL);
	if (!texture_battle->texture_you_lost_battle)
		return (1);
	texture_battle->texture_you_won_battle =
	sfTexture_createFromFile(YOU_WON_BATTLE, NULL);
	if (!texture_battle->texture_you_won_battle)
		return (1);
	texture_battle->texture_lets_fight_battle =
	sfTexture_createFromFile(LETS_FIGHT_BATTLE, NULL);
	if (!texture_battle->texture_lets_fight_battle)
		return (1);
	return (0);
}

void set_texture_battle_intro_outro(texture_battle_t *texture_battle,
sprite_battle_t *sprite_battle)
{
	sfSprite_setTexture(sprite_battle->sprite_you_won_battle,
	texture_battle->texture_you_won_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_you_lost_battle,
	texture_battle->texture_you_lost_battle, sfTrue);
	sfSprite_setTexture(sprite_battle->sprite_lets_fight_battle,
	texture_battle->texture_lets_fight_battle, sfTrue);
}
