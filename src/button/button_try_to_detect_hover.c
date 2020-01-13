/*
** EPITECH PROJECT, 2018
** button_activate_hover.c
** File description:
** button_activate_hover
*/

#include "button.h"

void	button_try_to_detect_hover(	sfEvent		*event,
					button_t	*button,
					sfFloatRect	rect)
{
	if (button->state != CLICKED) {
		if (sfFloatRect_contains(&rect,
					event->mouseMove.x,
					event->mouseMove.y))
			button->state = HOVER;
		else
			button->state = IDLE;
	}
}

void	button_try_to_detect_hover_simple(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect)
{
	if (sfFloatRect_contains(&rect,
				event->mouseMove.x,
				event->mouseMove.y))
		button->state = HOVER;
	else
		button->state = IDLE;
}
