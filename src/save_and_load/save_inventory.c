/*
** EPITECH PROJECT, 2018
** save_inventory.c
** File description:
** save inventory
*/

#include "libconfig.h"
#include "game.h"

static void	save_inventory_items(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;
	config_setting_t	*inventory = NULL;

	inventory = config_lookup(config, "Inventory");
	setting = config_setting_lookup(inventory, "item_1");
	config_setting_set_bool(setting, game->invent.item_1);
	setting = config_setting_lookup(inventory, "item_2");
	config_setting_set_bool(setting, game->invent.item_2);
	setting = config_setting_lookup(inventory, "item_3");
	config_setting_set_bool(setting, game->invent.item_3);
	setting = config_setting_lookup(inventory, "item_4");
	config_setting_set_bool(setting, game->invent.item_4);
	setting = config_setting_lookup(inventory, "item_5");
	config_setting_set_bool(setting, game->invent.item_5);
	setting = config_setting_lookup(inventory, "item_6");
	config_setting_set_bool(setting, game->invent.item_6);
}

static void	save_inventory_consumable_slots(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;
	config_setting_t	*inventory = NULL;

	inventory = config_lookup(config, "Inventory");
	setting = config_setting_lookup(inventory, "consumable_slot_1");
	config_setting_set_int(setting, game->invent.consumable_slot_1);
	setting = config_setting_lookup(inventory, "consumable_slot_2");
	config_setting_set_int(setting, game->invent.consumable_slot_2);
	setting = config_setting_lookup(inventory, "consumable_slot_3");
	config_setting_set_int(setting, game->invent.consumable_slot_3);
	setting = config_setting_lookup(inventory, "consumable_slot_4");
	config_setting_set_int(setting, game->invent.consumable_slot_4);
	setting = config_setting_lookup(inventory, "consumable_slot_5");
	config_setting_set_int(setting, game->invent.consumable_slot_5);
	setting = config_setting_lookup(inventory, "consumable_slot_6");
	config_setting_set_int(setting, game->invent.consumable_slot_6);
}

void	save_inventory_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;
	config_setting_t	*inventory = NULL;

	inventory = config_lookup(config, "Inventory");
	setting = config_setting_lookup(inventory, "elem_1");
	config_setting_set_bool(setting, game->invent.elem_1);
	setting = config_setting_lookup(inventory, "elem_2");
	config_setting_set_bool(setting, game->invent.elem_2);
	setting = config_setting_lookup(inventory, "elem_3");
	config_setting_set_bool(setting, game->invent.elem_3);
	setting = config_setting_lookup(inventory, "elem_4");
	config_setting_set_bool(setting, game->invent.elem_4);
	save_inventory_items(config, game);
	save_inventory_consumable_slots(config, game);
}
