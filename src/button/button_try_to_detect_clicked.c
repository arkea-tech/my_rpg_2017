/*
** EPITECH PROJECT, 2018
** button_perform_action.c
** File description:
** button_perform
*/

#include "button.h"
#include "csfml_practical.h"

void	button_try_to_detect_clicked(	sfEvent		*event,
					button_t	*button,
					sfFloatRect	rect)
{
	if ((button->state == IDLE || button->state == HOVER)
	&& event->type ==sfEvtMouseButtonReleased
	&& sfFloatRect_contains(&rect,
				event->mouseButton.x,
				event->mouseButton.y))
		button->state = CLICKED;
	else if (button->state == CLICKED
	&& event->type ==sfEvtMouseButtonReleased
	&& sfFloatRect_contains(&rect,
				event->mouseButton.x,
				event->mouseButton.y))
		button->state = HOVER;
}

void	button_try_to_detect_clicked_simple(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect)
{
	if (event->type ==sfEvtMouseButtonReleased
	&& sfFloatRect_contains(&rect,
				event->mouseButton.x,
				event->mouseButton.y))
		button->state = CLICKED;
}
