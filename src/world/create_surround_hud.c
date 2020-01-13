/*
** EPITECH PROJECT, 2018
** create_surround_hud.c
** File description:
** create surround hud
*/

#include "game.h"
#include "world.h"
#include "my_stdc.h"
#include "csfml_practical.h"

bool	create_surround_hud(sfVector2u UNUSED(window_size), game_t *game)
{
	sfIntRect	area = AREA_SURROUND_HUD;
	sfVector2f	pos = {0, 0};
	game->world.surround_hud = create_sprite_from_path(SURROUND_HUD_WORLD,
							&area, pos);
	if (game->world.surround_hud == NULL)
		return (ERROR);
	return (SUCCESS);
}