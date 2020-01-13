/*
** EPITECH PROJECT, 2018
** create_txt.c
** File description:
** description
*/

#include "button.h"

void	text_set_center(sfText *text)
{
	sfFloatRect	rect = sfText_getLocalBounds(text);
	sfVector2f	offset = {-rect.width / 2, -rect.height / 2};

	sfText_move(text, offset);
}

sfText *create_text(sfVector2f pos, const char *value, int size)
{
	sfFont *font = sfFont_createFromFile(PATH_DEFAULT_FONT);
	sfText *text = sfText_create();

	if (font == NULL || text == NULL)
		return (NULL);
	sfText_setFont(text, font);
	sfText_setCharacterSize(text, size);
	sfText_setPosition(text, pos);
	sfText_setString(text, value);
	return (text);
}
