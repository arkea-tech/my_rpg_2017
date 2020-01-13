/*
** EPITECH PROJECT, 2018
** end_fight.c
** File description:
** end_fight
*/

#include "game.h"
#include "fight.h"
#include "fight_const.h"
#include "my_stdc.h"
#include "csfml_practical.h"

void check_enemy_lost(sfRenderWindow *window, game_t *game, bool *clock_start)
{
	if (*clock_start == true && game->fight.enemy_health <= 0) {
		if (CLOCK_TIME(game->fight.clock_end_fight) >
		MICROSECONDS(10)) {
			reset_enemy_lost(game, clock_start);
			sfClock_destroy(game->fight.clock_end_fight);
			*clock_start = false;
		}
		display_enemy_lost(window, game);
		game->world.battle_won++;
	}
}

void check_hero_lost(sfRenderWindow *window, game_t *game,
bool *clock_start)
{
	if (*clock_start == true && game->character.health <= 0) {
		if (CLOCK_TIME(game->fight.clock_end_fight) >
		MICROSECONDS(10)) {
			reset_player_lost(game, clock_start);
			sfClock_destroy(game->fight.clock_end_fight);
			*clock_start = false;
		}
		display_player_lost(window, game);
	}
}

bool is_end_fight(sfRenderWindow *window, game_t *game)
{
	static bool clock_start = false;

	if (clock_start == false
	&& (game->fight.enemy_health <= 0 || game->character.health <= 0)) {
		game->fight.clock_end_fight = sfClock_create();
		clock_start = true;
	} else {
		draw_sprite_hero_battle(window, game->fight.main_battle,
		    HERO_FIGHT);
		if (game->fight.attacking == 1)
			draw_attack_anim(window, game);
		check_hero_lost(window, game, &clock_start);
		check_enemy_lost(window, game, &clock_start);
		update_enemy_hp(game);
		update_player_hp(game);
	}
	if (clock_start)
		return (true);
	return (false);
}
