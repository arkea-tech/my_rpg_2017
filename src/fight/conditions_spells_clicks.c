/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** conditions of spell fight mode
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

void	remove_health_to_boss(game_t *game,
int	boss_type,
int	damage_max,
int	damage_average)
{
	if (game->state.chapter == boss_type)
		game->fight.enemy_health -= damage_max;
	else
		game->fight.enemy_health -= damage_average;
	game->fight.enemy_health = NATURAL_NUMBER(game->fight.enemy_health);
}

static void conditions_effects_spell_clicks_below(game_t *game)
{
	if (game->fight.button_tab_spells[AIR]->state == CLICKED
	&& game->fight.enemy_health > 0 &&
	!(game->fight.fight_cl_spells.locked)) {
		game->fight.spell_fight.spell_clock_end = sfClock_create();
		remove_health_to_boss(game, AIR, 50, 25);
		game->fight.button_tab_spells[AIR]->state = IDLE;
		game->fight.fight_cl_spells.air_clicked = true;
		sfClock_restart(game->fight.fight_cl_spells.clock_cl);
	}
	if (game->fight.button_tab_spells[EARTH]->state == CLICKED
	&& game->fight.enemy_health > 0 &&
	!(game->fight.fight_cl_spells.locked)) {
		game->fight.spell_fight.spell_clock_end = sfClock_create();
		remove_health_to_boss(game, WATER, 50, 10);
		game->fight.button_tab_spells[EARTH]->state = IDLE;
		game->fight.fight_cl_spells.earth_clicked = true;
		sfClock_restart(game->fight.fight_cl_spells.clock_cl);
	}
}

void conditions_effects_spell_clicks(game_t *game)
{
	if (game->fight.button_tab_spells[WATER]->state == CLICKED
	&& game->fight.enemy_health > 0 &&
	!(game->fight.fight_cl_spells.locked)) {
		game->fight.spell_fight.spell_clock_end = sfClock_create();
		remove_health_to_boss(game, FIRE, 50, 10);
		game->fight.button_tab_spells[WATER]->state = IDLE;
		game->fight.fight_cl_spells.water_clicked = true;
		sfClock_restart(game->fight.fight_cl_spells.clock_cl);
	}
	if (game->fight.button_tab_spells[FIRE]->state == CLICKED
	&& game->fight.enemy_health > 0 &&
	!(game->fight.fight_cl_spells.locked)) {
		game->fight.spell_fight.spell_clock_end = sfClock_create();
		remove_health_to_boss(game, EARTH, 50, 10);
		game->fight.button_tab_spells[FIRE]->state = IDLE;
		game->fight.fight_cl_spells.fire_clicked = true;
		sfClock_restart(game->fight.fight_cl_spells.clock_cl);
	}
	conditions_effects_spell_clicks_below(game);
}

static void conditions_back_to_beginning_spell_clicks_below(game_t *game)
{
	if (game->fight.spell_fight.spell_fight_hero.
	position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_WATER_SPELL].x <= 600
	&& game->fight.fight_cl_spells.water_clicked) {
		game->fight.spell_fight.
		spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_WATER_SPELL].x = 1600;
	}
	if (game->fight.spell_fight.spell_fight_hero.
	position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_FIRE_SPELL].x <= 600
	&& game->fight.fight_cl_spells.fire_clicked) {
		game->fight.spell_fight.
		spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_FIRE_SPELL].x = 1600;
	}
}

void conditions_back_to_beginning_spell_clicks(game_t *game)
{
	condition_back_no_idea(game);
	if (game->fight.spell_fight.spell_fight_hero.
	position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_WIND_SPELL].x <= 600
	&& game->fight.fight_cl_spells.air_clicked) {
		game->fight.spell_fight.
		spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_WIND_SPELL].x = 1600;
	}
	conditions_back_to_beginning_spell_clicks_below(game);
}
