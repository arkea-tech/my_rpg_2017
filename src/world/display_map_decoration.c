/*
** EPITECH PROJECT, 2018
** display_map_decoration.c
** File description:
** map deco
*/

#include "game.h"

void	display_map_decoration(sfRenderWindow *window, map_t *map, int story)
{
	for (int i = 0 ; map->fences[i] != NULL ; ++i)
		if ((story == 1 && i != 4) || (story == 2 && i != 14)
		|| (story == 3 && i != 19) || (story == 4 && i != 29)
		|| (story == 5 && i != 34) || (story == 6 && i != 44)
		|| (story == 7 && i != 49) || story == 0)
			sfRenderWindow_drawSprite(window, map->fences[i], NULL);
}
