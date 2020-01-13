/*
** EPITECH PROJECT, 2018
** free_llist.c
** File description:
** free_list
*/

#include <stdlib.h>
#include "llist.h"

void	*free_1_item(void *item)
{
	free(item);
	return (NULL);
}

void	*free_2_items(void *item_1, void *item_2)
{
	free(item_1);
	free(item_2);
	return (NULL);
}
