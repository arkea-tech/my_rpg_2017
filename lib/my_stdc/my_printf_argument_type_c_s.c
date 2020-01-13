/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_c_s
** File description:
** argument type s and c
*/

#include <stdlib.h>
#include "my_stdc.h"

void	print_argument_c(va_list ap, all_flags_t *all_flags)
{
	if (all_flags->left_justify == NO)
		print_blank(BLANK, all_flags->field_width - 1);
	my_putchar(va_arg(ap, int));
	if (all_flags->left_justify == YES)
		print_blank(BLANK, all_flags->field_width - 1);
}

void	print_argument_s(va_list ap, all_flags_t *all_flags)
{
	char		*str = NULL;
	unsigned int	width = all_flags->field_width;
	int		precision = all_flags->precision;

	str = va_arg(ap, char *);
	if (precision >= 0)
		str = my_strndup(str, precision);
	if (all_flags->left_justify == NO)
		print_blank(BLANK, width - my_strlen(str));
	my_putstr(str);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - my_strlen(str));
	if (precision >= 0)
		free(str);
}

int	print_blank(int mode, int amount_of_blank)
{
	int i = 0;

	if (i < 0)
		return (84);
	while (i < amount_of_blank) {
		if (mode == BLANK)
			my_putchar(' ');
		else if (mode == ZERO)
			my_putchar('0');
		i++;
	}
	return (0);
}
