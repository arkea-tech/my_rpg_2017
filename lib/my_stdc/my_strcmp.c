/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** returns the diff between two str
*/

#include <stdlib.h>
#include "my_stdc.h"

int	check_not_same_size(char const *smaller_str,
				char const *s1, char const *s2, int i)
{
	if (smaller_str == s2) {
		return (s1[i] - 0);
	}
	else
		return (0 - s2[i]);
}

char const *get_smaller_str(char const *s1, char const *s2)
{
	size_t		size_s1 = my_strlen(s1);
	size_t		size_s2 = my_strlen(s2);

	if (size_s1 >= size_s2)
		return (s2);
	else
		return (s1);
}

char const *get_longest_str(char const *s1, char const *s2)
{
	size_t		size_s1 = my_strlen(s1);
	size_t		size_s2 = my_strlen(s2);

	if (size_s1 >= size_s2)
		return (s1);
	else
		return (s2);
}

int	my_strcmp(char const *s1, char const *s2)
{
	int		i = 0;
	char const	*longer_str;
	char const	*smaller_str;

	smaller_str = get_smaller_str(s1, s2);
	longer_str = get_longest_str(s1, s2);
	while (longer_str[i] != '\0') {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
		if (smaller_str[i] == '\0' && longer_str[i] != '\0')
			return (check_not_same_size(smaller_str, s1, s2, i));
	}
	return (0);
}
