/*
** EPITECH PROJECT, 2018
** my_strndup.c
** File description:
** man strndup
*/

#include "my_stdc.h"
#include <stdlib.h>

char	*my_strndup(char const *str, size_t n)
{
	char	*new_str = NULL;

	new_str = malloc(n + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = my_strncpy(new_str, str, n);
	new_str[n] = '\0';
	return (new_str);
}
