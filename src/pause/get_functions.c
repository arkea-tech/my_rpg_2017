/*
** EPITECH PROJECT, 2018
** settings
** File description:
** settings
*/

#include "game.h"
#include <SFML/Graphics.h>
#include <stdlib.h>

sfVector2f	get_vector(float x, float y)
{
	sfVector2f	vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}

sfIntRect	get_rectangle(const int *rect_ltwh)
{
	sfIntRect	rectangle;

	rectangle.left = rect_ltwh[0];
	rectangle.top = rect_ltwh[1];
	rectangle.width = rect_ltwh[2];
	rectangle.height = rect_ltwh[3];
	return (rectangle);
}

sfSprite	*get_sprite(const char *pathname, sfIntRect rectangle)
{
	sfTexture	*texture = NULL;
	sfSprite	*sprite = NULL;

	texture = sfTexture_createFromFile(pathname, NULL);
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setTextureRect(sprite, rectangle);
	return (sprite);
}
