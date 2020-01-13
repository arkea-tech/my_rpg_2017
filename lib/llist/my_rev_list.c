/*
** EPITECH PROJECT, 2018
** my_rev_list.c
** File description:
** my_rev_list.c
*/

#include <stdlib.h>
#include "llist.h"

int	my_list_size(llist_t const *begin)
{
	size_t		size = 0;
	llist_t	*tmp = NULL;

	tmp = (llist_t *)begin;
	while (tmp != NULL) {
		size++;
		tmp = tmp->next;
	}
	return (size);
}

llist_t	*get_node_before(llist_t **begin, llist_t *tail)
{
	llist_t	*tmp = NULL;

	tmp = *begin;
	while (tmp->next != tail) {
		tmp = tmp->next;
	}
	return (tmp);
}

llist_t	*access_n_node(llist_t *begin, size_t size)
{
	unsigned int	i = 0;
	llist_t	*tmp = NULL;

	tmp = begin;
	while (i < size - 1) {
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

void	swap_node_first(llist_t **head, llist_t **tmp)
{
	*tmp = (*head)->next;
	(*head)->next = NULL;
	(*tmp)->next = *head;
}

void	my_rev_list(llist_t **begin)
{
	llist_t	*head;
	llist_t	*tmp;
	llist_t	*tmp_2;
	size_t		size;

	if (*begin == NULL)
		return;
	size = my_list_size(*begin);
	if (size == 1)
		return;
	head = *begin;
	tmp_2 = (*begin)->next->next;
	swap_node_first(&head, &tmp);
	while (tmp_2 != NULL) {
		head = tmp;
		tmp = tmp_2;
		tmp_2 = tmp_2->next;
		tmp->next = head;
	}
	*begin = tmp;
}
