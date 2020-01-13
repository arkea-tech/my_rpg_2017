/*
** EPITECH PROJECT, 2018
** create_locations.c
** File description:
** create_locations
*/

#include "game.h"
#include "my_stdc.h"
#include "world.h"
#include "csfml_practical.h"

bool	create_location_text(sfVector2u window_size, game_t *game)
{
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 8),
				SUBTRACT_PERCENT(window_size.y, 95)};

	game->world.location_text = create_text(pos,
						game->world.locations[UNKNOWN],
						23);
	if (game->world.location_text == NULL)
		return (ERROR);
	return (SUCCESS);
}

bool	create_locations(game_t *game)
{
	game->world.locations = malloc(sizeof(char *) * (NB_LOCATION + 1));
	if (game->world.locations == NULL)
		return (ERROR);
	game->world.locations[UNKNOWN] = "???";
	game->world.locations[FOREST] = " Forest";
	game->world.locations[VILLAGE] = "Village";
	game->world.locations[DESERT] = "Desert";
	game->world.locations[BEACH] = "Beach";
	game->world.locations[MONTAIN] = "Montains";
	game->world.locations[NB_LOCATION] = NULL;
	return (SUCCESS);
}
