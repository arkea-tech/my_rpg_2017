/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** returns the diff between two str, parse only n letters
*/

#include <stdlib.h>
#include "my_stdc.h"

int	my_strncmp(char const *s1, char const *s2, int nb)
{
	int		i = 0;
	char const	*longer_str;
	char const	*smaller_str;

	smaller_str = get_smaller_str(s1, s2);
	longer_str = get_longest_str(s1, s2);
	while (longer_str[i] != '\0' && i < nb) {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (smaller_str[i] == '\0' && longer_str[i] != '\0' && i != nb)
			return (check_not_same_size(smaller_str, s1, s2, i));
	}
	return (0);
}
