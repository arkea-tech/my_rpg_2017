/*
** EPITECH PROJECT, 2018
** str_manip_eval_expr.c
** File description:
** function that manip str
*/

#include <stdlib.h>
#include "my_stdc.h"

char	*truncate_str(char const *str, int index1 , int index2)
{
	char	*new_str = NULL;

	if (index2 < index1)
		return (NULL);
	new_str = malloc((index2 - index1 + 2));
	if (new_str == NULL)
		return (NULL);
	my_strncpy(new_str, str + index1, index2 - index1 + 1);
	new_str[index2 - index1 + 1] = '\0';
	return (new_str);
}
