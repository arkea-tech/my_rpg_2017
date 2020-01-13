/*
** EPITECH PROJECT, 2018
** my_memset.c
** File description:
** my_memset.c
*/

#include <stddef.h>

/*
** Beforehand malloc (size + 1) the pointer.
*/
char	*my_memset_str(char *pointer, char c, size_t size)
{
	for (size_t i = 0 ; i < size ; ++i)
		pointer[i] = c;
	pointer[size] = '\0';
	return (pointer);
}
