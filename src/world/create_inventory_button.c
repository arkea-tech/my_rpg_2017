/*
** EPITECH PROJECT, 2018
** create_inventory_button.c
** File description:
** create_inventory_button
*/

#include "game.h"
#include "my_stdc.h"

bool	create_inventory_button(sfVector2u window_size, game_t *game)
{
	sfIntRect	area = AREA_INVENTORY_BUTTON;
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 10),
				SUBTRACT_PERCENT(window_size.y, 10)};
	const char	*frames_button[] = {	INVENTORY_BUTTON_IDLE,
						INVENTORY_BUTTON_HOVER,
						INVENTORY_BUTTON_CLICKED};

	game->world.inventory_button = create_button(	NULL,
							frames_button,
							&area,
							pos);
	if (game->world.inventory_button == NULL)
		return (ERROR);
	return (SUCCESS);
}
