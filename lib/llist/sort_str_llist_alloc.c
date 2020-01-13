/*
** EPITECH PROJECT, 2018
** pushswap_2.C
** File description:
** sort numbers
*/

#include <stdlib.h>
#include "llist.h"

/*
** Apply the function push() multiple times
*/
int	push_x_time(	llist_t	**list_one,
			llist_t	**list_two,
			int	x)
{
	while (x != 0) {
		push(list_one, list_two);
		--x;
	}
	return (0);
}

/*
** Returns the amount of sorted items
** Returns -1 if the llist is sorted
*/
int	is_sorted(llist_t *list_one,
			int (*sort_fct)(char const *, char const *))
{
	llist_t	*tmp = list_one;
	int	i = 0;

	while (tmp->next != NULL) {
		if (is_superior_ignore_case(	sort_fct,
						tmp->sort_str,
						tmp->next->sort_str) > 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (not_sorted_g);
}

llist_t *add_to_begin_file_llist(llist_t *all_files, char *str)
{
	llist_t	*new_node = NULL;

	new_node = malloc(sizeof(llist_t));
	if (new_node == NULL)
		return (NULL);
	new_node->sort_str = str;
	new_node->next = all_files;
	return (new_node);
}

void	free_llist(llist_t *head)
{
	if (head == NULL)
		return;
	free_llist(head->next);
	free(head);
}

push_t	*initialisation_push(void)
{
	push_t	*push = NULL;

	push = malloc(sizeof(push_t));
	if (push == NULL)
		return (NULL);
	push->push_depush = PUSH;
	push->sorted = 0;
	return (push);
}
