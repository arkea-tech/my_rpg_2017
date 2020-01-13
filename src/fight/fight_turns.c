/*
** EPITECH PROJECT, 2018
** turns_fight.c
** File description:
** turns fight
*/

#include "game.h"
#include "fight.h"
#include "music.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static void new_turn(game_t *game, bool *start_turns, int *whos_turn)
{
	*start_turns = true;
	*whos_turn = PLAYER_TURN;
	sfClock_destroy(game->fight.cl_turns);
	game->fight.spell_fight.put_earth_boss = 0;
	game->fight.spell_fight.put_fire_boss = 0;
	game->fight.spell_fight.put_water_boss = 0;
	game->fight.spell_fight.put_wind_boss = 0;
}

static int get_right_spell(int chapter)
{
	switch (chapter) {
	case EARTH:
		return (HERO_SPELL_EARTH);
	case FIRE:
		return (HERO_SPELL_FIRE);
	case WATER:
		return (HERO_SPELL_WATER);
	case AIR:
		return (HERO_SPELL_WIND);
	}
	return (0);
}

static void boss_turn(sfRenderWindow *window,
game_t *game, bool *boss_rm_hp)
{
	int spell_type = get_right_spell(game->state.chapter);

	move_position_fight_spell_boss(&game->fight.spell_fight);
	draw_fight_spell_boss_conditions(window, &game->fight.spell_fight,
	spell_type);
	if (*boss_rm_hp == true && game->character.health > 0) {
		update_hp_after_beiing_hit_by_boss(game->state.chapter,
		&game->character.health);
		update_player_hp(game);
		*boss_rm_hp = false;
	}
}

static void fight_turn_conditions(sfRenderWindow *window,
game_t *game, bool *start_turns, int *whos_turn)
{
	static bool boss_rm_hp = false;

	switch (*whos_turn) {
		case PLAYER_TURN:
			if (CLOCK_TIME(game->fight.cl_turns)
			<= MICROSECONDS(20)) {
				handle_buttons_spell_clicks(window, game);
				update_enemy_hp(game);
			} else {
				*whos_turn = BOSS_TURN;
				boss_rm_hp = true;
			}
				break;
		case BOSS_TURN:
			if (CLOCK_TIME(game->fight.cl_turns)
			< MICROSECONDS(35))
				boss_turn(window, game, &boss_rm_hp);
			else
				new_turn(game, start_turns, whos_turn);
			break;
	}
}

void fight_turns(sfRenderWindow *window, game_t *game, unsigned int *turn_nb)
{
	static bool start_turns = true;
	static int whos_turn = PLAYER_TURN;

	fill_structure_only_one_time(game);
	verify_buttons_clicks_or_clocks_spell(game);
	if (start_turns) {
		if (game->fight.button_tab_spells[WATER]->state == CLICKED
		|| game->fight.button_tab_spells[AIR]->state == CLICKED
		|| game->fight.button_tab_spells[EARTH]->state == CLICKED
		|| game->fight.button_tab_spells[FIRE]->state == CLICKED) {
			game->fight.fight_cl_spells.clock_cl =
			game->fight.spell_fight.spell_fight_hero.
			clock_spell_fight.clock_spell_fight_second;
			game->fight.cl_turns = sfClock_create();
			game->fight.attacking = 1;
			start_turns = false;
			++(*turn_nb);
		}
	} else {
		fight_turn_conditions(window, game, &start_turns, &whos_turn);
	}
}