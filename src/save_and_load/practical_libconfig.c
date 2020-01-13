/*
** EPITECH PROJECT, 2018
** practical_libconfig.c
** File description:
** libconfig practical
*/

#include "my_stdc.h"
#include "libconfig.h"

bool	exit_corrupted_file(config_t *config)
{
	my_putstr_err("Corrupted save file\n");
	config_destroy(config);
	return (ERROR);
}

bool	open_config_file(config_t *config, char const *path_filename)
{
	config_init(config);
	if (config_read_file(config, path_filename) == CONFIG_FALSE) {
		my_putstr_err("Error when reading the .cfg file\n");
		config_destroy(config);
		return (ERROR);
	}
	return (SUCCESS);
}
