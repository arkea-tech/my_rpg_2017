/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** position of spells
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "csfml_practical.h"
#include "my_stdc.h"
#include "spell_fight.h"

static void set_position_fight_spell_hero_below(spell_fight_t *spell_fight)
{
	sfSprite_setPosition(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WIND_SPELL],
	spell_fight->
	spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_WIND_SPELL]);
	sfSprite_setPosition(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_EARTH_SPELL],
	spell_fight->
	spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_EARTH_SPELL]);
}

void set_position_fight_spell_hero(spell_fight_t *spell_fight)
{
	sfSprite_setPosition(spell_fight->
	spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_FIRE_SPELL],
	spell_fight->
	spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_FIRE_SPELL]);
	sfSprite_setPosition(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WATER_SPELL],
	spell_fight->
	spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_WATER_SPELL]);
	set_position_fight_spell_hero_below(spell_fight);
}

void move_position_fight_spell_boss(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WIND_SPELL].x += 10;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WATER_SPELL].x +=10;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_FIRE_SPELL].x += 10;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_EARTH_SPELL].x += 10;
	set_position_fight_spell_hero(spell_fight);
}

void move_position_fight_spell_hero(spell_fight_t *spell_fight)
{
	static int start = 0;

	if (CLOCK_TIME(spell_fight->spell_clock_end) < MICROSECONDS(25)) {
		start = 1;
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero[POSITION_HERO_WIND_SPELL].x -= 10;
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero[POSITION_HERO_WATER_SPELL].x -= 10;
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero[POSITION_HERO_FIRE_SPELL].x -= 10;
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero[POSITION_HERO_EARTH_SPELL].x -= 10;
		set_position_fight_spell_hero(spell_fight);
	} else if (start == 1) {
		start = 0;
		sfClock_destroy(spell_fight->spell_clock_end);
	}
}

void initialisation_position_fight_spell_hero(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_FIRE_SPELL].x = 50;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_FIRE_SPELL].y = 500;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WATER_SPELL].x = 50;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WATER_SPELL].y = 500;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WIND_SPELL].x = 50;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WIND_SPELL].y = 500;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_EARTH_SPELL].x = 50;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_EARTH_SPELL].y = 500;
}
