/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** locate a str into another str, returns pointer to the beginning of the str
*/

#include <stdlib.h>
#include "my_stdc.h"

static int	update_start(int start, int i)
{
	if (start == -1)
		return (i);
	else
		return (start);
}

static void	reset_i2_start(int *i2, int *start)
{
	*i2 = 0;
	*start = -1;
}

static int	reset_the_search(int start, int *i2, int i, dest_src_t both_str)
{
	char const	*str = both_str.str;
	char const	*to_find = both_str.to_find;

	reset_i2_start(i2, &start);
	if (str[i] == to_find[*i2]) {
		(*i2)++;
		start = update_start(start, i);
	}
	return (start);
}

static char const	*my_strstr_2(	char const	*str,
					char const	*to_find,
					int		i,
					int		i2)
{
	int		start = -1;
	dest_src_t	both_str = {str, to_find};

	while (str[i] != '\0') {
		if (str[i] == to_find[i2]) {
			++i2;
			start = update_start(start, i);
		} else
			start = reset_the_search(start, &i2, i, both_str);
		if (to_find[i2] == '\0')
			return (&str[start]);
		++i;
	}
	return (NULL);
}

char const	*my_strstr(char const *str, char const *to_find)
{
	if (to_find == NULL)
		return (str);
	else if (to_find[0] == '\0')
		return (str);
	return (my_strstr_2(str, to_find, 0, 0));
}
