/*
** EPITECH PROJECT, 2018
** my_printf_argument_type_number.c
** File description:
** %d handling %b
*/

#include "my_stdc.h"

void	print_argument_d(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	int nb = 0;

	nb = va_arg(ap, int);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_d(nb , all_flags, width);
	my_put_nbr(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_10));
}

void	print_before_just_before_argument_d(int nb, all_flags_t *all_flags,
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

void	print_argument_x(va_list ap, all_flags_t *all_flags)
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
	print_base_16_advanced(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_16));
}

void	print_before_just_before_argument_x(int nb, all_flags_t *all_flags,
						unsigned int width)
{
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	unsigned int	mode = all_flags->blank_or_zero;
	unsigned int	prefix_flag = all_flags->prefix_flag;

	if (nbr_sign == NO && blank_flag == YES)
		my_putchar(' ');
	if (prefix_flag == YES)
		my_putstr("0x");
	if (nbr_sign == YES && mode == ZERO && nb >= 0)
		my_putchar(get_number_sign(nb));
	if (all_flags->left_justify == NO)
		print_blank(mode, width - get_nbr_size(nb, BASE_16));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}
