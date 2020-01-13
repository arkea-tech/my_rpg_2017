/*
** EPITECH PROJECT, 2018
** end_fight_resets.c
** File description:
** end_fight_resets
*/

#include "game.h"
#include "fight.h"
#include "world.h"
#include "fight_const.h"
#include "my_stdc.h"
#include "csfml_practical.h"

sfVector2f get_player_pos(game_t *game)
{
	sfVector2f vector;

	if (game->character.gender == FEMALE)
		vector = sfSprite_getPosition(game->world.char_fem_mini[0][0]);
	else
		vector = sfSprite_getPosition(game->world.char_male_mini[0][0]);
	vector.y += 100;
	return (vector);
}

void display_enemy_lost(sfRenderWindow *window, game_t *game)
{
	draw_sprite_hero_battle(window, game->fight.main_battle,
	HERO_WON);
	draw_sprite_intro_outro_battle(window, game->fight.main_battle,
	YOU_WON);
}

void display_player_lost(sfRenderWindow *window, game_t *game)
{
	draw_sprite_hero_battle(window, game->fight.main_battle,
	HERO_LOST);
	draw_sprite_intro_outro_battle(window, game->fight.main_battle,
	YOU_LOST);
}

void reset_enemy_lost(game_t *game, bool *clock_start)
{
	sfVector2f char_pos = get_player_pos(game);

	set_pos_char(char_pos, &(game->world), game->character.gender);
	if (game->state.chapter < NB_BATTLE) {
		game->state.chapter++;
		game->state.story_state++;
	}
	game->id_screen = WORLD;
	game->fight.enemy_health = HP_MAX;
	game->character.health = HP_MAX;
	*clock_start = false;
}

void reset_player_lost(game_t *game, bool *clock_start)
{
	game->world.current_rotation = DOWN_W;
	set_char_pos_chapter(game->state.chapter,
				&game->world,
				game->character.gender);
	game->character.level = 1;
	game->character.attack = 0;
	game->character.dodge = 7;
	game->fight.enemy_health = HP_MAX;
	game->character.health = HP_MAX;
	game->id_screen = WORLD;
	*clock_start = false;
}
