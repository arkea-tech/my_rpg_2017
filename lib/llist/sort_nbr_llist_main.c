/*
** EPITECH PROJECT, 2018
** sort_nbr_main.c
** File description:
** sort_a_llist_filled_with nbr
*/

#include <stdlib.h>
#include "llist.h"

/*
** Check once if the list isn't already sorted then starts the sort algorithm
*/
llist_t	*bubble_sort_llist_nb(llist_t *list,
				long (*sort_fct)(long, long))
{
	llist_t	*list_b = NULL;
	push_t	*push = NULL;
	llist_t *sorted_list = NULL;

	if (list == NULL)
		return (NULL);
	if (is_sorted_nb(list, sort_fct) == not_sorted_g)
		return (list);
	push = initialisation_push();
	sorted_list = bubble_sort_llist_rec_nb(list, list_b, push, sort_fct);
	free(push);
	return (sorted_list);
}

/*
** Recursively sort the list_one
*/
llist_t	*bubble_sort_llist_rec_nb(	llist_t	*list_one,
					llist_t *list_two,
					push_t	*push,
					long	(*sort_fct)(long, long))
{
	if (push->push_depush == PUSH)
		push->sorted = is_sorted_nb(list_one, sort_fct);
	if (push->sorted == not_sorted_g)
		return (list_one);
	if (list_one->next != NULL) {
		if (sort_fct(	list_one->sort_int,
				list_one->next->sort_int) > 0) {
			list_one = swap(list_one);
			return (bubble_sort_llist_rec_nb(	list_one,
								list_two,
								push,
								sort_fct));
		}
	}
	apply_pa_or_pb(push, &list_one, &list_two);
	return (bubble_sort_llist_rec_nb(list_one, list_two, push, sort_fct));
}

/*
** Returns the amount of sorted items
** Returns not_sorted_g if the llist is sorted
*/
int	is_sorted_nb(llist_t *list_one, long (*sort_fct)(long, long))
{
	llist_t	*tmp = list_one;
	int	i = 0;

	while (tmp->next != NULL) {
		if (sort_fct(	tmp->sort_int,
				tmp->next->sort_int) > 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (not_sorted_g);
}

/*
** This fct can be used to do basic ascending sorting
** n2 - n1 sorts in ascending order
** n1 - 2 sorts in descending order
*/
long	get_nb_diff(long n1, long n2)
{
	if (n1 < n2 || n1 > n2)
		return (n2 - n1);
	else
		return (0);
}
