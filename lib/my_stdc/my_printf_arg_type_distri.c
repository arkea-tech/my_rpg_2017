/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_distribution.c
** File description:
** printf functions
*/

#include <stdlib.h>
#include "my_stdc.h"

int	print_argument(char argument_type, va_list ap, all_flags_t *all_flags)
{
	all_types_t		*tab_all_types = NULL;

	tab_all_types = malloc(sizeof(all_types_t) * amount_of_types_g);
	if (tab_all_types == NULL)
		return (84);
	tab_all_types = initialisation_tab_types(tab_all_types);
	execute_flag(argument_type, tab_all_types, ap, all_flags);
	if (argument_type == 'l')
		my_putchar('%');
	free(tab_all_types);
	return (0);
}

void	execute_flag(char argument_type, all_types_t *tab_all_types,
			va_list ap, all_flags_t *all_flags)
{
	unsigned int	i = 0;

	while (i < amount_of_types_g) {
		if (tab_all_types[i].type == argument_type) {
			tab_all_types[i].display_type_fct(ap, all_flags);
			return;
		}
		i++;
	}
}

all_types_t	*initialisation_tab_types(all_types_t *tab_all_types)
{
	tab_all_types[0].type = 'S';
	tab_all_types[0].display_type_fct = &print_argument_big_s;
	tab_all_types[1].type = 'c';
	tab_all_types[1].display_type_fct = &print_argument_c;
	tab_all_types[2].type = 's';
	tab_all_types[2].display_type_fct = &print_argument_s;
	tab_all_types[3].type = 'd';
	tab_all_types[3].display_type_fct = &print_argument_d;
	tab_all_types[4].type = 'i';
	tab_all_types[4].display_type_fct = &print_argument_d;
	tab_all_types = initialisation_tab_types_2(tab_all_types);
	return (tab_all_types);
}

all_types_t	*initialisation_tab_types_2(all_types_t	*tab_all_types)
{
	tab_all_types[5].type = 'x';
	tab_all_types[5].display_type_fct = &print_argument_x;
	tab_all_types[6].type = 'X';
	tab_all_types[6].display_type_fct = &print_argument_big_x;
	tab_all_types[7].type = 'u';
	tab_all_types[7].display_type_fct = &print_argument_u;
	tab_all_types[8].type = 'p';
	tab_all_types[8].display_type_fct = &print_argument_p;
	tab_all_types[9].type = 'o';
	tab_all_types[9].display_type_fct = &print_argument_o;
	tab_all_types[10].type = 'b';
	tab_all_types[10].display_type_fct = &print_argument_b;
	return (tab_all_types);
}
