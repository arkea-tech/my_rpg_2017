/*
** EPITECH PROJECT, 2018
** my_str_is_alphanumeric.c
** File description:
** If str contains something else than number or letter : returns 0
*/

#include "my_stdc.h"

bool	my_str_is_alphanumeric(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!(is_number_base_10(str[i]) || is_letter(str[i])))
			return (false);
		i++;
	}
	return (true);
}
