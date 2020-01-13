/*
** EPITECH PROJECT, 2018
** window.c
** File description:
** Create and destroy a window
*/

#include <SFML/Graphics.h>
#include "my_stdc.h"

bool	create_window(sfRenderWindow **window, int width, int height)
{
	sfVideoMode mode;

	mode.width = width;
	mode.height = height;
	mode.bitsPerPixel = 32;
	*window = sfRenderWindow_create(mode,
	"My_rpg",
	sfResize | sfClose | sfFullscreen,
	NULL);
	if (*window == NULL)
		return (ERROR);
	sfRenderWindow_setFramerateLimit(*window, 50);
	return (SUCCESS);
}
