/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** spell animation texture malloc
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "spell_fight.h"

static bool create_texture_spell_fight_below(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WIND_SPELL] =
	sfTexture_createFromFile(SPELL_WIND_PICTURE, NULL);
	if (!spell_fight->spell_fight_hero.texture_spell_fight_hero.
		texture_spell_fight_hero[TEXTURE_HERO_WIND_SPELL])
		return (1);
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_EARTH_SPELL] =
	sfTexture_createFromFile(SPELL_EARTH_PICTURE, NULL);
	if (!spell_fight->spell_fight_hero.texture_spell_fight_hero.
		texture_spell_fight_hero[TEXTURE_HERO_EARTH_SPELL])
		return (1);
	return (0);
}

bool create_texture_spell_fight(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_FIRE_SPELL] =
	sfTexture_createFromFile(SPELL_FIRE_PICTURE, NULL);
	if (!spell_fight->spell_fight_hero.texture_spell_fight_hero.
		texture_spell_fight_hero[TEXTURE_HERO_FIRE_SPELL])
		return (1);
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WATER_SPELL] =
	sfTexture_createFromFile(SPELL_WATER_PICTURE, NULL);
	if (!spell_fight->spell_fight_hero.texture_spell_fight_hero.
		texture_spell_fight_hero[TEXTURE_HERO_WATER_SPELL])
		return (1);
	if (create_texture_spell_fight_below(spell_fight) == 1)
		return (1);
	return (0);
}

static void set_texture_spell_fight_below(spell_fight_t *spell_fight)
{
	sfSprite_setTexture(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WIND_SPELL],
	spell_fight->
	spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero
	[TEXTURE_HERO_WIND_SPELL], sfTrue);
	sfSprite_setTexture(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_FIRE_SPELL],
	spell_fight->
	spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero
	[TEXTURE_HERO_FIRE_SPELL], sfTrue);
}

void set_texture_spell_fight(spell_fight_t *spell_fight)
{
	sfSprite_setTexture(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_EARTH_SPELL],
	spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero
	[TEXTURE_HERO_EARTH_SPELL], sfTrue);
	sfSprite_setTexture(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_WATER_SPELL],
	spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero
	[TEXTURE_HERO_WATER_SPELL], sfTrue);
	set_texture_spell_fight_below(spell_fight);
}
