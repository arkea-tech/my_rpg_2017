/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static void initialisation_rectangle_spell_fight_below_below(spell_fight_t
*spell_fight)
{
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].
	left = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].
	top = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].
	width = 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].
	height = 180;
}

static void initialisation_rectangle_spell_fight_below(spell_fight_t
*spell_fight)
{
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].
	width = 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].
	height = 178;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].
	left = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].
	top = 200;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].
	width = 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].
	height = 178;
	initialisation_rectangle_spell_fight_below_below(spell_fight);
}

void initialisation_rectangle_spell_fight(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].
	left = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].
	top = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].
	width = 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].
	height = 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].
	left = 0;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].
	top = 390;
	initialisation_rectangle_spell_fight_below(spell_fight);
}

static void set_rectangle_spell_fight_below(spell_fight_t *spell_fight)
{
	sfSprite_setTextureRect(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_WIND_SPELL],
	spell_fight->
	spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero
	[RECTANGLE_HERO_WIND_SPELL]);
	sfSprite_setTextureRect(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_EARTH_SPELL],
	spell_fight->
	spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero
	[RECTANGLE_HERO_EARTH_SPELL]);
}

void set_rectangle_spell_fight(spell_fight_t *spell_fight)
{
	sfSprite_setTextureRect(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_WATER_SPELL],
	spell_fight->
	spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero
	[RECTANGLE_HERO_WATER_SPELL]);
	sfSprite_setTextureRect(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_FIRE_SPELL],
	spell_fight->
	spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero
	[RECTANGLE_HERO_FIRE_SPELL]);
	set_rectangle_spell_fight_below(spell_fight);
}
