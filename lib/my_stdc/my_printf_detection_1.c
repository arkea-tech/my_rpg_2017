/*
** EPITECH PROJECT, 2018
** my_printf_detection_execution.c
** File description:
** my_printf_detection functions and executions
*/

#include <stdlib.h>
#include "my_stdc.h"

int	detect_and_execute_flag(char const *format, unsigned int *index,
				va_list ap)
{
	int		i = *index;
	all_flags_t	*all_flags = NULL;

	all_flags = malloc(sizeof(all_flags_t));
	if (all_flags == NULL)
		return (84);
	all_flags = initialisation_all_flags(all_flags);
	i++;
	i = go_over_flags(format, i, all_flags);
	i = go_over_field_width_options(format, i, all_flags);
	i = go_over_argument_type(format, i, all_flags, ap);
	if (i == -1)
		(*index)++;
	else
		*index = i;
	free(all_flags);
	return (0);
}

all_flags_t	*initialisation_all_flags(all_flags_t *all_flags)
{
	all_flags->field_width = 0;
	all_flags->blank_or_zero = BLANK;
	all_flags->base = BASE_10;
	all_flags->left_justify = NO;
	all_flags->display_number_sign = NO;
	all_flags->blank_flag = NO;
	all_flags->prefix_flag = NO;
	all_flags->precision = -1;
	return (all_flags);
}
