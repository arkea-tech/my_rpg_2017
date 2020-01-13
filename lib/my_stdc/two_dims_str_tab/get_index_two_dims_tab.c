/*
** EPITECH PROJECT, 2018
** get_index_from_two_dims_tab.c
** File description:
** Looking for the index of a str into a tab of str
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Tab must be NULL terminated !
*/
int	get_index_two_dims_tab(char **tab, char *str)
{
	int i = 0;

	while (tab[i] != NULL) {
		if (my_strncmp(tab[i], str, my_strlen(str)) == 0)
			return (i);
		i++;
	}
	return (-1);
}
