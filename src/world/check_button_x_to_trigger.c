/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** check if x has been trigger to then display the dialogues
*/

#include "game.h"

void set_pot_and_character_statistic(game_t *game)
{
	game->character.level = 5;
	game->character.health = 100;
	game->character.attack = 50;
	game->world.pot = 1;
}

void reset_dial_and_check_if_x_trigger(game_t *game,
	int nb_next, int nb_story_state)
{
	check_if_x_trigger(game);
	if (game->dialogue.next == nb_next && 
	game->dialogue.d_trigger == 0) {
		game->state.story_state = nb_story_state;
		game->dialogue.next = 0;
		game->dialogue.d_trigger = 1;
	}
}

void check_if_x_trigger(game_t *game)
{
	if (game->dialogue.b_trigger == 0) {
		game->dialogue.next = 0;
		game->dialogue.b_trigger++;
	}
}

void reset_dial_and_x_trigger(game_t *game)
{
	game->dialogue.next = 0;
	game->dialogue.b_trigger = 0;
	game->dialogue.b_trigger_a = 0;
	game->dialogue.d_trigger = 0;
}
