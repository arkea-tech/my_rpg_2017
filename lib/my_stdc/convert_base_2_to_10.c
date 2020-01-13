/*
** EPITECH PROJECT, 2018
** convert_base_2_to_10.c
** File description:
** convertion to an int
*/

#include "my_stdc.h"

int	convert_base_2_to_10(unsigned long nb)
{
	int	result = 0;

	for (int i = 0 ; nb != 0 ; ++i) {
		result = result + (nb % 10) * my_compute_power_rec(2, i);
		nb = nb / 10;
	}
	return (result);
}
