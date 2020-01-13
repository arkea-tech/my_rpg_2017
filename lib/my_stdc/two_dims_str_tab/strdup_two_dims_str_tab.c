/*
** EPITECH PROJECT, 2018
** strdup_two_dims_str_tab.c
** File description:
** Copy a char ** into another one. New adresses
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Table must be NULL terminated !
*/
char	**strdup_two_dims_str_tab(char **tab)
{
	int	i = 0;
	char	**new_tab = NULL;
	int	nb_elem = get_size_two_dims_tab((void **)tab);

	new_tab = malloc((nb_elem + 1) * sizeof(char *));
	if (new_tab == NULL)
		return (NULL);
	while (i < nb_elem) {
		new_tab[i] = my_strdup(tab[i]);
		if (new_tab[i] == NULL)
			return (NULL);
		i++;
	}
	new_tab[i] = NULL;
	return (new_tab);
}
