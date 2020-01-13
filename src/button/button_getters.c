/*
** EPITECH PROJECT, 2018
** button_getters.c
** File description:
** Getters
*/

#include "button.h"

/*
** No idea how this works if the frame is not rectangle
*/
sfFloatRect	get_global_button_rect(button_t *button)
{
	sfFloatRect error = {0.0, 0.0, 0.0, 0.0};

	if (button->idle != NULL)
		return (sfSprite_getGlobalBounds(button->idle));
	if (button->hover != NULL)
		return (sfSprite_getGlobalBounds(button->hover));
	if (button->clicked != NULL)
		return (sfSprite_getGlobalBounds(button->clicked));
	if (button->text != NULL)
		return (sfText_getGlobalBounds(button->text));
	return (error);
}

/*
** No idea how this works if the frame is not rectangle
*/
sfFloatRect	get_local_button_rect(button_t *button)
{
	sfFloatRect error = {0.0, 0.0, 0.0, 0.0};

	if (button->idle != NULL)
		return (sfSprite_getLocalBounds(button->idle));
	if (button->hover != NULL)
		return (sfSprite_getLocalBounds(button->hover));
	if (button->clicked != NULL)
		return (sfSprite_getLocalBounds(button->clicked));
	if (button->text != NULL)
		return (sfText_getLocalBounds(button->text));
	return (error);
}
