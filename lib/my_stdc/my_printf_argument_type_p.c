/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_p.C
** File description:
** argument type_p
*/

#include "my_stdc.h"

void	print_argument_p(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	long long	nb = 0;

	nb = va_arg(ap, long long);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_p(nb, all_flags, width);
	my_putstr("0x");
	print_base_16_advanced_64_bits(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_16));
}

void	print_before_just_before_argument_p(long long nb,
						all_flags_t *all_flags,
						unsigned int width)
{
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	unsigned int	mode = all_flags->blank_or_zero;

	if (nbr_sign == NO && blank_flag == YES)
		my_putchar(' ');
	if (nbr_sign == YES && mode == ZERO && nb >= 0)
		my_putchar(get_number_sign(nb));
	if (all_flags->left_justify == NO)
		print_blank(mode, width - get_nbr_size(nb, BASE_16));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}

void	print_base_16_advanced_64_bits(long long nb)
{
	char	remainder = 0;

	if (nb >= 0) {
		if (nb >= 16)
			print_base_16_advanced_64_bits(nb / 16);
		remainder = (nb % 16) + '0';
		if (remainder > '9')
			remainder = associate_base_16(remainder);
		my_putchar(remainder);
	} else
		print_base_16_super_advanced_64((0xffffffffffffffff + nb) + 1);
}

void	print_base_16_super_advanced_64(unsigned long long nb)
{
	char	remainder = 0;

	if (nb >= 16)
		print_base_16_super_advanced_64(nb / 16);
	remainder = (nb % 16) + '0';
	if (remainder > '9')
		remainder = associate_base_16(remainder);
	my_putchar(remainder);
}
