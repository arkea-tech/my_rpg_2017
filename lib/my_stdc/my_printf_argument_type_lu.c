/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_lu.c
** File description:
** %lu
*/

#include "my_stdc.h"

void	print_argument_lu(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	long		nb = 0;

	nb = va_arg(ap, long);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_lu(nb , all_flags, width);
	print_longlong_negativ_nbr_without_neg_sign(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_10));
}

void	print_before_just_before_argument_lu(long nb, all_flags_t *all_flags,
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
		print_blank(mode, width - get_nbr_size(nb, BASE_10));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}

void	print_argument_lld(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	long long	nb = 0;

	nb = va_arg(ap, long long);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_lld(nb , all_flags, width);
	my_put_nbr_long_long(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_10));
}

void	print_before_just_before_argument_lld(long long nb,
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
