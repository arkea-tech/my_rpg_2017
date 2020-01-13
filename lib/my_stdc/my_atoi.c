/*
** EPITECH PROJECT, 2018
** my_atoi.c
** File description:
** man atoi
*/

#include "my_stdc.h"

int	my_atoi(char const *str)
{
	int i = 0;
	int negative_sign = 0;
	int result = 0;

	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			negative_sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	if (negative_sign)
		return (-result);
	else
		return (result);
}

long	my_atol(char const *str)
{
	int i = 0;
	int negative_sign = 0;
	long result = 0;

	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			negative_sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	if (negative_sign)
		return (-result);
	else
		return (result);
}
