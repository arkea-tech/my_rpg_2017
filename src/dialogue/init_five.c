/*
** EPITECH PROJECT, 2018
** init_fivE.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

int init_tex_five(struct_text *texture)
{
	texture->dialogue_texture_spirit_sea =
	sfTexture_createFromFile("ressources/img/dialogue_pics/spirit_w\
ater.png", NULL);
	texture->dialogue_texture_villager_sea =
	sfTexture_createFromFile("ressources/img/dialogue_pics/villager\
_sea.png", NULL);
	texture->dialogue_texture_grandpa_sea =
	sfTexture_createFromFile("ressources/img/dialogue_pics/grandpa_\
sea.png", NULL);
	texture->dialogue_texture_chest_white =
	sfTexture_createFromFile("ressources/img/dialogue_pics/dialogue\
_air.png", NULL);
	texture->dialogue_texture_spirit_wind =
	sfTexture_createFromFile("ressources/img/dialogue_pics/spirit_a\
ir.png", NULL);
	return (0);
}
