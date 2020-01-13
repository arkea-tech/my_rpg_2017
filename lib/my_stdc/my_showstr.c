/*
** EPITECH PROJECT, 2018
** my_showstr.c
** File description:
** No idea yet
*/

#include "my_stdc.h"

int	my_showstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!is_printable(str[i])) {
			print_backslash_zero(str[i]);
			print_base_16(str[i]);
		} else
			my_putchar(str[i]);
		i++;
	}
	return (0);
}

void	print_backslash_zero(char c)
{
	my_putchar('\\');
	if (c < 16)
		my_putchar('0');
}

char	associate_base_16(char remainder)
{
	switch (remainder) {
	case ('9' + 1):
		remainder = 'a';
		break;
	case ('9' + 2):
		remainder = 'b';
		break;
	case ('9' + 3):
		remainder = 'c';
		break;
	case ('9' + 4):
		remainder = 'd';
		break;
	}
	if (remainder > ('9' + 4))
		remainder = associate_base_16_2(remainder);
	return (remainder);
}

char	associate_base_16_2(char remainder)
{
	if (remainder == ('9' + 5))
		remainder = 'e';
	else if (remainder == ('9' + 6))
		remainder = 'f';
	return (remainder);
}

void	print_base_16(int nb)
{
	char	remainder = 0;

	if (nb >= 16)
		print_base_16(nb / 16);
	remainder = (nb % 16) + '0';
	if (remainder > '9')
		remainder = associate_base_16(remainder);
	my_putchar(remainder);
}
