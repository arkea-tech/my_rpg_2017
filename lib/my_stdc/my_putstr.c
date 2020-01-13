/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** Display a str
*/

#include <unistd.h>
#include "my_stdc.h"

int	my_putstr(char const *str)
{
	write(STDOUT_FILENO, str, my_strlen(str));
	return (0);
}

int	my_putnstr(char *str, unsigned int n)
{
	unsigned int i = 0;

	while (str[i] != '\0' && i < n) {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
