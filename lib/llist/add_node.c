/*
** EPITECH PROJECT, 2018
** add_node.c
** File description:
** add_to_the_beginning or the end of the llist
*/

#include <stdlib.h>
#include "llist.h"

llist_t	*add_to_begin_llist(llist_t *first_node, void *data)
{
	llist_t	*new_node = NULL;

	new_node = new_node_fct(new_node);
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	if (first_node == NULL)
		return (new_node);
	new_node->next = first_node;
	return (new_node);
}

llist_t	*add_to_end_llist(llist_t *first_node, void *data)
{
	llist_t	*new_node = NULL;
	llist_t	*tmp = first_node;

	new_node = new_node_fct(new_node);
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	if (first_node == NULL)
		return (new_node);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (first_node);
}
