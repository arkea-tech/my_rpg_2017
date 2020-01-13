/*
** EPITECH PROJECT, 2018
** free_two_dims_tab.c
** File description:
** Free a two dimension table
*/

#include <stdlib.h>

/*
** Tab MUST be NULL terminated !
*/
void	*free_two_dims_tab(void **tab)
{
	int i = 0;

	while (tab[i] != NULL) {
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	return (NULL);
}
