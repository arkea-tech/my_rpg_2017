/*
** EPITECH PROJECT, 2018
** infin_read_str.c
** File description:
** infin_read_str from a FILE created with fopen
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my_stdc.h"

static char	*end_the_loop_read_str(	char	*str,
				size_t	size,
				int	*first_loop,
				int	read_char)
{
	if (read_char == buffer_size_g)
		*first_loop = 0;
	if (read_char < buffer_size_g && *first_loop) {
		str[read_char] = '\0';
		*first_loop = 3;
		return (str);
	}
	str = my_recalloc_str(str, size + buffer_size_g + 1);
	if (str == NULL)
		return (NULL);
	if (read_char < buffer_size_g && !(*first_loop)) {
		str[size + buffer_size_g] = '\0';
		*first_loop = 3;
		return (str);
	}
	return (str);
}

/*
** Read from a FILE from an fopen. Uses fread
*/
char	*infin_read_str(FILE *file_descriptor)
{
	char	*str = my_calloc_str(buffer_size_g + 1);
	size_t	size = buffer_size_g;
	int	read_char = 0;
	int	first_loop = 1;

	if (str == NULL)
		return (NULL);
	while (1) {
		read_char = fread(str + (size - buffer_size_g),
				sizeof(char), buffer_size_g, file_descriptor);
		str = end_the_loop_read_str(str, size, &first_loop, read_char);
		if (first_loop == 3)
			break;
		size = size + buffer_size_g;
	}
	return (str);
}

/*
** Main function
*/
char	*get_str_from_filename(char const *filename)
{
	FILE	*file = NULL;
	char	*str = NULL;

	file = fopen(filename, "r");
	if (file == NULL) {
		my_putstr_err("This file does not exist\n");
		return (NULL);
	}
	str = infin_read_str(file);
	fclose(file);
	return (str);
}
