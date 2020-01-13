/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** transform a str into a array.
*/

#include <stdlib.h>
#include "my_stdc.h"

char **init_grid(unsigned int lines_nb)
{
	char	**grid = NULL;

	grid = malloc(sizeof(char *) * (lines_nb + 1));
	if (grid == NULL)
		return (NULL);
	grid[lines_nb] = NULL;
	return (grid);
}

static void fill_grid(unsigned int lines_nb, char *str, char delim, char **grid)
{
	unsigned int	start = 0;
	unsigned int	index = 0;
	unsigned int	i = 0;

	while (lines_nb > 0) {
		index = get_index_new_line(str, index, delim);
		grid[i] = truncate_str(str, start, index - 1);
		index += 1;
		start = index;
		i++;
		lines_nb--;
	}
}

/*
** There is a null pointer at the end of the table
** Two options : 1 removes \n at the end of the str if there is one
**		0 doesn't do option 1
**	Options have no effect if delim is equal to \n
*/
char	**my_str_to_line_array(char const *str_origin, char delim, int option)
{
	char		**grid = NULL;
	unsigned int	lines_nb = calc_amount_line(str_origin, delim, option);
	char		*str = NULL;

	grid = init_grid(lines_nb);
	if (str_origin[0] == '\0')
		return (grid);
	str = my_strdup(str_origin);
	if (str == NULL)
		return (NULL);
	if (option == 1 && str[my_strlen(str) - 1] == '\n')
		str = remove_char_from_str(str, my_strlen(str) - 1);
	fill_grid(lines_nb, str, delim, grid);
	free(str);
	return (grid);
}

unsigned int	calc_amount_line(char const *str, char delim, int option)
{
	unsigned int i = 0;
	unsigned int counter = 1;

	if ((option == 1 && str[0] == '\n' && str[1] == '\0') || str[0] == '\0')
		return (0);
	while (str[i] != '\0') {
		if (str[i] == delim)
			counter++;
		i++;
	}
	return (counter);
}

unsigned int	get_index_new_line(char const *str, unsigned int i, char delim)
{
	while (str[i] != delim && str[i] != '\0')
		i++;
	return (i);
}
