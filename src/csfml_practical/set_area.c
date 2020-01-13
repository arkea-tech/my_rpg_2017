/*
** EPITECH PROJECT, 2018
** set_area.c
** File description:
** set sfIntRect
*/

#include <SFML/Graphics.h>

sfIntRect	set_area(int left, int top, int width, int height)
{
	sfIntRect	area = {left, top, width, height};

	return (area);
}
