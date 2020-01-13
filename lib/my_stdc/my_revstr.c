/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** reverse a str
*/

#include "my_stdc.h"

char	*my_revstr(char *str)
{
	int		i = 0;
	int		i2 = 0;
	unsigned char	head = 0;
	unsigned char	tail = 0;

	i2 = my_strlen(str) - 1;
	if (i2 == -1 || i2 == 0)
		return (str);
	while (i <= i2) {
		head = str[i];
		tail = str[i2];
		str[i] = tail;
		str[i2] = head;
		i++;
		i2--;
	}
	return (str);
}
