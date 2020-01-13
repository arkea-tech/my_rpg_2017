/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** copy a new str with a new malloc from an old str
*/

#include <stdlib.h>
#include "my_stdc.h"

char	*my_strdup(char const *src)
{
	char *new_str = NULL;

	new_str = malloc(my_strlen(src) + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = my_strcpy(new_str, src);
	return (new_str);
}

char	*my_strdup_free(char *src)
{
	char *new_str = NULL;

	new_str = malloc(my_strlen(src) + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = my_strcpy(new_str, src);
	free(src);
	return (new_str);
}
