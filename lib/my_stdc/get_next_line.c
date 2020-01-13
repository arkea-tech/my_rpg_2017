/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** read next line of the parameter file descriptor
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "my_stdc.h"

static char	*case_read_enough(char **offset, int new_line_index)
{
	char	*line = NULL;
	char	*tmp = NULL;

	tmp = malloc(READ_SIZE + 1);
	if (tmp == NULL)
		return (NULL);
	tmp = my_strcpy(tmp, *offset + new_line_index + 1);
	line = my_strdup(*offset);
	if (line == NULL)
		return (NULL);
	line[new_line_index] = '\0';
	free(*offset);
	*offset = tmp;
	return (line);
}

static char	*concatenate_read_str(	char	*read_str,
					char	*returned_line,
					int	*new_line_index)
{
	*new_line_index = my_strchr_index(read_str, NEW_LINE);
	if (read_str[0] != '\0') {
		returned_line = my_strcat_alloc(returned_line, read_str, 1);
		if (returned_line == NULL)
			return (NULL);
	}
	return (returned_line);
}

static char	*get_offset(char *read_str, int new_line_index)
{
	char	*offset = NULL;

	if (read_str[new_line_index + 1] != '\0')
		offset = my_strdup(read_str + new_line_index + 1);
	return (offset);
}

static char	*get_returned_line_and_offset(	int	fd,
						uint8_t option,
						char	*returned_line,
						char	**offset)
{
	int	new_line_index = -1;
	char	*read_str = NULL;
	char	*line = returned_line;
	int	strlen_offset = (*offset == NULL) ? 0 : my_strlen(*offset);

	for (int i = 0 ; new_line_index == -1 ; ++i) {
		free(read_str);
		read_str = read_next_n_bytes(fd, READ_SIZE);
		if (read_str == NULL)
			return (NULL);
		line = concatenate_read_str(read_str, line, &new_line_index);
		if (new_line_index != -1)
			line[INDEX_CUR_LINE] = '\0';
		if (read_str[0] == '\0') {
			free(read_str);
			return (line);
		}
	}
	*offset = get_offset(read_str, new_line_index);
	free(read_str);
	return (line);
}

/*
** Option 0 = Remove new_line at the end of the line if one is found
** Option 1 = Do not remove new_line at the end of the line
** --------
** Do not use that function if you read multiple files (or use a READ_SIZE == 1)
** Because it saves in a buffer some content from the previous file.
*/
char	*get_next_line(int fd, uint8_t option)
{
	char		*line = NULL;
	static char	*offset = NULL;
	int		new_line_index = 0;

	if (offset != NULL) {
		new_line_index = my_strchr_index(offset, NEW_LINE);
		if (new_line_index != -1) {
			line = case_read_enough(&offset, new_line_index);
			return (line);
		}
		line = my_strdup(offset);
		offset = NULL;
	}
	line = get_returned_line_and_offset(fd, option, line, &offset);
	if (line != NULL)
		if (line[0] == '\0') {
			free(line);
			return (NULL);
		}
	return (line);
}
