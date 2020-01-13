/*
** EPITECH PROJECT, 2018
** my_pushswap_1.c
** File description:
** my_pushswap.c
*/

#include <stdlib.h>
#include "llist.h"
#include "my_stdc.h"

/*
** Check once if the list isn't already sorted then starts the sort algorithm
*/
llist_t	*bubble_sort_llist_str(llist_t *list,
				int (*sort_fct)(char const *, char const *))
{
	llist_t	*list_b = NULL;
	push_t	*push = NULL;
	llist_t *sorted_list = NULL;

	if (list == NULL)
		return (NULL);
	if (is_sorted(list, sort_fct) == not_sorted_g)
		return (list);
	push = initialisation_push();
	sorted_list = bubble_sort_llist_rec(list, list_b, push, sort_fct);
	free(push);
	return (sorted_list);
}

/*
** Recursively sort the list_one
*/
llist_t	*bubble_sort_llist_rec(	llist_t	*list_one,
				llist_t *list_two,
				push_t	*push,
			int	(*sort_fct)(char const *, char const *))
{
	if (push->push_depush == PUSH)
		push->sorted = is_sorted(list_one, sort_fct);
	if (push->sorted == not_sorted_g)
		return (list_one);
	if (list_one->next != NULL) {
		if (is_superior_ignore_case(sort_fct,
						list_one->sort_str,
						list_one->next->sort_str) > 0) {
			list_one = swap(list_one);
			return (bubble_sort_llist_rec(	list_one,
							list_two,
							push, sort_fct));
		}
	}
	apply_pa_or_pb(push, &list_one, &list_two);
	return (bubble_sort_llist_rec(list_one, list_two, push, sort_fct));
}

void	apply_pa_or_pb(push_t *push, llist_t **list_one, llist_t **list_two)
{
	switch (push->push_depush) {
	case PUSH:
		push_x_time(list_one, list_two, push->sorted);
		push->push_depush = DEPUSH;
		break;
	default:
		push_x_time(list_two, list_one, push->sorted);
		push->push_depush = PUSH;
		break;
	}
}

/*
** Compare both string with a sort fct. The comparaison ignores the case.
*/
int	is_superior_ignore_case(int (*sort_fct)(char const *, char const *),
				char const *str_1,
				char const *str_2)
{
	char	*str_1_cpy = my_strdup(str_1);
	char	*str_2_cpy = my_strdup(str_2);
	int	result = 0;

	if (str_1_cpy == NULL || str_2_cpy == NULL)
		return (EXIT_ERROR);
	str_1_cpy = my_strupcase(str_1_cpy);
	str_2_cpy = my_strupcase(str_2_cpy);
	result = sort_fct(str_1_cpy, str_2_cpy);
	free(str_1_cpy);
	free(str_2_cpy);
	return (result);
}

int	free_3_items(llist_t *list_one, llist_t *list_two, push_t *push)
{
	free_llist(list_one);
	free_llist(list_two);
	free(push);
	return (0);
}
