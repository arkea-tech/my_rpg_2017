/*
** EPITECH PROJECT, 2018
** erase_save.c
** File description:
** erase_save
*/

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include "libconfig.h"
#include "my_stdc.h"
#include "game.h"
#include "save.h"

bool	erase_save(game_t *game)
{
	FILE	*oldsave_file = fopen(PATH_SAVE_FILE, "w");
	char	*tmp = NULL;

	if (oldsave_file == NULL)
		return (ERROR);
	tmp = get_str_from_filename(PATH_NEW_SAVE);
	if (write(oldsave_file->_fileno, tmp, my_strlen(tmp)) == -1)
		return (ERROR);
	if (load_save(game))
		return (ERROR);
	return (SUCCESS);
}
