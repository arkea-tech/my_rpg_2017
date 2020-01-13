/*
** EPITECH PROJECT, 2018
** my_libconfig_get_var.c
** File description:
**  practical fcts
*/

#include <stdbool.h>
#include "libconfig.h"

int	my_libconfig_get_int(config_setting_t *setting, char const *name)
{
	setting = config_setting_get_member(setting, name);
	return (config_setting_get_int(setting));
}

float	my_libconfig_get_float(config_setting_t *setting, char const *name)
{
	setting = config_setting_get_member(setting, name);
	return (config_setting_get_float(setting));
}

bool	my_libconfig_get_bool(config_setting_t *setting, char const *name)
{
	setting = config_setting_get_member(setting, name);
	return (config_setting_get_bool(setting));
}
