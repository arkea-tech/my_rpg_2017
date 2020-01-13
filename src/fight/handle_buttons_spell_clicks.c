/*
** EPITECH PROJECT, 2018
** handle_buttons_spell_clicks.c
** File description:
** handle_buttons spell clicks
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

void verify_buttons_clicks_or_clocks_spell(game_t *game)
{
	if (game->fight.fight_cl_spells.earth_clicked
		|| game->fight.fight_cl_spells.air_clicked
		|| game->fight.fight_cl_spells.water_clicked
		|| game->fight.fight_cl_spells.fire_clicked)
		game->fight.fight_cl_spells.locked = true;
	else
		game->fight.fight_cl_spells.locked = false;
	if (CLOCK_TIME(game->fight.fight_cl_spells.clock_cl) >= 2000000) {
		game->fight.fight_cl_spells.water_clicked = false;
		game->fight.fight_cl_spells.air_clicked = false;
		game->fight.fight_cl_spells.fire_clicked = false;
		game->fight.fight_cl_spells.earth_clicked = false;
	}
}

void fill_structure_only_one_time(game_t *game)
{
	static bool only_one_time = true;

	if (only_one_time == true) {
		game->fight.fight_cl_spells.earth_clicked = false;
		game->fight.fight_cl_spells.air_clicked = false;
		game->fight.fight_cl_spells.water_clicked = false;
		game->fight.fight_cl_spells.fire_clicked = false;
		game->fight.fight_cl_spells.locked = false;
		game->fight.fight_cl_spells.clock_cl =
		game->fight.spell_fight.spell_fight_hero.
		clock_spell_fight.clock_spell_fight_second;
		only_one_time = false;
	}
}

void display_by_conditions_spell(sfRenderWindow	*window,
game_t *game)
{
	if (game->fight.fight_cl_spells.water_clicked)
		draw_fight_spell_hero_conditions(window,
		&(game->fight.spell_fight),
		HERO_SPELL_WATER);
	else if (game->fight.fight_cl_spells.fire_clicked)
		draw_fight_spell_hero_conditions(window,
		&(game->fight.spell_fight),
		HERO_SPELL_FIRE);
	else if (game->fight.fight_cl_spells.air_clicked)
		draw_fight_spell_hero_conditions(window,
		&(game->fight.spell_fight),
		HERO_SPELL_WIND);
	else if (game->fight.fight_cl_spells.earth_clicked)
		draw_fight_spell_hero_conditions(window,
		&(game->fight.spell_fight),
		HERO_SPELL_EARTH);
}

uint8_t	handle_buttons_spell_clicks(sfRenderWindow *window,
game_t *game)
{
	fill_structure_only_one_time(game);
	verify_buttons_clicks_or_clocks_spell(game);
	conditions_effects_spell_clicks(game);
	conditions_back_to_beginning_spell_clicks(game);
	display_by_conditions_spell(window, game);
	return (SUCCESS);
}