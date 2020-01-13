/*
** EPITECH PROJECT, 2018
** my_printf_type_o_b.c
** File description:
** Handle argument type o or b
*/

#include "my_stdc.h"

void	print_argument_o(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	unsigned int	prefix_flag = all_flags->prefix_flag;
	int		nb = 0;

	nb = va_arg(ap, int);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0)
	|| prefix_flag == YES)
		width--;
	print_before_just_before_argument_o(nb, all_flags, width);
	print_base_8_advanced(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_8));
}

void	print_before_just_before_argument_o(int nb, all_flags_t *all_flags,
						unsigned int width)
{
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	unsigned int	mode = all_flags->blank_or_zero;
	unsigned int	prefix_flag = all_flags->prefix_flag;

	if (nbr_sign == NO && blank_flag == YES)
		my_putchar(' ');
	if (prefix_flag == YES)
		my_putchar('0');
	if (nbr_sign == YES && mode == ZERO && nb >= 0)
		my_putchar(get_number_sign(nb));
	if (all_flags->left_justify == NO)
		print_blank(mode, width - get_nbr_size(nb, BASE_8));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}

void	print_argument_b(va_list ap, all_flags_t *all_flags)
{
	unsigned int	width = all_flags->field_width;
	unsigned int	nbr_sign = all_flags->display_number_sign;
	unsigned int	blank_flag = all_flags->blank_flag;
	int		nb = 0;

	nb = va_arg(ap, int);
	if (nbr_sign == YES || nb < 0 || (blank_flag == YES && nb >= 0))
		width--;
	print_before_just_before_argument_b(nb, all_flags, width);
	print_base_2_advanced(nb);
	if (all_flags->left_justify == YES)
		print_blank(BLANK, width - get_nbr_size(nb, BASE_2));
}

void	print_before_just_before_argument_b(int nb, all_flags_t *all_flags,
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
		print_blank(mode, width - get_nbr_size(nb, BASE_2));
	if (nbr_sign == YES && mode == BLANK && nb >= 0)
		my_putchar(get_number_sign(nb));
}
