/*
** EPITECH PROJECT, 2018
** my_putstr_err.c
** File description:
** put a message in the stderr
*/

#include <unistd.h>
#include <stddef.h>
#include "my_stdc.h"

void	my_putchar_err(char c)
{
	write(STDERR_FILENO, &c, 1);
}

void	my_putstr_err(char const *str)
{
	size_t	len = my_strlen(str);

	write(STDERR_FILENO, str, len);
}
