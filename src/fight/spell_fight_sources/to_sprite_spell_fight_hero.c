/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite hero functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static
void
to_initialisation_array_function_pointer_spell_fight(spell_fight_t
*spell_fight)
{
	spell_fight->trigger_earth = 0;
	spell_fight->trigger_fire = 0;
	spell_fight->put_earth = 0;
	spell_fight->put_fire = 0;
	spell_fight->put_water = 0;
	spell_fight->put_wind = 0;
	spell_fight->put_earth_boss = 0;
	spell_fight->put_fire_boss = 0;
	spell_fight->put_water_boss = 0;
	spell_fight->put_wind_boss = 0;
	draw_sprite_fight_spell_hero[HERO_SPELL_WIND] =
	&draw_sprite_fight_spell_wind_hero;
	draw_sprite_fight_spell_hero[HERO_SPELL_WATER] =
	&draw_sprite_fight_spell_water_hero;
	draw_sprite_fight_spell_hero[HERO_SPELL_EARTH] =
	&draw_sprite_fight_spell_earth_hero;
	draw_sprite_fight_spell_hero[HERO_SPELL_FIRE] =
	&draw_sprite_fight_spell_fire_hero;
}

void create_fight_spell(spell_fight_t *spell_fight)
{
	to_initialisation_array_function_pointer_spell_fight(spell_fight);
	fill_array_spell_fight(spell_fight);
	create_sprite_fight_spell_hero(spell_fight);
	create_texture_spell_fight(spell_fight);
	set_texture_spell_fight(spell_fight);
	initialisation_position_fight_spell_hero(spell_fight);
	set_position_fight_spell_hero(spell_fight);
	initialisation_rectangle_spell_fight(spell_fight);
	clock_create_spell_fight(spell_fight);
}

void create_sprite_fight_spell_hero(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_EARTH_SPELL]
	= sfSprite_create();
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WATER_SPELL]
	= sfSprite_create();
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_FIRE_SPELL]
	= sfSprite_create();
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WIND_SPELL]
	= sfSprite_create();
}
