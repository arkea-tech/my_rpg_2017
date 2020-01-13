/*
** EPITECH PROJECT, 2018
** world_main.c
** File description:
** launch_world
*/

#include "game.h"
#include "my_stdc.h"
#include "music.h"
#include "audio.h"
#include "world_pnj_proto.h"

void	display_dialogue(	sfRenderWindow	*window,
				int		id_dialogue,
				game_t		*game)
{
	call_dialogue_initialisation(	id_dialogue,
					&(game->dialogue.fonts),
					game->dialogue.next);
	call_dialogue(id_dialogue, window, game);
}

static void	display_hud(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->world.surround_hud, NULL);
	display_location_indicator(window, game);
	display_location_text(window, game);
	display_button(window, game->world.inventory_button);
	display_button(window, game->world.help_button);
}

static void	save_character_position(game_t *game)
{
	sfVector2f	position;
	world_t		*world = &game->world;

	if (game->character.gender == FEMALE)
		position = sfSprite_getPosition(world->char_fem_mini[0][0]);
	else
		position = sfSprite_getPosition(world->char_male_mini[0][0]);
	game->state.x = position.x;
	game->state.y = position.y;
}

bool	launch_world(sfRenderWindow *window, game_t *game)
{
	if (display_tile_map(window, &game->world.map, game->state.story_state))
		return (ERROR);
	create_dialogue_one_time_only(game);
	save_character_position(game);
	world_dialogue_get_position(game);
	display_map_decoration(window, &game->world.map,
				game->state.story_state);
	display_character(window, game);
	draw_background_world(window, &(game->world.background_world));
	display_hud(window, game);
	display_pnj_chest(window, game);
	world_dialogue_display_pos_match_male(window, game);
	if (game->world.inventory_button->state == CLICKED)
		display_inventory(window, game);
	if (game->world.help_button->state == CLICKED)
		display_how_to_play(window, game);
	if (game->state.story_state == 8)
		game->id_screen = CREDIT;
	return (SUCCESS);
}
