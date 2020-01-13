/*
** EPITECH PROJECT, 2018
** my_printf_detection.c
** File description:
** my_printf_detection
*/

#include "my_stdc.h"

int	go_over_flags(char const *format, int i, all_flags_t *all_flags)
{
	while (is_a_flag_option(format[i])) {
		all_flags = setup_flags(format[i], all_flags);
		i++;
	}
	return (i);
}

all_flags_t	*setup_flags(char c, all_flags_t *all_flags)
{
	switch (c) {
	case '0':
		all_flags->blank_or_zero = ZERO;
		break;
	case '-':
		all_flags->left_justify = YES;
		break;
	case '+':
		all_flags->display_number_sign = YES;
		break;
	case ' ':
		all_flags->blank_flag = YES;
		break;
	case '#':
		all_flags->prefix_flag = YES;
		break;
	}
	return (all_flags);
}

int	go_over_field_width_options(char const *format, int i,
					all_flags_t *all_flags)
{
	if (is_a_field_width_option(format[i]))
		all_flags->field_width = my_atoi(format + i);
	while (is_a_field_width_option(format[i])) {
		if (format[i] == '.')
			all_flags->precision = my_atoi(format + i + 1);
		i++;
	}
	return (i);
}
