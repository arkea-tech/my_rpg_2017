/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** functions that fill the array of the structures
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

static void fill_array_texture_structure_hero(spell_fight_t *spell_fight)
{
	sfTexture *texture_spell_fight_hero_fire = NULL;
	sfTexture *texture_spell_fight_hero_water = NULL;
	sfTexture *texture_spell_fight_hero_wind = NULL;
	sfTexture *texture_spell_fight_hero_earth = NULL;

	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero = malloc(sizeof(sfTexture *) * 5);
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_FIRE_SPELL] =
	texture_spell_fight_hero_fire;
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WATER_SPELL] =
	texture_spell_fight_hero_water;
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WIND_SPELL] =
	texture_spell_fight_hero_wind;
	spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_EARTH_SPELL] =
	texture_spell_fight_hero_earth;
}

static void fill_array_sprite_structure_hero(spell_fight_t *spell_fight)
{
	sfSprite *sprite_spell_fight_hero_fire = NULL;
	sfSprite *sprite_spell_fight_hero_water = NULL;
	sfSprite *sprite_spell_fight_hero_wind = NULL;
	sfSprite *sprite_spell_fight_hero_earth = NULL;

	spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero = malloc(sizeof(sfSprite *) * 5);
	spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_FIRE_SPELL] =
	sprite_spell_fight_hero_fire;
	spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WATER_SPELL] =
	sprite_spell_fight_hero_water;
	spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WIND_SPELL] =
	sprite_spell_fight_hero_wind;
	spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_EARTH_SPELL] =
	sprite_spell_fight_hero_earth;
}

static void fill_array_position_structure_hero(spell_fight_t *spell_fight)
{
	sfVector2f position_spell_fight_hero_fire = {0, 0};
	sfVector2f position_spell_fight_hero_water = {0, 0};
	sfVector2f position_spell_fight_hero_wind = {0, 0};
	sfVector2f position_spell_fight_hero_earth = {0, 0};

	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero = malloc(sizeof(sfVector2f *) * 5);
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_FIRE_SPELL] =
	position_spell_fight_hero_fire;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WATER_SPELL] =
	position_spell_fight_hero_water;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_WIND_SPELL] =
	position_spell_fight_hero_wind;
	spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero[POSITION_HERO_EARTH_SPELL] =
	position_spell_fight_hero_earth;
}

static void fill_array_rectangle_structure_hero(spell_fight_t *spell_fight)
{
	sfIntRect rectangle_spell_fight_hero_fire = {0, 0, 0, 0};
	sfIntRect rectangle_spell_fight_hero_water = {0, 0, 0, 0};
	sfIntRect rectangle_spell_fight_hero_wind = {0, 0, 0, 0};
	sfIntRect rectangle_spell_fight_hero_earth = {0, 0, 0, 0};

	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero = malloc(sizeof(sfIntRect *) * 10);
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_FIRE_SPELL] =
	rectangle_spell_fight_hero_fire;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WATER_SPELL] =
	rectangle_spell_fight_hero_water;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_WIND_SPELL] =
	rectangle_spell_fight_hero_wind;
	spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero[RECTANGLE_HERO_EARTH_SPELL] =
	rectangle_spell_fight_hero_earth;
}

void fill_array_spell_fight(spell_fight_t *spell_fight)
{
	fill_array_texture_structure_hero(spell_fight);
	fill_array_sprite_structure_hero(spell_fight);
	fill_array_position_structure_hero(spell_fight);
	fill_array_rectangle_structure_hero(spell_fight);
}
