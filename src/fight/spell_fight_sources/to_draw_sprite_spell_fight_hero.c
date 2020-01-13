/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** draw sprite hero
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

void draw_sprite_fight_spell_earth_hero(sfRenderWindow *window,
spell_fight_t *spell_fight)
{
	sfRenderWindow_drawSprite(window,
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_EARTH_SPELL],
	NULL);
}

void draw_sprite_fight_spell_fire_hero(sfRenderWindow *window,
spell_fight_t *spell_fight)
{
	sfRenderWindow_drawSprite(window,
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_FIRE_SPELL],
	NULL);
}

void draw_sprite_fight_spell_wind_hero(sfRenderWindow *window,
spell_fight_t *spell_fight)
{
	sfRenderWindow_drawSprite(window,
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_WIND_SPELL],
	NULL);
}

void draw_sprite_fight_spell_water_hero(sfRenderWindow *window,
spell_fight_t *spell_fight)
{
	sfRenderWindow_drawSprite(window,
	spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero
	[SPRITE_HERO_WATER_SPELL],
	NULL);
}
