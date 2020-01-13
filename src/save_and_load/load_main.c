/*
** EPITECH PROJECT, 2018
** load_main.c
** File description:
** load .cfg
*/

#include "libconfig.h"
#include "my_stdc.h"
#include "game.h"
#include "save.h"

static bool	load_character_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;

	setting = config_lookup(config, "Character");
	if (setting == NULL)
		return (exit_corrupted_file(config));
	game->character.gender = my_libconfig_get_int(setting, "gender");
	game->character.level = my_libconfig_get_int(setting, "level");
	game->character.attack = my_libconfig_get_int(setting, "attack");
	game->character.health = my_libconfig_get_int(setting, "health");
	game->character.dodge = my_libconfig_get_int(setting, "dodge");
	game->world.pot = 0;
	return (SUCCESS);
}

bool	load_game_state_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;

	setting = config_lookup(config, "State");
	if (setting == NULL)
		return (exit_corrupted_file(config));
	game->state.story_state = my_libconfig_get_int(setting, "story_state");
	game->state.chapter = my_libconfig_get_int(setting, "chapter");
	game->state.x = my_libconfig_get_float(setting, "x");
	game->state.y = my_libconfig_get_float(setting, "y");
	return (SUCCESS);
}

bool	load_save(game_t *game)
{
	config_t		config;

	if (open_config_file(&config, PATH_SAVE_FILE))
		return (ERROR);
	if (load_character_infos(&config, game)
	|| load_inventory_infos(&config, game)
	|| load_game_state_infos(&config, game))
		return (exit_corrupted_file(&config));
	config_destroy(&config);
	return (SUCCESS);
}
