/*
** EPITECH PROJECT, 2018
** my_printf_is_flag.c
** File description:
** comparison functions between a char and all the flags handled by my printf
*/

#include "my_stdc.h"

int	is_a_field_width_option(char c)
{
	return ((is_number_base_10(c) || c == '.') ? 1 : 0);
}

int	is_an_argument_type(char c)
{
	return (( c == 'd' || c == 'i' || c == 'o' || c == 'x' || c == 'X' ||
			c == 'u' || c == 'c' || c == 's' || c == 'p' ||
			c == 'b' || c == 'S' || c == 'l') ?
		1 : 0);
}

int	is_a_flag_option(char c)
{
	return ((c == '-' || c == '0' || c == '+' || c == ' ' || c == '#') ?
		1 : 0);
}
