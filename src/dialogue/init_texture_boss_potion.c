/*
** EPITECH PROJECT, 2018
** init_texture_boss_potion.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

static int init_tex_one(struct_text *texture)
{
	texture->dialogue_txt_boss =
	sfTexture_createFromFile("ressources/img/dialogue_pics/boss.pn\
g", NULL);
	if (!texture->dialogue_txt_boss)
		return (84);
	texture->dialogue_txt_chest_potion =
	sfTexture_createFromFile("ressources/img/dialogue_pics/dialogue\
_potion.png", NULL);
	if (!texture->dialogue_txt_chest_potion)
		return (84);
	texture->dialogue_texture_spirit =
	sfTexture_createFromFile("ressources/img/dialogue_pics/spirit.p\
ng", NULL);
	if (!texture->dialogue_texture_spirit)
		return (84);
	return (0);
}

static int	init_tex_two(struct_text *texture)
{
	texture->dialogue_texture_old_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/old_lady\
_desert.png", NULL);
	if (!texture->dialogue_texture_old_lady_desert)
		return (84);
	texture->dialogue_texture_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/lady_des\
ert.png", NULL);
	if (!texture->dialogue_texture_lady_desert)
		return (84);
	texture->dialogue_texture_boy_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/boy_dese\
rt.png", NULL);
	if (!texture->dialogue_texture_boy_desert)
		return (84);
	return (0);
}

static int	init_tex_three(struct_text *texture)
{
	texture->dialogue_texture_old_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/old_lady\
_desert.png", NULL);
	if (!texture->dialogue_texture_old_lady_desert)
		return (84);
	texture->dialogue_texture_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/lady_des\
ert.png", NULL);
	if (!texture->dialogue_texture_lady_desert)
		return (84);
	texture->dialogue_texture_boy_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/boy_dese\
rt.png", NULL);
	if (!texture->dialogue_texture_boy_desert)
		return (84);
	return (0);
}

static int	init_tex_four(struct_text *texture)
{
	texture->dialogue_texture_old_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/old_lady\
_desert.png", NULL);
	texture->dialogue_texture_lady_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/lady_des\
ert.png", NULL);
	texture->dialogue_texture_boy_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/boy_dese\
rt.png", NULL);
	texture->dialogue_texture_woman_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/woman_de\
sert.png", NULL);
	texture->dialogue_texture_man_desert =
	sfTexture_createFromFile("ressources/img/dialogue_pics/man_dese\
rt.png", NULL);
	return (0);
}

int init_texture_boss_potion(struct_text *texture)
{
	if (init_tex_one(texture) || init_tex_two(texture)
		|| init_tex_three(texture) || init_tex_four(texture))
		return (84);
	if (init_tex_five(texture))
		return (84);
	texture->dialogue_texture_spirit_forest =
	sfTexture_createFromFile("ressources/img/dialogue_pics/spirit_n\
ature.png", NULL);
	return (0);
}
