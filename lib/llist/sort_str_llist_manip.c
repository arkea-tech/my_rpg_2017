/*
** EPITECH PROJECT, 2018
** my_pushswap_manip_function.c
** File description:
** my_pushswap.c
*/

#include <stdlib.h>
#include "my_stdc.h"
#include "llist.h"

/*
** Swap the first two elements of the list
*/
llist_t	*swap(llist_t *first_node)
{
	llist_t	*tmp = NULL;

	if (first_node->next == NULL)
		return (first_node);
	tmp = first_node->next;
	first_node->next = tmp->next;
	tmp->next = first_node;
	return (tmp);
}

/*
** Swap first elements of both list
*/
int	swap_both_list(llist_t *list_one, llist_t *list_two)
{
	list_one = swap(list_one);
	list_two = swap(list_two);
	return (0);
}

/*
** Take the first element from the list_one and put it at list_two's beginning.
** List one --> List two
*/
int	push(llist_t **list_one, llist_t **list_two)
{
	llist_t	*head_list_one = NULL;
	llist_t	*head_list_two = NULL;

	if (list_one == NULL)
		return (1);
	head_list_one = (*list_one)->next;
	(*list_one)->next = *list_two;
	head_list_two = *list_one;
	*list_one = head_list_one;
	*list_two = head_list_two;
	return (0);
}
