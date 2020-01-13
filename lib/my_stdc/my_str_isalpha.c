/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** is str contain letters
*/

#include <stdlib.h>
#include <stdbool.h>

bool	is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	my_str_isalpha(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (84);
	while (str[i] != '\0') {
		if (!is_letter(str[i]))
			return (0);
		i++;
	}
	return (1);
}
