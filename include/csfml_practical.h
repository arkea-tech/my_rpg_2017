/*
** EPITECH PROJECT, 2018
** csfml_pratical.h
** File description:
** pratical functions for csfml
*/

#ifndef		_CSFML_PRATICAL_H_
#	define	_CSFML_PRATICAL_H_

#define	CLOCK_TIME(clock)	sfClock_getElapsedTime(clock).microseconds

sfSprite	*create_sprite_from_path(const char	*filename,
					sfIntRect	*area,
					sfVector2f	pos);

sfVector2f	set_pos(float x, float y);
sfIntRect	set_area(int left, int top, int width, int height);
sfText		*create_text(sfVector2f vect, const char *value, int size);
void		text_set_center(sfText *text);
sfColor		get_random_color(void);
sfIntRect	set_int_rect(	int origin_x,
				int origin_y,
				int width,
				int height);
#endif	/* CSFML_PRATICAL_H_ */
