/*
** EPITECH PROJECT, 2018
** create_sprite_from_filename.c
** File description:
** return a sprite from a filename
*/

#include <SFML/Graphics.h>

/* Do not remove the first IF */
sfSprite	*create_sprite_from_path(const char	*filename,
					sfIntRect	*area,
					sfVector2f	pos)
{
	sfSprite	*sprite = NULL;
	sfTexture	*texture = NULL;

	if (filename == NULL)
		return (NULL);
	sprite = sfSprite_create();
	texture = sfTexture_createFromFile(filename, area);
	if (sprite == NULL || texture == NULL)
		return (NULL);
	sfSprite_setTexture(sprite, texture, sfFalse);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
