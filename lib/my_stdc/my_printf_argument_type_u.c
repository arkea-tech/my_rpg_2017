/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_u.c
** File description:
** argument handling %u
*/

#include "my_stdc.h"

void	print_argument_u(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	int		nb = 0;

	nb = va_arg(ap, int);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_u(nb , all_flags, width);
	print_base_10_negativ_nbr_without_neg_sign(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_10));
}

void	print_before_just_before_argument_u(int nb, all_flags_t *all_flags,
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

void	print_base_10_negativ_nbr_without_neg_sign(int nb)
{
	if (nb >= 0)
		my_put_nbr(nb);
	else
		print_base_10_without_neg_sign_advanced((4294967295 + nb) + 1);
}

void	print_base_10_without_neg_sign_advanced(unsigned long nb)
{
	char	remainder = 0;

	if (nb >= 10)
		print_base_10_negativ_nbr_without_neg_sign(nb / 10);
	remainder = (nb % 10) + '0';
	my_putchar(remainder);
}
