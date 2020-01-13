/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** display dialogue according to positions of PNJ
*/

#include "game.h"

static
void
world_dialogue_display_pos_match_male_below(sfRenderWindow *window,
game_t *game)
{
	if (game->state.story_state >= 6
	&& game->state.story_state <= 7
	&& game->dialogue.b_trigger_a == 1)
		world_cond_air_pos_match_male(window, game);
	if ((game->world.dialogue_pos.position_chest.x + 60
	>= game->world.dialogue_pos.position_character_mini_male.x) ||
	(game->world.dialogue_pos.position_chest.x + 60
	>= game->world.dialogue_pos.position_character_mini_fem.x
	&& game->state.story_state == 0))
		world_cond_chest_pos_match_male(window, game);
}

void world_dialogue_display_pos_match_male(sfRenderWindow *window,
game_t *game)
{
	if (game->state.story_state <= 1 &&
	game->dialogue.b_trigger_a == 1)
		world_cond_earth_pos_match_male(window, game);
	if (game->state.story_state >= 2
	&& game->state.story_state <= 3
	&& game->dialogue.b_trigger_a == 1)
		world_cond_fire_pos_match_male(window, game);
	if (game->state.story_state >= 4
	&& game->state.story_state <= 5
	&& game->dialogue.b_trigger_a == 1)
		world_cond_water_pos_match_male(window, game);
	world_dialogue_display_pos_match_male_below(window,
	game);
}

void world_dialogue_get_position(game_t *game)
{
	game->world.dialogue_pos.position_character_mini_fem =
	sfSprite_getPosition(game->world.char_fem_mini[0][0]);
	game->world.dialogue_pos.position_character_mini_male =
	sfSprite_getPosition(game->world.char_male_mini[0][0]);
	game->world.dialogue_pos.position_pnj_earth =
	sfSprite_getPosition(game->world.spirits.earth);
	game->world.dialogue_pos.position_pnj_fire =
	sfSprite_getPosition(game->world.spirits.fire);
	game->world.dialogue_pos.position_pnj_water =
	sfSprite_getPosition(game->world.spirits.water);
	game->world.dialogue_pos.position_pnj_air =
	sfSprite_getPosition(game->world.spirits.wind);
	game->world.dialogue_pos.position_chest =
	sfSprite_getPosition(game->world.chest);
}
