/*
** EPITECH PROJECT, 2018
** add_str_to_begin_llist.c
** File description:
** Add a str to a list
*/

#include <stdlib.h>
#include "llist.h"

llist_t		*add_str_to_begin_llist(llist_t *list, char *str)
{
	llist_t		*new_node = malloc(sizeof(llist_t));

	if (new_node == NULL)
		return (NULL);
	new_node->data = str;
	new_node->next = NULL;
	if (list == NULL)
		return (new_node);
	new_node->next = list;
	return (new_node);
}
