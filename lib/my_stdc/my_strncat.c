/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** concatenates n caracters of the src str to the end of the dest string
*/

#include "my_stdc.h"

char	*my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int i2 = 0;

	i = my_strlen(dest);
	while (src[i2] != '\0') {
		dest[i] = src[i2];
		if (i2 == nb - 1)
			return (dest);
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
