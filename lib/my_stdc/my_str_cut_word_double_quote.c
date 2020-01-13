/*
** EPITECH PROJECT, 2018
** my_str_word_double_quote_.c
** File description:
** double quote cut_words
*/

#include <stdlib.h>
#include "my_stdc.h"

static int	move_index_until_char(char const *str, int i, char delim)
{
	do
		++i;
	while (str[i] != '\0' && str[i] != delim);
	return (i);
}

static unsigned int	get_index_new_line_quote(char const *str,
						unsigned int i,
						char const *delim)
{
	while (my_strchr_index(delim, str[i]) == -1 && str[i] != '\0') {
		if (str[i] == '"')
			i = move_index_until_char(str, i, '"');
		if (str[i] != '\0')
			i++;
	}
	return (i);
}

static void	fill_grid(	unsigned int	lines_nb,
				char		*str,
				char const	*delim,
				char		**grid)
{
	unsigned int	start = 0;
	unsigned int	index = 0;
	unsigned int	i = 0;

	while (lines_nb > 0) {
		index = get_index_new_line_quote(str, index, delim);
		grid[i] = truncate_str(str, start, index - 1);
		grid[i] = remove_chars_from_str(grid[i], '"');
		index += 1;
		start = index;
		i++;
		lines_nb--;
	}
}

static unsigned int	calc_amount_line_quote(char const *str,
						char const *delim,
						int option)
{
	unsigned int	i = 0;
	unsigned int	counter = 1;
	bool		outside_quote = true;

	if ((option == 1 && str[0] == '\n' && str[1] == '\0') || str[0] == '\0')
		return (0);
	while (str[i] != '\0') {
		if (str[i] == '"' && outside_quote == true)
			outside_quote = false;
		else if (str[i] == '"' && outside_quote == false)
			outside_quote = true;
		if (my_strchr_index(delim, str[i]) >= 0 && outside_quote)
			counter++;
		i++;
	}
	if (my_strchr_index(delim, str[my_strlen(str) - 1]) >= 0)
		counter--;
	return (counter);
}

/*
** There is a null pointer at the end of the table
** Two options : 1 removes new_line at the end of the str if there is one
**		0 doesn't do option 1
** Delim is an array of delimiters.
** e.g : "\n\"<>|"
*/
char	**my_str_cut_word_double_quote(	char const	*str_origin,
					const char	*delim,
					int		option)
{
	char		**grid = NULL;
	unsigned int	lines_nb = calc_amount_line_quote(str_origin,
								delim, option);
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
