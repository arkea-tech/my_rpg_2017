/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** Man printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_stdc.h"

/*
**			Printf format identifiers :
**  %		Flags		Minimun field width	Argument Type
** Required	Optional	Optional		Required
*/
int	my_printf(char const *format, ...)
{
	va_list		ap;
	unsigned int	i = 0;

	va_start(ap, format);
	while (format[i] != '\0') {
		if (display_char_and_execute_modulo(format, &i, ap) == 84)
			return (84);
	}
	va_end(ap);
	return (0);
}

int	display_char_and_execute_modulo(char const *format, unsigned int *i,
					va_list ap)
{
	if (format[*i] == '%') {
		if (detect_and_execute_flag(format, i , ap) == 84)
			return (84);
	} else {
		my_putchar(format[*i]);
		(*i)++;
	}
	return (0);
}
