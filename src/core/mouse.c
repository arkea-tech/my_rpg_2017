/*
** EPITECH PROJECT, 2018
** mouse.c
** File description:
** Create a mouse cursor
*/

#include <SFML/Graphics.h>
#include "gui.h"
#include "my_stdc.h"

bool	create_mouse_cursor(const char filename[], sfSprite **cursor)
{
	sfIntRect	area = {0, 0, 32, 32};
	sfTexture	*texture = sfTexture_createFromFile(filename, &area);

	*cursor = sfSprite_create();
	if (texture == NULL || cursor == NULL)
		return (ERROR);
	sfSprite_setTexture(*cursor, texture, sfTrue);
	return (SUCCESS);
}

void	display_mouse(gui_t *gui)
{
	sfVector2i	pos_int = sfMouse_getPositionRenderWindow(gui->window);
	sfVector2f	pos_float = {pos_int.x, pos_int.y};

	sfSprite_setPosition(gui->cursor, pos_float);
	sfRenderWindow_drawSprite(gui->window, gui->cursor, NULL);
}
