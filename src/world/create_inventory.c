/*
** EPITECH PROJECT, 2018
** create_inventory.c
** File description:
** This file's utility is to display the inventory.
*/

#include "game.h"
#include "world.h"
#include "my_stdc.h"
#include "csfml_practical.h"

void	init_consumables(sfVector2f pos, game_t *game)
{
	sfIntRect area = AREA_FOOD;

	pos.y = pos.y + 8;
	game->world.food = create_sprite_from_path(STUFF_OPEN, &area, pos);
	pos.x = pos.x + 101;
	area = AREA_HEAL;
	game->world.heal = create_sprite_from_path(STUFF_OPEN, &area, pos);
}

void	init_stuff(sfVector2f pos, game_t *game)
{
	sfIntRect area = AREA_SWORD;

	pos.y = pos.y + 7;
	game->world.sword = create_sprite_from_path(STUFF_OPEN, &area, pos);
	area = AREA_STAFF;
	game->world.staff = create_sprite_from_path(STUFF_OPEN, &area, pos);
	pos.x = pos.x + 100;
	area = AREA_ARMOR;
	game->world.armor = create_sprite_from_path(STUFF_OPEN, &area, pos);
	area = AREA_DRESS;
	game->world.dress = create_sprite_from_path(STUFF_OPEN, &area, pos);
	pos.x = pos.x + 100;
	area = AREA_GLOVES;
	game->world.gloves = create_sprite_from_path(STUFF_OPEN, &area, pos);
	area = AREA_PLATE;
	game->world.plates = create_sprite_from_path(STUFF_OPEN, &area, pos);
	pos.x = pos.x + 100;
	area = AREA_RING;
	game->world.ring = create_sprite_from_path(STUFF_OPEN, &area, pos);
}

void	init_elems(sfVector2f pos, game_t *game)
{
	sfIntRect area = AREA_ELEMENT_EARTH;

	game->world.elem_earth = create_sprite_from_path
		(ELEMENTS_OPEN, &area, pos);
	pos.x = pos.x + 95;
	area = AREA_ELEMENT_WATER;
	game->world.elem_water = create_sprite_from_path
		(ELEMENTS_OPEN, &area, pos);
	pos.x = pos.x + 95;
	area = AREA_ELEMENT_FIRE;
	game->world.elem_fire = create_sprite_from_path
		(ELEMENTS_OPEN, &area, pos);
	pos.x = pos.x + 95;
	area = AREA_ELEMENT_AIR;
	game->world.elem_air = create_sprite_from_path
		(ELEMENTS_OPEN, &area, pos);
}

bool	create_elements(sfVector2u window_size, game_t *game)
{
	sfVector2f pos = {(window_size.x) / 2 - 63,
			(window_size.y) / 2 - 175};

	init_stuff(pos, game);
	pos.y = pos.y + 100;
	init_consumables(pos, game);
	pos.y = pos.y + 100;
	init_elems(pos, game);
	if (game->world.elem_air == NULL || game->world.elem_earth == NULL
	|| game->world.elem_fire == NULL || game->world.elem_water == NULL)
		return (ERROR);
	return (SUCCESS);
}

bool	create_inventory(sfVector2u window_size, game_t *game)
{
	sfVector2f	vec = {300, 200};
	sfIntRect	area = AREA_INVENTORY_OPEN;
	sfVector2f	pos = {(window_size.x) / 2, (window_size.y) / 2};

	game->world.battle_won = 0;
	game->world.inventory_boy = create_sprite_from_path
			(INVENTORY_BOY_OPEN, &area, pos);
	game->world.inventory_girl = create_sprite_from_path
			(INVENTORY_GIRL_OPEN, &area, pos);
	if (game->world.inventory_boy == NULL
	|| game->world.inventory_boy == NULL)
		return (ERROR);
	sfSprite_setOrigin(game->world.inventory_boy, vec);
	sfSprite_setOrigin(game->world.inventory_girl, vec);
	create_elements(window_size, game);
	return (SUCCESS);
}
