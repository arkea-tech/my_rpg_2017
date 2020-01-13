/*
** EPITECH PROJECT, 2018
** destroy_button.c
** File description:
** Destroy button fct
*/

#include "button.h"

void	button_destroy(button_t *button)
{
	sfText_destroy(button->text);
	sfSprite_destroy(button->idle);
	sfSprite_destroy(button->hover);
	sfSprite_destroy(button->clicked);
	sfSprite_destroy(button->help_text_box);
	sfMusic_destroy(button->sound);
	free(button);
}

void	buttons_destroy(button_t ***button)
{
	if (*button != NULL) {
		for (int i = 0 ; (*button)[i] != NULL ; ++i)
			button_destroy((*button)[i]);
		free(*button);
		*button = NULL;
	}
}
