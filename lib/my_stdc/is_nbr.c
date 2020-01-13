/*
** EPITECH PROJECT, 2018
** is_nbr.c
** File description:
** is_nbr
*/

#include "my_stdc.h"

bool is_nbr(char const *str)
{
	for (size_t i = 0; str[i] != '\0'; ++i)
		if (!is_number_base_10(str[i]) && str[i] != '-')
			return (false);
	return (true);
}
