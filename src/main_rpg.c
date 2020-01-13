/*
** EPITECH PROJECT, 2018
** main_rpg.c
** File description:
** My_rpg project
*/

#include <time.h>
#include "gui.h"
#include "my_stdc.h"
#include "dialogue.h"

int	main(int UNUSED(argc), char UNUSED(*argv[]), char *env[])
{
	if (env[0] == NULL) {
		my_putstr_err("Environment not found\n");
		return (EXIT_ERROR);
	}
	srand(time(NULL));
	if (launch_graphical_window())
		return (EXIT_ERROR);
	return (SUCCESS_EXIT);
}
