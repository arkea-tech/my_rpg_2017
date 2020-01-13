/*
** EPITECH PROJECT, 2018
** autosave.c
** File description:
** autosave
*/

#include "game.h"
#include "libconfig.h"
#include "save.h"
#include "my_stdc.h"

static void	save_character_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;
	config_setting_t	*character = NULL;

	character = config_lookup(config, "Character");
	setting = config_setting_lookup(character, "gender");
	config_setting_set_int(setting, game->character.gender);
	setting = config_setting_lookup(character, "level");
	config_setting_set_int(setting, game->character.level);
	setting = config_setting_lookup(character, "attack");
	config_setting_set_int(setting, game->character.attack);
	setting = config_setting_lookup(character, "health");
	config_setting_set_int(setting, game->character.health);
	setting = config_setting_lookup(character, "dodge");
	config_setting_set_int(setting, game->character.dodge);
}

static void	save_game_state_infos(config_t *config, game_t *game)
{
	config_setting_t	*setting = NULL;
	config_setting_t	*game_state = NULL;

	game_state = config_lookup(config, "State");
	setting = config_setting_lookup(game_state, "story_state");
	config_setting_set_int(setting, game->state.story_state);
	setting = config_setting_lookup(game_state, "chapter");
	config_setting_set_int(setting, game->state.chapter);
	setting = config_setting_lookup(game_state, "x");
	config_setting_set_float(setting, game->state.x);
	setting = config_setting_lookup(game_state, "y");
	config_setting_set_float(setting, game->state.y);
}

bool	autosave(game_t *game)
{
	config_t		config;

	if (open_config_file(&config, PATH_SAVE_FILE))
		return (ERROR);
	save_character_infos(&config, game);
	save_inventory_infos(&config, game);
	save_game_state_infos(&config, game);
	if (!config_write_file(&config, PATH_SAVE_FILE))
		return (exit_corrupted_file(&config));
	config_destroy(&config);
	return (SUCCESS);
}
