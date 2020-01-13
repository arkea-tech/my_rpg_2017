/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_lld_lu_llu.c
** File description:
** my_printf long long
*/

#include "my_stdc.h"

void	print_argument_llu(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	long long		nb = 0;

	nb = va_arg(ap, long long);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_llu(nb , all_flags, width);
	print_longlong_negativ_nbr_without_neg_sign(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_10));
}

void	print_before_just_before_argument_llu(long long nb,
				all_flags_t *all_flags, unsigned int width)
{
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	unsigned int	mode = all_flags->blank_or_zero;

	if (nbr_sign == NO && blank_flag == YES)
		my_putchar(' ');
	if (nbr_sign == YES && mode == ZERO && nb >= 0)
		my_putchar(get_number_sign(nb));
	if (all_flags->left_justify == NO)
		print_blank(mode, width - get_nbr_size(nb, BASE_10));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}

void	print_longlong_negativ_nbr_without_neg_sign(long long nb)
{
	unsigned long long max = 0xffffffffffffffff;

	if (nb >= 0)
		my_put_nbr_long_long(nb);
	else
		print_longlong_without_neg_sign_advanced((max+ nb) + 1);
}

void	print_longlong_without_neg_sign_advanced(unsigned long long nb)
{
	char	remainder = 0;

	if (nb >= 10)
		print_longlong_negativ_nbr_without_neg_sign(nb / 10);
	remainder = (nb % 10) + '0';
	my_putchar(remainder);
}
