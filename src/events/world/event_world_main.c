/*
** EPITECH PROJECT, 2018
** event_world_main.c
** File description:
** event world main
*/

#include "world.h"
#include "csfml_practical.h"
#include "event.h"

static void	activate_button_inventory(sfEvent *event, game_t *game)
{
	sfFloatRect	rect;

	rect = get_global_button_rect(game->world.inventory_button);
	button_try_to_detect_hover(event, game->world.inventory_button, rect);
	button_try_to_detect_clicked(event, game->world.inventory_button, rect);
}

static bool	is_char_entering_in_arena(game_t *game, int8_t option)
{
	world_t		*world = &game->world;
	sfVector2f	pos;
	sfIntRect	arena_earth = RECT_ARENA_EARTH;
	sfIntRect	arena_fire = RECT_ARENA_FIRE;
	sfIntRect	arena_water = RECT_ARENA_WATER;
	sfIntRect	arena_air = RECT_ARENA_AIR;

	if (option == FEMALE)
		pos = \
		sfSprite_getPosition(world->char_fem_mini[CUR_ROT][CUR_POS]);
	else
		pos = \
		sfSprite_getPosition(world->char_male_mini[CUR_ROT][CUR_POS]);
	if (sfIntRect_contains(&arena_earth, pos.x, pos.y)
	|| sfIntRect_contains(&arena_fire, pos.x, pos.y)
	|| sfIntRect_contains(&arena_water, pos.x, pos.y)
	|| sfIntRect_contains(&arena_air, pos.x, pos.y))
		return (true);
	return (false);
}

void	handle_events_world(sfEvent *event, game_t *game)
{
	activate_button_inventory(event, game);
	activate_how_to_play_menu(event, game);
	handle_how_to_play_event(event, game, 0);
	if (detect_anti_spam_mvmt(event, &game->world) == false) {
		if (game->character.gender == FEMALE)
			handle_fem_character_movement(event, game);
		else
			handle_male_character_movement(event, game);
	}
	if (game->character.gender == MALE) {
		if (is_char_entering_in_arena(game, MALE))
			game->id_screen = FIGHT;
	} else {
		if (is_char_entering_in_arena(game, FEMALE))
			game->id_screen = FIGHT;
	}
}
