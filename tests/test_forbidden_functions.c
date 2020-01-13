/*
** EPITECH PROJECT, 2018
** test_forbidden_functions.c
** File description:
** Unauthorized_fcts
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_stdc.h"
#include "tests.h"

static int	get_size_authorized_fct(char const *authorized_fct)
{
	int	i = 0;

	for (i = 0 ; authorized_fct[i] != '\0' ; ++i)
		if (authorized_fct[i] == '*')
			return (i);
	return (i);
}

static bool	is_authorized_fct_line(	char const *authorized_fcts[],
					char const *line)
{
	bool	authorized_fct = false;
	int	size_fct = 0;

	for (int i = 0 ; authorized_fcts[i] != NULL ; ++i) {
		size_fct = get_size_authorized_fct(authorized_fcts[i]);
		if (strncmp(authorized_fcts[i], line, size_fct) == 0) {
			authorized_fct = true;
		}
	}
	return (authorized_fct);
}

static bool	detect_forbidden_fcts(	char const *authorized_fcts[],
					char const *path)
{
	int	fd = open(path, O_RDONLY);
	char	*buffer = NULL;

	while (true) {
		buffer = get_next_line(fd, 1);
		if (buffer == NULL)
			break;
		if (!is_authorized_fct_line(authorized_fcts, buffer)) {
			my_putstr_err("\nUnauthorized function : ");
			my_putstr_err(buffer);
			my_putstr_err("\n\n");
			return (ERROR);
		}
	}
	return (SUCCESS);
}

Test(shell_execute, forbidden_fcts)
{
	char const	*authorized_fcts[] = {	"open", "fopen",
						"close", "fclose",
						"read", "fread",
						"write", "cos", "sin",
						"malloc", "free",
						"time", "srand", "rand",
						"memset", "config_*", "sf*",
						"getline", "remove",
						"opendir", "readdir",
						"closedir", "pow", "sqrtl",
						"__libc_start_main",
						NULL};

	system("make -C ../");
	system(COMMAND_NM);
	if (detect_forbidden_fcts(authorized_fcts, FCTS_USED_FILE)) {
		remove(FCTS_USED_FILE);
		cr_assert_fail("FORBIDDEN FCT DETECT ! WARNING !");
	}
	remove(FCTS_USED_FILE);
}
