/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_X.c
** File description:
** argument type %X
*/

#include "my_stdc.h"

void	print_argument_big_x(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	int nb = 0;

	nb = va_arg(ap, int);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	if (all_flags->prefix_flag == YES)
		width = width - 2;
	print_before_just_before_argument_x(nb, all_flags, width);
	print_base_16_advanced_caps(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_16));
}

void	print_base_16_advanced_caps(int nb)
{
	char	remainder = 0;

	if (nb >= 0) {
		if (nb >= 16)
			print_base_16_advanced_caps(nb / 16);
		remainder = (nb % 16) + '0';
		if (remainder > '9')
			remainder = associate_base_16_caps(remainder);
		my_putchar(remainder);
	} else
		print_base_16_super_advanced_caps((4294967295 + nb) + 1);
}

void	print_base_16_super_advanced_caps(unsigned long nb)
{
	char	remainder = 0;
	if (nb >= 16)
		print_base_16_advanced_caps(nb / 16);
	remainder = (nb % 16) + '0';
	if (remainder > '9')
		remainder = associate_base_16_caps(remainder);
	my_putchar(remainder);
}

char	associate_base_16_caps(char remainder)
{
	switch (remainder) {
	case ('9' + 1):
		remainder = 'A';
		break;
	case ('9' + 2):
		remainder = 'B';
		break;
	case ('9' + 3):
		remainder = 'C';
		break;
	case ('9' + 4):
		remainder = 'D';
		break;
	}
	if (remainder > ('9' + 4))
		remainder = associate_base_16_2_caps(remainder);
	return (remainder);
}

char	associate_base_16_2_caps(char remainder)
{
	if (remainder == ('9' + 5))
		remainder = 'E';
	else if (remainder == ('9' + 6))
		remainder = 'F';
	return (remainder);
}
