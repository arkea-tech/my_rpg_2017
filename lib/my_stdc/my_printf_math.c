/*
** EPITECH PROJECT, 2018
** my_printf_math.c
** File description:
** my_printf_math.c
*/

#include "my_stdc.h"

unsigned int	get_appropriated_base(unsigned int base_received)
{
	unsigned int base = 0;

	switch (base_received) {
	case BASE_10:
		base = 10;
		break;
	case BASE_8:
		base = 8;
		break;
	case BASE_16:
		base = 16;
		break;
	case BASE_2:
		base = 2;
		break;
	default:
		return (84);
	}
	return (base);
}

unsigned int	get_nbr_size(int nb, unsigned int base_received)
{
	unsigned int size = 0;
	unsigned int base = 0;

	base = get_appropriated_base(base_received);
	if (nb == -2147483648)
		return (get_nbr_size(-(nb - 1), base_received));
	else if (nb < 0)
		return (get_nbr_size(-nb, base_received));
	while (nb / base > 0) {
		nb = nb / base;
		size++;
	}
	size++;
	return (size);
}

char	get_number_sign(int nb)
{
	return (nb < 0 ? '-' : '+');
}
