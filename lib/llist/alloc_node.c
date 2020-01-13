/*
** EPITECH PROJECT, 2018
** alloc_node.c
** File description:
** alloc_node
*/

#include <stdlib.h>
#include "llist.h"

/*
** Returns first elem of the llist
*/
llist_t	*delete_node(llist_t *first_node, llist_t *node)
{
	llist_t	*tmp = NULL;
	llist_t	*prev = NULL;

	if (first_node == node) {
		tmp = node->next;
		free_2_items(node->data, node);
		return (tmp);
	}
	if (first_node->next == NULL)
		return (free_2_items(first_node->data, first_node));
	tmp = first_node;
	while (tmp->next != node)
		tmp = tmp->next;
	prev = tmp;
	tmp = tmp->next->next;
	prev->next = tmp;
	free_2_items(node->data, node);
	return (first_node);
}

llist_t	*delete_node_except_data(llist_t *first_node, llist_t *node)
{
	llist_t	*tmp = NULL;
	llist_t	*prev = NULL;

	if (first_node == node) {
		tmp = node->next;
		free(node);
		return (tmp);
	}
	if (first_node->next == NULL) {
		tmp = node->next;
		return (free_1_item(first_node));
	}
	tmp = first_node;
	while (tmp->next != node)
		tmp = tmp->next;
	prev = tmp;
	tmp = tmp->next->next;
	prev->next = tmp;
	free(node);
	return (first_node);
}

llist_t	*new_node_fct(llist_t *node)
{
	node = malloc(sizeof(llist_t));
	if (node == NULL)
		return (NULL);
	node->sort_int = 0;
	node->sort_str = NULL;
	node->data = NULL;
	node->next = NULL;
	return (node);
}
