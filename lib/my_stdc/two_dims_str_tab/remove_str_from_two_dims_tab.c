/*
** EPITECH PROJECT, 2018
** remove_str_from_two_dims_tab.c
** File description:
** remove a str from a table of str based on its index
*/

#include <stdlib.h>
#include "my_stdc.h"

char	**remove_str_from_two_dims_tab(char **tab, int index)
{
	int	i = index;
	char	**new_tab = NULL;

	free(tab[i]);
	while (tab[i] != NULL) {
		tab[i] = tab[i + 1];
		i++;
	}
	new_tab = strdup_two_dims_str_tab(tab);
	if (new_tab == NULL)
		return (NULL);
	i = 0;
	while (tab[i] != NULL) {
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	return (new_tab);
}
