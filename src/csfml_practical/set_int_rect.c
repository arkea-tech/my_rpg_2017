/*
** EPITECH PROJECT, 2018
** set_int_square.c
** File description:
** set a sfIntRect
*/

#include <SFML/Graphics.h>

sfIntRect	set_int_rect(	int origin_x,
				int origin_y,
				int width,
				int height)
{
	sfIntRect	rect = {origin_x, origin_y, width, height};

	return (rect);
}
