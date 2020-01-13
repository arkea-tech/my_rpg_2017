/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** description
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
