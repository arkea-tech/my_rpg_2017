/*
** EPITECH PROJECT, 2018
** add_str_inside_str.c
** File description:
** strcat inside a str
*/

#include "my_stdc.h"

char	*add_str_inside_str(char *dest, char *src, int index)
{
	int	i2 = 0;

	while (src[i2] != '\0') {
		dest = add_char_to_str(dest, src[i2], index);
		i2++;
		index++;
	}
	return (dest);
}
