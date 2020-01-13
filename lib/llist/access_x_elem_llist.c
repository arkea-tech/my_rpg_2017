/*
** EPITECH PROJECT, 2018
** access_x_elem_llist.c
** File description:
** Access_to_x elem inside a llist
*/

#include <stdlib.h>
#include "llist.h"

/*
** Browse the llist to reach the x th node. Returns node's variable "name".
*/
char	*access_elem_llist_name(llist_t *list, unsigned int x)
{
	llist_t		*tmp = list;

	for (unsigned int i = 0 ; tmp != NULL ; ++i) {
		if (i == x)
			return (tmp->data);
		tmp = tmp->next;
	}
	return (NULL);
}

/*
** Browse the llist to reach the x th node. Returns the current node.
*/
llist_t	*access_elem_llist(llist_t *folder_names, unsigned int x)
{
	llist_t		*tmp = folder_names;
	unsigned int	i = 0;

	while (tmp != NULL) {
		if (i == x)
			return (tmp);
		++i;
		tmp = tmp->next;
	}
	return (NULL);
}
