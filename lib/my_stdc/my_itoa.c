/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** int to char. base 10
*/

#include <stdlib.h>
#include "my_stdc.h"

static char	*my_itoa_2(int x, char *rev_result, int index)
{
	if (x == -2147483648) {
		rev_result = my_strcpy(rev_result, "-2147483648");
		return (rev_result);
	}
	else if (x < 0) {
		rev_result[index] = '-';
		my_itoa_2(-x, rev_result, index + 1);
	}
	if (x >= 10) {
		my_itoa_2(x / 10, rev_result, index + 1);
		rev_result[index] = x % 10 + '0';
	}
	else if (x >= 0 && x < 10) {
		rev_result[index] = x + '0';
		rev_result[index + 1] = '\0';
	}
	return (rev_result);
}

char	*my_itoa(int x)
{
	char	*result = NULL;
	int	ten = 0;

	for (int i = x ; i != 0 ; i = i / 10)
		++ten;
	result = malloc(ten + 3);
	if (result == NULL)
		return (NULL);
	result = my_itoa_2(x, result, 0);
	if (result[0] != '-')
		result = my_revstr(result);
	else
		my_revstr(result + 1);
	return (result);
}

static char	*my_itoa_2l(long x, char *rev_result, long index)
{
	if (x < 0) {
		rev_result[index] = '-';
		my_itoa_2l(-x, rev_result, index + 1);
	}
	if (x >= 10) {
		my_itoa_2l(x / 10, rev_result, index + 1);
		rev_result[index] = x % 10 + '0';
	}
	else if (x >= 0 && x < 10) {
		rev_result[index] = x + '0';
		rev_result[index + 1] = '\0';
	}
	return (rev_result);
}

char	*my_itoal(long x)
{
	char	*result = NULL;
	long	ten = 0;

	for (long i = x ; i != 0 ; i = i / 10)
		++ten;
	result = malloc(ten + 3);
	if (result == NULL)
		return (NULL);
	result = my_itoa_2l(x, result, 0);
	if (result[0] != '-')
		result = my_revstr(result);
	else
		my_revstr(result + 1);
	return (result);
}
