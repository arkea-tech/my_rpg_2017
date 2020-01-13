/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** boss draw
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static
void
draw_fight_spell_boss_conditions_below_below_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	if (hero_spell_fight == HERO_SPELL_WIND) {
		if (spell_fight->put_wind_boss == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_WIND_SPELL].x = 200;
			spell_fight->put_wind_boss = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_WIND])
		(window, spell_fight);
		spell_fight->trigger_earth = 1;
		spell_fight->trigger_fire = 1;
		spell_fight->put_earth_boss = 0;
		spell_fight->put_fire_boss = 0;
		spell_fight->put_water_boss = 0;
	}

}

static
void draw_fight_spell_boss_conditions_below_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{

	if (hero_spell_fight == HERO_SPELL_WATER) {
		if (spell_fight->put_water_boss == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_WATER_SPELL].x = 200;
			spell_fight->put_water_boss = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_WATER])
		(window, spell_fight);
		spell_fight->trigger_earth = 1;
		spell_fight->trigger_fire = 1;
		spell_fight->put_earth_boss = 0;
		spell_fight->put_fire_boss = 0;
		spell_fight->put_wind_boss = 0;
	}
	draw_fight_spell_boss_conditions_below_below_below(window,
	spell_fight,
	hero_spell_fight);
}

static void draw_fight_spell_boss_conditions_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{

	if (hero_spell_fight == HERO_SPELL_FIRE) {
		if (spell_fight->put_fire_boss == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_FIRE_SPELL].x = 200;
			spell_fight->put_fire_boss = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_FIRE])
		(window, spell_fight);
		spell_fight->trigger_earth = 1;
		spell_fight->put_earth_boss = 0;
		spell_fight->put_water_boss = 0;
		spell_fight->put_wind_boss = 0;
	}
	draw_fight_spell_boss_conditions_below_below(window,
	spell_fight,
	hero_spell_fight);
}

void draw_fight_spell_boss_conditions(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	set_rectangle_spell_fight_mode(spell_fight);
	move_position_fight_spell_boss(spell_fight);
	if (hero_spell_fight == HERO_SPELL_EARTH) {
		if (spell_fight->put_earth_boss == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_EARTH_SPELL].x = 200;
			spell_fight->put_earth_boss = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_EARTH])
		(window, spell_fight);
		spell_fight->put_fire_boss = 0;
		spell_fight->trigger_fire = 1;
		spell_fight->put_water_boss = 0;
		spell_fight->put_wind_boss = 0;
	}
	draw_fight_spell_boss_conditions_below(window,
	spell_fight,
	hero_spell_fight);
}
