/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** display dialogue male
*/

#include "game.h"

void world_cond_earth_pos_match_male(sfRenderWindow *window, game_t *game)
{
	sfVector2f pos_m =
	game->world.dialogue_pos.position_character_mini_male;
	sfVector2f pos_f = game->world.dialogue_pos.position_character_mini_fem;

	if ((game->world.dialogue_pos.position_pnj_earth.x + 60
	>= pos_m.x && game->world.dialogue_pos.position_pnj_earth.y + 60
	>= pos_m.y && game->world.dialogue_pos.position_pnj_earth.y - 60
	<= pos_m.y && game->world.dialogue_pos.position_pnj_earth.x - 60
	<= pos_m.x && game->dialogue.d_trigger == 0) ||
	(game->world.dialogue_pos.position_pnj_earth.x + 60
	>= pos_f.x && game->world.dialogue_pos.position_pnj_earth.y + 60
	>= pos_f.y && game->world.dialogue_pos.position_pnj_earth.y - 60
	<= pos_f.y && game->world.dialogue_pos.position_pnj_earth.x - 60
	<= pos_f.x && game->dialogue.d_trigger == 0)) {
		reset_dial_and_check_if_x_trigger(game, 4, 1);
		display_dialogue(window, 1, game);
	} else
		reset_dial_and_x_trigger(game);
}

void world_cond_fire_pos_match_male(sfRenderWindow *window, game_t *game)
{
	sfVector2f pos_m =
	game->world.dialogue_pos.position_character_mini_male;
	sfVector2f pos_f = game->world.dialogue_pos.position_character_mini_fem;

	if ((game->world.dialogue_pos.position_pnj_fire.x + 60
	>= pos_m.x && game->world.dialogue_pos.position_pnj_fire.y + 60
	>= pos_m.y && game->world.dialogue_pos.position_pnj_fire.y - 60
	<= pos_m.y && game->world.dialogue_pos.position_pnj_fire.x - 60
	<= pos_m.x && game->dialogue.d_trigger == 0) ||
	(game->world.dialogue_pos.position_pnj_fire.x + 60
	>= pos_f.x && game->world.dialogue_pos.position_pnj_fire.y + 60
	>= pos_f.y && game->world.dialogue_pos.position_pnj_fire.y - 60
	<= pos_f.y && game->world.dialogue_pos.position_pnj_fire.x - 60
	<= pos_f.x && game->dialogue.d_trigger == 0)) {
		reset_dial_and_check_if_x_trigger(game, 4, 3);
		display_dialogue(window, 17, game);
	} else
		reset_dial_and_x_trigger(game);
}

void world_cond_water_pos_match_male(sfRenderWindow *window, game_t *game)
{
	sfVector2f pos_m =
	game->world.dialogue_pos.position_character_mini_male;
	sfVector2f pos_f = game->world.dialogue_pos.position_character_mini_fem;

	if ((game->world.dialogue_pos.position_pnj_water.x + 60
	>= pos_m.x && game->world.dialogue_pos.position_pnj_water.y + 60
	>= pos_m.y && game->world.dialogue_pos.position_pnj_water.y - 60
	<= pos_m.y && game->world.dialogue_pos.position_pnj_water.x - 60
	<= pos_m.x && game->dialogue.d_trigger == 0) ||
	(game->world.dialogue_pos.position_pnj_water.x + 60
	>= pos_f.x && game->world.dialogue_pos.position_pnj_water.y + 60
	>= pos_f.y && game->world.dialogue_pos.position_pnj_water.y - 60
	<= pos_f.y && game->world.dialogue_pos.position_pnj_water.x - 60
	<= pos_f.x && game->dialogue.d_trigger == 0)) {
		reset_dial_and_check_if_x_trigger(game, 3, 5);
		display_dialogue(window, 27, game);
	} else
		reset_dial_and_x_trigger(game);
}

void world_cond_air_pos_match_male(sfRenderWindow *window, game_t *game)
{
	sfVector2f pos_m =
	game->world.dialogue_pos.position_character_mini_male;
	sfVector2f pos_f = game->world.dialogue_pos.position_character_mini_fem;

	if ((game->world.dialogue_pos.position_pnj_air.x + 60
	>= pos_m.x && game->world.dialogue_pos.position_pnj_air.y + 60
	>= pos_m.y && game->world.dialogue_pos.position_pnj_air.y - 60
	<= pos_m.y && game->world.dialogue_pos.position_pnj_air.x - 60
	<= pos_m.x && game->dialogue.d_trigger == 0) ||
	(game->world.dialogue_pos.position_pnj_air.x + 60
	>= pos_f.x && game->world.dialogue_pos.position_pnj_air.y + 60
	>= pos_f.y && game->world.dialogue_pos.position_pnj_air.y - 60
	<= pos_f.y && game->world.dialogue_pos.position_pnj_air.x - 60
	<= pos_f.x && game->dialogue.d_trigger == 0)) {
		reset_dial_and_check_if_x_trigger(game, 3, 7);
		display_dialogue(window, 39, game);
	} else
		reset_dial_and_x_trigger(game);
}

void world_cond_chest_pos_match_male(sfRenderWindow *window, game_t *game)
{
	if ((game->world.dialogue_pos.position_chest.x - 60
	<= game->world.dialogue_pos.position_character_mini_male.x &&
	game->world.dialogue_pos.position_chest.y + 60
	>= game->world.dialogue_pos.position_character_mini_male.y &&
	game->world.dialogue_pos.position_chest.y - 60
	<= game->world.dialogue_pos.position_character_mini_male.y &&
	game->dialogue.dialogue_chest == true) ||
	(game->world.dialogue_pos.position_chest.x - 60
	<= game->world.dialogue_pos.position_character_mini_fem.x &&
	game->world.dialogue_pos.position_chest.y + 60
	>= game->world.dialogue_pos.position_character_mini_fem.y &&
	game->world.dialogue_pos.position_chest.y - 60
	<= game->world.dialogue_pos.position_character_mini_fem.y &&
	game->dialogue.dialogue_chest == true)) {
		game->dialogue.d_test = 3;
		display_dialogue(window, 40, game);
		set_pot_and_character_statistic(game);
	} else
		if (game->dialogue.d_test == 3)
			game->dialogue.dialogue_chest = false;
}
