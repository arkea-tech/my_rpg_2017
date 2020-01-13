/*
** EPITECH PROJECT, 2018
** get_size_two_dims_tab.c
** File description:
** get_size of a two dim table
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Table MUST be NULL terminated !
** e.g A tab that contains : "fifo" "foo" "NULL". This function will return 2.
*/
int	get_size_two_dims_tab(void **tab)
{
	int i = 0;

	while (tab[i] != NULL)
		++i;
	return (i);
}

/*
** Tab must be NULL terminated !
*/
size_2d_t	get_size_2d_tab_str(char **tab)
{
	size_2d_t	size_map;

	size_map.height = get_size_two_dims_tab((void **)tab);
	if (size_map.height > 0)
		size_map.width = my_strlen(tab[0]);
	else
		size_map.width = 0;
	return (size_map);
}
