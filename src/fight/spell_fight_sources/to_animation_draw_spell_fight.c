/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animations draw
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static
void condition_rectangle_spell_fight_below_below(spell_fight_t *spell_fight)
{
	if (spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].
	left >= 950) {
		if (spell_fight->trigger_earth == 0)
			spell_fight->spell_fight_hero.
			rectangle_spell_fight_hero.
			rectangle_spell_fight_hero
			[RECTANGLE_HERO_EARTH_SPELL].left = 570;
		if (spell_fight->trigger_earth == 1) {
			spell_fight->spell_fight_hero.
			rectangle_spell_fight_hero.
			rectangle_spell_fight_hero
			[RECTANGLE_HERO_EARTH_SPELL].left = 0;
			spell_fight->trigger_earth = 0;
		}
	}
}

static
void condition_rectangle_spell_fight_below(spell_fight_t *spell_fight)
{
	if (spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].left >= 950) {
		if (spell_fight->trigger_fire == 0)
			spell_fight->spell_fight_hero.
			rectangle_spell_fight_hero.
			rectangle_spell_fight_hero
			[RECTANGLE_HERO_FIRE_SPELL].left = 570;
		if (spell_fight->trigger_fire == 1) {
			spell_fight->spell_fight_hero.
			rectangle_spell_fight_hero.
			rectangle_spell_fight_hero
			[RECTANGLE_HERO_FIRE_SPELL].left = 0;
			spell_fight->trigger_fire = 0;
		}
	}
	condition_rectangle_spell_fight_below_below(spell_fight);
}

static void condition_rectangle_spell_fight(spell_fight_t *spell_fight)
{
	if (spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
		rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].
		left >= 910)
		spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
		rectangle_spell_fight_hero
		[RECTANGLE_HERO_WATER_SPELL].left = 0;
	if (spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
		rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].
		left >= 950)
		spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
		rectangle_spell_fight_hero
		[RECTANGLE_HERO_WIND_SPELL].left = 0;
	condition_rectangle_spell_fight_below(spell_fight);
}

void set_rectangle_spell_fight_mode(spell_fight_t *spell_fight)
{
	set_rectangle_spell_fight(spell_fight);
	clock_get_spell_fight(spell_fight);
	condition_rectangle_spell_fight(spell_fight);
}

void move_rectangle_spell_fight(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL].left += 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL].left += 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL].left += 190;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL].left += 190;
}