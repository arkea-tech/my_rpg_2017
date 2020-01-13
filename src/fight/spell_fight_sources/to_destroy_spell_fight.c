/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite , texture etc destroy
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "spell_fight.h"

static void destroy_sprite_hero_spell_fight(spell_fight_t *spell_fight)
{
	sfSprite_destroy(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_FIRE_SPELL]);
	sfSprite_destroy(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WATER_SPELL]);
	sfSprite_destroy(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_WIND_SPELL]);
	sfSprite_destroy(spell_fight->spell_fight_hero.
	sprite_spell_fight_hero.
	sprite_spell_fight_hero[SPRITE_HERO_EARTH_SPELL]);
	sfClock_destroy(spell_fight->spell_fight_hero.clock_spell_fight.
	clock_spell_fight_first);
}

static void destroy_texture_hero_spell_fight(spell_fight_t *spell_fight)
{
	sfTexture_destroy(spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_FIRE_SPELL]);
	sfTexture_destroy(spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WATER_SPELL]);
	sfTexture_destroy(spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_WIND_SPELL]);
	sfTexture_destroy(spell_fight->spell_fight_hero.
	texture_spell_fight_hero.
	texture_spell_fight_hero[TEXTURE_HERO_EARTH_SPELL]);
}

void destroy_spell_fight(spell_fight_t *spell_fight)
{
	destroy_sprite_hero_spell_fight(spell_fight);
	destroy_texture_hero_spell_fight(spell_fight);
	free(spell_fight->spell_fight_hero.texture_spell_fight_hero.
	texture_spell_fight_hero);
	free(spell_fight->spell_fight_hero.sprite_spell_fight_hero.
	sprite_spell_fight_hero);
	free(spell_fight->spell_fight_hero.position_spell_fight_hero.
	position_spell_fight_hero);
	free(spell_fight->spell_fight_hero.rectangle_spell_fight_hero.
	rectangle_spell_fight_hero);

}
