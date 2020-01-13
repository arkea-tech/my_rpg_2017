/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** concatenates two strings
*/

#include <stdlib.h>
#include "my_stdc.h"

char	*my_strcat(char *dest, char const *src)
{
	int i = 0;
	int i2 = 0;

	i = my_strlen(dest);
	while (src[i2] != '\0') {
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	handle_options(int option, char *s1, char *s2)
{
	switch (option) {
	case 1:
		free(s1);
		break;
	case 2:
		free(s2);
		break;
	case 3:
		free(s1);
		free(s2);
		break;
	default:
		break;
	}
}

/*
** Option = 1 : free s1
** Option = 2 : free s2
** Option = 3 : free s1 and s2
** Option = 0 : free nothing
*/
char	*my_strcat_alloc(char *s1, char *s2, uint8_t opt)
{
	char	*new_str = NULL;

	if (s1 == NULL && s2 != NULL)
		return (opt == 2 || opt == 3) ?
			my_strdup_free(s2) : my_strdup(s2);
	else if (s2 == NULL && s1 != NULL)
		return (opt == 1 || opt == 3) ?
			my_strdup_free(s1) : my_strdup(s1);
	new_str = malloc(my_strlen(s1) + my_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = my_strcpy(new_str, s1);
	new_str = my_strcat(new_str, s2);
	handle_options(opt, s1, s2);
	return (new_str);
}
