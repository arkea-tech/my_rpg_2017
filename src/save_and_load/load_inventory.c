/*
** EPITECH PROJECT, 2018
** load_inventory.c
** File description:
** load inventory
*/

#include <stdbool.h>
#include "game.h"
#include "save.h"
#include "libconfig.h"
#include "my_stdc.h"

static void	load_inventory_infos_elements(config_setting_t *setting,
							game_t *game)
{
	game->invent.elem_1 = my_libconfig_get_bool(setting, "elem_1");
	game->invent.elem_2 = my_libconfig_get_bool(setting, "elem_2");
	game->invent.elem_3 = my_libconfig_get_bool(setting, "elem_3");
	game->invent.elem_4 = my_libconfig_get_bool(setting, "elem_4");
}

static void	load_inventory_infos_items(config_setting_t *setting,
							game_t *game)
{
	game->invent.item_1 = my_libconfig_get_bool(setting, "item_1");
	game->invent.item_2 = my_libconfig_get_bool(setting, "item_2");
	game->invent.item_3 = my_libconfig_get_bool(setting, "item_3");
	game->invent.item_4 = my_libconfig_get_bool(setting, "item_4");
	game->invent.item_5 = my_libconfig_get_bool(setting, "item_5");
	game->invent.item_6 = my_libconfig_get_bool(setting, "item_6");
}

static void	load_inventory_infos_consumable_slots(config_setting_t *setting,
								game_t *game)
{
	game->invent.consumable_slot_1 = my_libconfig_get_int(setting,
							"consumable_slot_1");
	game->invent.consumable_slot_2 = my_libconfig_get_int(setting,
							"consumable_slot_2");
	game->invent.consumable_slot_3 = my_libconfig_get_int(setting,
							"consumable_slot_3");
	game->invent.consumable_slot_4 = my_libconfig_get_int(setting,
							"consumable_slot_4");
	game->invent.consumable_slot_5 = my_libconfig_get_int(setting,
							"consumable_slot_5");
	game->invent.consumable_slot_6 = my_libconfig_get_int(setting,
							"consumable_slot_6");
}

bool	load_inventory_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;

	setting = config_lookup(config, "Inventory");
	if (setting == NULL)
		return (exit_corrupted_file(config));
	load_inventory_infos_elements(setting, game);
	load_inventory_infos_items(setting, game);
	load_inventory_infos_consumable_slots(setting, game);
	return (SUCCESS);
}
