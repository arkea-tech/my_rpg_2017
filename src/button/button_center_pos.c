/*
** EPITECH PROJECT, 2018
** button_center_pos.c
** File description:
** button_center_pos.c
*/

#include "button.h"

void	button_center_pos(button_t *button)
{
	sfFloatRect	local_rect = get_local_button_rect(button);
	sfVector2f	offset = {	-(float)local_rect.width / 2,
					-(float)local_rect.height / 2};

	if (button->text != NULL)
		sfText_move(button->text, offset);
	if (button->idle != NULL)
		sfSprite_move(button->idle, offset);
	if (button->hover != NULL)
		sfSprite_move(button->hover, offset);
	if (button->clicked != NULL)
		sfSprite_move(button->clicked, offset);
}
