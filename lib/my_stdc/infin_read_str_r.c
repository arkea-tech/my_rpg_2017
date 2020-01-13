/*
** EPITECH PROJECT, 2018
** get_str_from_filename_r
** File description:
** infin_read
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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

static char	*infin_read_str_r(int map)
{
	char	*str = my_calloc_str(buffer_size_g + 1);
	size_t	size = buffer_size_g;
	int	read_char = 0;
	int	first_loop = 1;

	if (str == NULL)
		return (NULL);
	while (1) {
		read_char = read(map, str + (size - buffer_size_g),
								buffer_size_g);
		str = end_the_loop_read_str(str, size, &first_loop, read_char);
		if (first_loop == 3)
			break;
		size = size + buffer_size_g;
	}
	return (str);
}

/*
** Same as below, diff is that I havent got the right to use fopen fread fclose
*/
char	*get_str_from_filename_r(char *filename)
{
	int	file = 0;
	char	*str = NULL;

	file = open(filename, O_RDONLY);
	if (file == -1) {
		my_putstr_err("This file does not exist\n");
		return (NULL);
	}
	str = infin_read_str_r(file);
	close(file);
	return (str);
}
