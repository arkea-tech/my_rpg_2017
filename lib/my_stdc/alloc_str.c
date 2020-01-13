/*
** EPITECH PROJECT, 2018
** alloc.c
** File description:
** alloc functions
*/

#include <stdlib.h>
#include "my_stdc.h"

/*
** Malloc a new string with a \0 at the beginning
*/
char	*new_string_fct(size_t size)
{
	char	*str = NULL;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

/*
** Realloc, only works for char *. Original realloc uses strcpy.
** My fct is better !
*/
char    *my_realloc_str(char *str, size_t new_size)
{
	char  *new_str = NULL;

	new_str = new_string_fct(new_size);
	if (new_str == NULL)
		return (NULL);
	if (str == NULL)
		return (new_str);
	new_str = my_strncpy(new_str, str, new_size / sizeof(char));
	free(str);
	return (new_str);
}

/*
** Create a str full of \0 then apply copy the str into the new_str.
** The purpose : it adds extra \0 at the end.
*/
char	*my_recalloc_str(char *str, size_t new_size)
{
	char	*new_str = NULL;

	new_str = my_calloc_str(new_size);
	if (new_str == NULL)
		return (NULL);
	if (str == NULL)
		return (new_str);
	new_str = my_strncpy(new_str, str, new_size / sizeof(char));
	free(str);
	return (new_str);
}

char	*my_calloc_str(size_t new_size)
{
	char		*new_str = NULL;
	unsigned int	i = 0;

	new_str = malloc(new_size);
	if (new_str == NULL)
		return (NULL);
	while (i < new_size / sizeof(char)) {
		new_str[i] = '\0';
		i++;
	}
	return (new_str);
}
