/*
** EPITECH PROJECT, 2018
** print_escape_sequence.c
** File description:
** my_putstr with a \n at the end
*/

#include "my_stdc.h"

void	print_escape_sequence(char *str)
{
	for (int i = 0 ; str[i] != '\0' ; ++i) {
		if (str[i] == ESCAPE_ASCII)
			my_putstr("^E");
		else
			my_putchar(str[i]);
	}
	my_putchar('\n');
}
