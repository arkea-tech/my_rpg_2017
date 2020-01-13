/*
** EPITECH PROJECT, 2018
** change_radius.c
** File description:
** description
*/

#include "credit.h"

int	change_radius(float radius)
{
	if (radius + 0.3 > RADIUS_MAX)
		radius = 0;
	return (radius + 0.3);
}
