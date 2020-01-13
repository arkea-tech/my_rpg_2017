/*
** EPITECH PROJECT, 2018
** print_base_8.c
** File description:
** print_nbr_in_base_8
*/

#include "my_stdc.h"

void	print_base_8_advanced(int nb)
{
	char	remainder = 0;

	if (nb >= 0) {
		if (nb >= 8)
			print_base_8_advanced(nb / 8);
		remainder = (nb % 8) + '0';
		my_putchar(remainder);
	} else
		print_base_8_super_advanced((4294967295 + nb) + 1);
}

void	print_base_8_super_advanced(unsigned long nb)
{
	char	remainder = 0;

	if (nb >= 8)
		print_base_8_advanced(nb / 8);
	remainder = (nb % 8) + '0';
	my_putchar(remainder);
}
