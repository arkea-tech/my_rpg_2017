/*
** EPITECH PROJECT, 2018
** create_spirits.c
** File description:
** world_create process
*/

#include "game.h"
#include "my_stdc.h"
#include "get_func_proto.h"
#include "world_pnj_const.h"

static void	fill_tab_position_spirits(	sfVector2f	*tab,
						sfVector2u	window_size)
{
	sfVector2f pos_center = {	SUBTRACT_PERCENT(window_size.x, 50),
					SUBTRACT_PERCENT(window_size.y, 50)};

	tab[EARTH] = pos_center;
	tab[FIRE] = pos_center;
	tab[WATER] = pos_center;
	tab[AIR] = pos_center;
	tab[EARTH].x += 550;
	tab[FIRE].x += 200;
	tab[WATER].x -= 250;
	tab[AIR].x -= 750;
}

bool	create_spirits(sfVector2u window_size, game_t *game)
{
	sfVector2f	*tab_position_spirits = malloc(sizeof(sfVector2f) * 4);
	sfVector2f	pos_chest = {	SUBTRACT_PERCENT(window_size.x, 12),
					SUBTRACT_PERCENT(window_size.y, 48)};

	if (tab_position_spirits == NULL)
		return (ERROR);
	fill_tab_position_spirits(tab_position_spirits, window_size);
	game->world.spirits.fire = create_sprite(SPIRITS_PATH,
	get_rectangle(FIRE_SPIRIT_RECT_VALUES), tab_position_spirits[FIRE]);
	game->world.spirits.earth = create_sprite(SPIRITS_PATH,
	get_rectangle(EARTH_SPIRIT_RECT_VALUES), tab_position_spirits[EARTH]);
	game->world.spirits.wind = create_sprite(SPIRITS_PATH,
	get_rectangle(WIND_SPIRIT_RECT_VALUES), tab_position_spirits[AIR]);
	game->world.spirits.water = create_sprite(SPIRITS_PATH,
	get_rectangle(WATER_SPIRIT_RECT_VALUES), tab_position_spirits[WATER]);
	game->world.chest = create_sprite(CHEST_PATH,
	get_rectangle(CHEST_RECT_VALUES), pos_chest);
	return (SUCCESS);
}
