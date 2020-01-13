/*
** EPITECH PROJECT, 2018
** display_button.c
** File description:
** button_display
*/

#include "button.h"
#include "csfml_practical.h"

void	display_button(sfRenderWindow *window, button_t *button)
{
	if (button->state == IDLE && button->idle != NULL)
		sfRenderWindow_drawSprite(window, button->idle, NULL);
	if (button->state == HOVER && button->hover != NULL)
		sfRenderWindow_drawSprite(window, button->hover, NULL);
	if (button->state == CLICKED && button->clicked != NULL)
		sfRenderWindow_drawSprite(window, button->clicked, NULL);
	if (button->text != NULL)
		sfRenderWindow_drawText(window, button->text, NULL);
}

void	button_display_help_txt(sfRenderWindow *window, button_t *button)
{
	if (button->help_text_box != NULL) {
		sfSprite_setPosition(button->help_text_box,
			set_pos(button->hover_help_text.x,
				button->hover_help_text.y));
		sfRenderWindow_drawSprite(window, button->help_text_box, NULL);
	}
}
