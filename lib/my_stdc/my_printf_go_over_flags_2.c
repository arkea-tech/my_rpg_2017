/*
** EPITECH PROJECT, 2018
** my_printf_detection.c
** File description:
** my_printf_detection
*/

#include "my_stdc.h"

int	go_over_argument_type(char const *format, int i,
		all_flags_t *all_flags, va_list ap)
{
	if (handle_case_long_long(format, &i, ap, all_flags))
		return (i);
	if (is_an_argument_type(format[i])) {
		print_argument(format[i], ap, all_flags);
		i++;
	}
	else if (format[i] == '%') {
		my_putchar('%');
		i++;
	} else {
		my_putchar('%');
		return (-1);
	}
	return (i);
}

int	handle_case_long_long(char const *format, int *i_2, va_list ap,
				all_flags_t *all_flags)
{
	int	i = *i_2;
	int	done = 0;

	while (format[i] == 'l') {
		i++;
	}
	if (print_multiple_l(i , *i_2)) {
		*i_2 = i;
		return (1);
	}
	done = display_long_d(format, &i, ap, all_flags);
	if (!done)
		done = display_long_u(format, &i, ap, all_flags);
	*i_2 = i;
	return (done);
}

int	display_long_d(char const *format, int *i2, va_list ap,
			all_flags_t *all_flags)
{
	int	done = 0;
	int	i = *i2;

	if (format[i] == 'd' || format[i] == 'i') {
		if (format[i - 1] == 'l' && format[i - 2] == 'l'
		&& format[i - 3] != 'l') {
			print_argument_lld(ap, all_flags);
			i++;
			done = 1;
		}
	}
	*i2 = i;
	return (done);
}

int	display_long_u(char const *format, int *i2, va_list ap,
			all_flags_t *all_flags)
{
	int	done = 0;
	int	i = *i2;

	if (format[i] == 'u') {
		if (format[i - 1] == 'l' && format[i - 2] != 'l') {
			print_argument_lu(ap, all_flags);
			i++;
			done = 1;
		}
		else if (format[i - 1] == 'l' && format[i - 2] == 'l'
		&& format[i - 3] != 'l') {
			print_argument_llu(ap, all_flags);
			i++;
			done = 1;
		}
	}
	*i2 = i;
	return (done);
}

int	print_multiple_l(int i, int i2)
{
	if (i > i2 + 2) {
		my_putchar('%');
		while (i != i2 + 2) {
			my_putchar('l');
			i--;
		}
		return (1);
	}
	return (0);
}
