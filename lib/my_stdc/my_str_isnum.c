/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** return 1 if str contains only numbers
*/

#include "my_stdc.h"

int	my_str_isnum(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!is_number_base_10(str[i]))
			return (0);
		i++;
	}
	return (1);
}
