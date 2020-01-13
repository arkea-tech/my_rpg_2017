/*
** EPITECH PROJECT, 2018
** convert_base_10_to_2.c
** File description:
** Convert a number to base 2
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Only works for unsigned number
*/
unsigned long	convert_base_10_to_2(int nb)
{
	char		*nb_base_2 = NULL;
	int		remainder = 0;
	unsigned long	result = 0;

	while (nb != 0) {
		remainder = nb % 2;
		nb_base_2 = add_char_to_str(nb_base_2, remainder + '0', 0);
		nb = nb / 2;
	}
	result = my_atol(nb_base_2);
	free(nb_base_2);
	return (result);
}
