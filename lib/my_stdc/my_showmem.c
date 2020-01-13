/*
** EPITECH PROJECT, 2018
** my_showmem.c
** File description:
** No idea yet
*/

#include "my_stdc.h"

int	my_showmem(char const *str, int size)
{
	int	i2 = 0;
	int	line = 0;

	while (i2 < size) {
		print_base_16_advanced((long)str + (line * 16));
		my_putstr(": ");
		for (int i = 0 ; i < 16 ; i += 2) {
			print_two_letters(str[i2], str[i2 + 1], i2, size);
			i2 = i2 + 2;
		}
			line++;
		my_putnstr_printable(str + ((line - 1) * 16), 16, i2, size);
		my_putchar('\n');
	}
	return (0);
}

void	my_putnstr_printable(char const *str, unsigned int n, int i2, int size)
{
	i2 -= 16;
	for (unsigned int i = 0 ; i < n && i2 < size ; ++i) {
		if (!is_printable(str[i]))
			my_putchar('.');
		else
			my_putchar(str[i]);
		++i2;
	}
}

void	print_two_letters(char a, char b, int i2, int size)
{
	if (i2 < size) {
		if (a < 16)
			my_putchar('0');
		print_base_16(a);
		if (i2 < size - 1) {
			if (b < 16)
				my_putchar('0');
			print_base_16(b);
			my_putchar(' ');
		} else
			my_putstr("   ");

	} else
		my_putstr("     ");
}

void	print_base_16_advanced(int nb)
{
	char	remainder = 0;

	if (nb >= 0) {
		if (nb >= 16)
			print_base_16(nb / 16);
		remainder = (nb % 16) + '0';
		if (remainder > '9')
			remainder = associate_base_16(remainder);
		my_putchar(remainder);
	} else
		print_base_16_super_advanced((4294967295 + nb) + 1);
}

void	print_base_16_super_advanced(unsigned long nb)
{
	char	remainder = 0;

	if (nb >= 16)
		print_base_16(nb / 16);
	remainder = (nb % 16) + '0';
	if (remainder > '9')
		remainder = associate_base_16(remainder);
	my_putchar(remainder);
}
