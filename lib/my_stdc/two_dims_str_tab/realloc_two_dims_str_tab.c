/*
** EPITECH PROJECT, 2018
** realloc_two_dims_str_tab.c
** File description:
** Reduce size of increase size of a char **
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Tab MUST be NULL terminated !
*/
char	**realloc_two_dims_str_tab(char **tab, size_t size)
{
	char		**new_tab = NULL;
	unsigned int	nb_elem = 0;
	unsigned int	i = 0;
	unsigned int	max_elem = 0;

	new_tab = malloc(size);
	if (tab == NULL)
		return (new_tab);
	nb_elem = get_size_two_dims_tab((void **)tab);
	max_elem = (size / sizeof(char *) \
		< nb_elem ? size / sizeof(char *) : nb_elem);
	while (i < max_elem) {
		new_tab[i] = my_strdup(tab[i]);
		if (new_tab[i] == NULL)
			return (NULL);
		i++;
	}
	new_tab[i] = NULL;
	free_two_dims_tab((void **)tab);
	return (new_tab);
}
