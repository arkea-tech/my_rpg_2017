/*
** EPITECH PROJECT, 2018
** save.h
** File description:
** save header
*/

#ifndef		_SAVE_H_
#define		_SAVE_H_

#include <stdbool.h>
#include "libconfig.h"
#include "game.h"

static const char PATH_SAVE_FILE[] = "./autosave/autosave.cfg";
static const char PATH_NEW_SAVE[] = "./autosave/newsave.cfg";

bool	autosave(game_t *game);
bool	exit_corrupted_file(config_t *config);
bool	load_save(game_t *game);
bool	open_config_file(config_t *config, char const *path_filename);
int	my_libconfig_get_int(config_setting_t *setting, char const *name);
float	my_libconfig_get_float(config_setting_t *setting, char const *name);
bool	my_libconfig_get_bool(config_setting_t *setting, char const *name);
bool	load_inventory_infos(config_t *config, game_t *game);
void	save_inventory_infos(config_t *config, game_t *game);
bool	erase_save(game_t *game);

#endif /* _SAVE_H_ */
