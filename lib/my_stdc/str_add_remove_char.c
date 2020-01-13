/*
** EPITECH PROJECT, 2018
** str_standard.c
** File description:
** Functions needed everywhere
*/

#include <stdlib.h>
#include "my_stdc.h"

char	*remove_char_from_str(char *str, int index)
{
	int	i = index;
	char	*str_cpy = new_string_fct(my_strlen(str));

	if (str_cpy == NULL)
		return (NULL);
	while (str[i] != '\0') {
		str[i] = str[i + 1];
		i++;
	}
	str_cpy = my_strcpy(str_cpy, str);
	free(str);
	return (str_cpy);
}

char	*add_char_to_str(char *str, char c, int index)
{
	int   i = 0;

	if (str == NULL)
		str = my_realloc_str(str, 2);
	else
		str = my_realloc_str(str, my_strlen(str) + 2);
	if (str == NULL)
		return (NULL);
	i = index;
	while (str[i] != '\0')
		i++;
	while (i >= index) {
		str[i + 1] = str[i];
		i--;
	}
	str[i + 1] = c;
	return (str);
}

char	*remove_chars_from_str(char *str, char to_remove)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == to_remove) {
			str = remove_char_from_str(str, i);
			i = 0;
		}
		i++;
	}
	return (str);
}
