/*
** EPITECH PROJECT, 2018
** create_dialogues.c
** File description:
** description
*/

#include "game.h"
#include "my_stdc.h"

static bool	create_dialogues(game_t *game)
{
	game->dialogue.next = 0;
	if (init_texture(&game->dialogue.texts, game->character.gender))
		return (ERROR);
	if (init_font(&game->dialogue.fonts))
		return (ERROR);
	set_sprite(&game->dialogue.sprites);
	set_sprite_pos(&game->dialogue.sprites);
	set_texture(&game->dialogue.texts, &game->dialogue.sprites);
	return (SUCCESS);
}

int8_t			create_dialogue_one_time_only(game_t *game)
{
	static int	only_one_time = 0;

	if (only_one_time == 0) {
		if (create_dialogues(game))
			return (ERROR);
		game->dialogue.b_trigger_a = 0;
		game->dialogue.b_trigger = 0;
		game->dialogue.d_trigger = 0;
		game->dialogue.dialogue_earth = true;
		game->dialogue.dialogue_fire = true;
		game->dialogue.dialogue_water = true;
		game->dialogue.dialogue_air = true;
		game->dialogue.dialogue_chest = true;
		game->dialogue.d_test = 0;
		only_one_time = 1;
	}
	return (SUCCESS);
}
