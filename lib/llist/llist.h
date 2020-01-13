/*
** EPITECH PROJECT, 2018
** llist.h
** File description:
** llist.h
*/

#ifndef		_LLIST_H_
#	define	_LLIST_H_

typedef struct llist_s {
	int		sort_int;
	char		*sort_str;
	void		*data;
	struct llist_s	*next;
} llist_t;

typedef struct push_s		push_t;
struct	push_s {
	int push_depush;
	int sorted;
};

enum	bubble_sort_push {
	PUSH,
	DEPUSH
};

static const int	not_sorted_g = -900;

/* Llist manipulation */
llist_t	*new_node_fct(llist_t *node);
llist_t	*delete_node(llist_t *first_node, llist_t *node);
llist_t	*delete_node_except_data(llist_t *first_node, llist_t *node);
llist_t	*add_to_begin_llist(llist_t *first_node, void *data);
llist_t	*add_to_end_llist(llist_t *first_node, void *data);
/*
** Sort llist
*/
llist_t	*bubble_sort_llist_str(llist_t *list,
				int (*sort_fct)(char const *, char const *));
llist_t	*bubble_sort_llist_rec(	llist_t	*list_one,
				llist_t *list_two,
				push_t	*push,
			int	(*sort_fct)(char const *, char const *));
void	apply_pa_or_pb(push_t *push, llist_t **list_one, llist_t **list_two);
int	free_3_items(llist_t *list_one, llist_t *list_two, push_t *push);
int	is_sorted(llist_t *list_one,
			int (*sort_fct)(char const *, char const *));
int	push_x_time(	llist_t	**list_one,
			llist_t	**list_two,
			int	x);
llist_t *add_to_begin_file_llist(llist_t *all_files, char *name);
void	free_llist(llist_t *head);
push_t	*initialisation_push(void);
int	push(llist_t **list_one, llist_t **list_two);
int	swap_both_list(llist_t *list_one, llist_t *list_two);
llist_t	*swap(llist_t *first_node);
int	is_superior_ignore_case(int (*sort_fct)(char const *, char const *),
				char const *str_1,
				char const *str_2);
llist_t	*bubble_sort_llist_rec_nb(	llist_t	*list_one,
					llist_t *list_two,
					push_t	*push,
					long	(*sort_fct)(long, long));
llist_t	*bubble_sort_llist_nb(llist_t *list,
				long (*sort_fct)(long, long));
int	is_sorted_nb(llist_t *list_one, long (*sort_fct)(long, long));
long	get_nb_diff(long n1, long n2);
llist_t		*add_str_to_begin_llist(llist_t *list, char *str);
char	*my_strupcase_r(char *str);

/* Practical functions */
void	*free_1_item(void *item);
void	*free_2_items(void *item_1, void *item_2);

#endif /* _LLIST_H_ */
