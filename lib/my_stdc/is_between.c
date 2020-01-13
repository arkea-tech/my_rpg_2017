/*
** EPITECH PROJECT, 2018
** is_between.c
** File description:
** is_between two nbr
*/

#include <stdbool.h>

bool	is_between(int x, int min, int max)
{
	return (x >= min && x <= max);
}
