/*
** EPITECH PROJECT, 2018
** get_random_color.c
** File description:
** CSFML get a random color between the 7
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

sfColor		get_random_color(void)
{
	int	tmp = rand() % 7;

	switch (tmp) {
	case 0:
		return (sfWhite);
	case 1:
		return (sfRed);
	case 2:
		return (sfGreen);
	case 3:
		return (sfBlue);
	case 4:
		return (sfYellow);
	case 5:
		return (sfMagenta);
	default:
		return (sfCyan);
	}
}
