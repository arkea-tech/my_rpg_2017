/*
** EPITECH PROJECT, 2018
** button_set_sound.c
** File description:
** button set sound
*/

#include "button.h"

sfMusic		*button_set_sound(const char *path_sound)
{
	sfMusic		*sound_click;

	sound_click = sfMusic_createFromFile(path_sound);
	if (sound_click == NULL)
		return (NULL);
	return (sound_click);
}
