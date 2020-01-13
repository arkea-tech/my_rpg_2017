/*
** EPITECH PROJECT, 2018
** read_next_n_bytes.c
** File description:
** read n bytes
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_stdc.h"

char	*read_next_n_bytes(int fd, int n)
{
	char	*read_str = malloc(n + 1);
	int	len = 0;

	if (read_str == NULL)
		return (NULL);
	len = read(fd, read_str, n);
	if (len == -1) {
		free(read_str);
		my_putstr_err("read failed\n");
		return (NULL);
	}
	read_str[len] = '\0';
	return (read_str);
}
