/*
** EPITECH PROJECT, 2018
** printf_argument_type_p.c
** File description:
** %p on printf
*/

#include <stdlib.h>
#include "my_stdc.h"

void	print_argument_big_s(va_list ap, all_flags_t *all_flags)
{
	char		*str = NULL;
	unsigned int	width = all_flags->field_width;
	int		precision = all_flags->precision;

	str = va_arg(ap, char *);
	if (precision >= 0)
		str = my_strndup(str, precision);
	if (all_flags->left_justify == NO)
		print_blank(BLANK, width - my_strlen(str));
	my_showstr_octal(str);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - my_strlen(str));
	if (precision >= 0)
		free(str);
}

void	my_showstr_octal(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!is_printable(str[i])) {
			print_backslash_zero_octal(str[i]);
			print_base_8_advanced(str[i]);
		} else
			my_putchar(str[i]);
		i++;
	}
}

void	print_backslash_zero_octal(char c)
{
	my_putchar('\\');
	if (c < 8)
		my_putchar('0');
	if (c < 88)
		my_putchar('0');
}
