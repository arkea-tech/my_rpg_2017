/*
** EPITECH PROJECT, 2018
** is_future_collision.c
** File description:
** check collisions
*/

#include <SFML/Graphics.h>
#include <stdint.h>
#include "csfml_practical.h"
#include "world.h"
#include "event.h"

static sfVector2f	window_coord_to_map_coord(	sfVector2f position,
							uint8_t y)
{
	sfVector2f	map_coord = {-1, -1};
	sfIntRect	square_tmp;

	for (uint8_t x = 0 ; x < WIDTH_MAP ; ++x) {
		square_tmp = set_int_rect(96 * x, 144 * y, 96, 144);
		if (sfIntRect_contains(&square_tmp, position.x, position.y)) {
			map_coord = set_pos(x, y);
			break;
		}
	}
	return (map_coord);
}

static bool	is_a_wall_check_line(	sfVector2f	position,
					uint8_t		y,
					uint8_t		**map_nb)
{
	sfVector2f	map_coord;

	map_coord = window_coord_to_map_coord(position, y);
	if (map_coord.x != -1.0)
		if (map_nb[(int)map_coord.y][(int)map_coord.x] >= 10)
			return (true);
	return (false);
}

static bool	is_a_wall(sfVector2f position, uint8_t **map_nb)
{
	for (uint8_t y = 0 ; y < HEIGHT_MAP ; ++y)
		if (is_a_wall_check_line(position, y, map_nb))
			return (true);
	return (false);
}

static bool	is_a_pnj(sfVector2f pos, world_t *world)
{
	sfVector2f	pos_chest = sfSprite_getPosition(world->chest);
	sfIntRect	rect_chest = set_int_rect((int)pos_chest.x - 32,
						(int)pos_chest.y - 32, 64, 64);
	sfVector2f	earth = sfSprite_getPosition(world->spirits.earth);
	sfIntRect	rect_earth = set_int_rect((int)earth.x - 32,
						(int)earth.y - 32, 64, 64);
	sfVector2f	fire = sfSprite_getPosition(world->spirits.fire);
	sfIntRect	rect_f = set_int_rect(fire.x - 32, fire.y - 32, 64, 64);
	sfVector2f	wat = sfSprite_getPosition(world->spirits.water);
	sfIntRect	rect_wat = set_int_rect(wat.x - 32, wat.y - 32, 64, 64);
	sfVector2f	air = sfSprite_getPosition(world->spirits.wind);
	sfIntRect	rect_air = set_int_rect(air.x - 32, air.y - 32, 64, 64);

	if (INSIDE(&rect_earth, pos.x, pos.y) || INSIDE(&rect_f, pos.x, pos.y)
	|| INSIDE(&rect_wat, pos.x, pos.y) || INSIDE(&rect_air, pos.x, pos.y))
		return (true);
	else if (INSIDE(&rect_chest, pos.x, pos.y) && world->pot == 0)
		return (true);
	else
		return (false);
}

bool	is_future_collision(	sfVector2f	pos,
				int		direction,
				world_t		*world)
{
	uint8_t		**map_nb = world->map.map_nb;

	switch (direction) {
	case LEFT_W:
		return (is_a_wall(set_pos(pos.x - 20, pos.y), map_nb)
		|| is_a_pnj(set_pos(pos.x - 10, pos.y), world));
	case RIGHT_W:
		return (is_a_wall(set_pos(pos.x + 20, pos.y), map_nb)
		|| is_a_pnj(set_pos(pos.x + 10, pos.y), world));
	case UP_W:
		return (is_a_wall(set_pos(pos.x, pos.y - 10), map_nb)
		|| is_a_pnj(set_pos(pos.x, pos.y - 10), world));
	default:
		return (is_a_wall(set_pos(pos.x, pos.y + 70), map_nb)
		|| is_a_pnj(set_pos(pos.x, pos.y + 10), world));
	}
}
