/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** draw functions below hero
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static void	draw_fight_no_idea(sfRenderWindow *window,
spell_fight_t	*spell_fight)
{
	if (spell_fight->put_earth == 0) {
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_EARTH_SPELL].x = 1600;
		spell_fight->put_earth = 1;
	}
	if (spell_fight->put_earth == 1 &&
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_EARTH_SPELL].x == -700) {
		spell_fight->spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_EARTH_SPELL].x = 1600;
	}
	(*draw_sprite_fight_spell_hero[HERO_SPELL_EARTH])
	(window, spell_fight);
	spell_fight->trigger_fire = 1;
	spell_fight->put_fire = 0;
	spell_fight->put_water = 0;
	spell_fight->put_wind = 0;
}

static
void
draw_fight_spell_hero_conditions_below_below_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	if (hero_spell_fight == HERO_SPELL_WIND) {
		if (spell_fight->put_wind == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_WIND_SPELL].x = 1600;
			spell_fight->put_wind = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_WIND])
		(window, spell_fight);
		spell_fight->trigger_fire = 1;
		spell_fight->trigger_earth = 1;
		spell_fight->put_earth = 0;
		spell_fight->put_fire = 0;
		spell_fight->put_water = 0;

	}
}

static
void draw_fight_spell_hero_conditions_below_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	if (hero_spell_fight == HERO_SPELL_WATER) {
		if (spell_fight->put_water == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_WATER_SPELL].x = 1600;
			spell_fight->put_water = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_WATER])
		(window, spell_fight);
		spell_fight->trigger_fire = 1;
		spell_fight->trigger_earth = 1;
		spell_fight->put_earth = 0;
		spell_fight->put_fire = 0;
		spell_fight->put_wind = 0;
	}
	draw_fight_spell_hero_conditions_below_below_below(window,
	spell_fight,
	hero_spell_fight);
}

static void draw_fight_spell_hero_conditions_below(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	if (hero_spell_fight == HERO_SPELL_FIRE) {
		if (spell_fight->put_fire == 0) {
			spell_fight->spell_fight_hero.position_spell_fight_hero.
			position_spell_fight_hero
			[POSITION_HERO_FIRE_SPELL].x = 1600;
			spell_fight->put_fire = 1;
		}
		(*draw_sprite_fight_spell_hero[HERO_SPELL_FIRE])
		(window, spell_fight);
		spell_fight->trigger_earth = 1;
		spell_fight->put_earth = 0;
		spell_fight->put_water = 0;
		spell_fight->put_wind = 0;
	}
	draw_fight_spell_hero_conditions_below_below(window,
	spell_fight,
	hero_spell_fight);
}

void draw_fight_spell_hero_conditions(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight)
{
	set_rectangle_spell_fight_mode(spell_fight);
	move_position_fight_spell_hero(spell_fight);
	if (hero_spell_fight == HERO_SPELL_EARTH)
		draw_fight_no_idea(window, spell_fight);
	draw_fight_spell_hero_conditions_below(window,
	spell_fight,
	hero_spell_fight);
}
