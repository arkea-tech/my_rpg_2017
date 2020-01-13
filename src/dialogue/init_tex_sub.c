/*
** EPITECH PROJECT, 2018
** init_tex_sub.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

int init_texture_sub_chest(struct_text *texture)
{
	texture->dialogue_txt_chest_blue =
	sfTexture_createFromFile("ressources/img/dialogue_pics/dialogue\
_blue.png", NULL);
	if (!texture->dialogue_txt_chest_blue)
		return (84);
	texture->dialogue_txt_chest_green =
	sfTexture_createFromFile("ressources/img/dialogue_pics/dialogue\
_green.png", NULL);
	if (!texture->dialogue_txt_chest_green)
		return (84);
	texture->dialogue_txt_chest_red =
	sfTexture_createFromFile("ressources/img/dialogue_pics/dialogue\
_red.png", NULL);
	if (!texture->dialogue_txt_chest_red)
		return (84);
	if (init_texture_boss_potion(texture) == 84)
		return (84);
	return (0);
}

int init_texture_sub_2(struct_text *texture)
{
	texture->dialogue_txt_woman =
	sfTexture_createFromFile("ressources/img/dialogue_pics/woman.pn\
g", NULL);
	if (!texture->dialogue_txt_woman)
		return (84);
	texture->dialogue_txt_cat =
	sfTexture_createFromFile("ressources/img/dialogue_pics/cat.png",
	NULL);
	if (!texture->dialogue_txt_cat)
		return (84);
	texture->dialogue_txt_magus =
	sfTexture_createFromFile("ressources/img/dialogue_pics/magus.pn\
g", NULL);
	if (!texture->dialogue_txt_magus)
		return (84);
	if (init_texture_sub_chest(texture) == 84)
		return (84);
	return (0);
}

int init_texture_sub_1(struct_text *texture)
{
	texture->dialogue_txt_teenager_boy =
	sfTexture_createFromFile("ressources/img/dialogue_pics/teenager\
_boy.png", NULL);
	if (!texture->dialogue_txt_teenager_boy)
		return (84);
	texture->dialogue_txt_teenager_girl =
	sfTexture_createFromFile("ressources/img/dialogue_pics/teenager\
_girl.png", NULL);
	if (!texture->dialogue_txt_teenager_girl)
		return (84);
	texture->dialogue_txt_man =
	sfTexture_createFromFile("ressources/img/dialogue_pics/man.png",
	NULL);
	if (!texture->dialogue_txt_man)
		return (84);
	if (init_texture_sub_2(texture) == 84)
		return (84);
	return (0);
}

int init_texture_sub(struct_text *texture)
{
	texture->dialogue_txt_teenager =
	sfTexture_createFromFile("ressources/img/dialogue_pics/teenage\
r.png", NULL);
	if (!texture->dialogue_txt_teenager)
		return (84);
	texture->dialogue_txt_grandma =
	sfTexture_createFromFile("ressources/img/dialogue_pics/grandma.\
png", NULL);
	if (!texture->dialogue_txt_grandma)
		return (84);
	texture->dialogue_txt_grandpa =
	sfTexture_createFromFile("ressources/img/dialogue_pics/grandpa.\
png", NULL);
	if (!texture->dialogue_txt_grandpa)
		return (84);
	if (init_texture_sub_1(texture) == 84)
		return (84);
	return (0);
}

int init_texture(struct_text *texture, bool sex)
{
	texture->dialogue_txt_1 =
	sfTexture_createFromFile("ressources/img/dialogue_pics/rpg_dial\
ogue_1.png", NULL);
	if (sex == 0) {
		texture->dialogue_txt_hero_boy =
		sfTexture_createFromFile("ressources/img/dialogue_pics/\
hero_boy.png", NULL);
		if (!texture->dialogue_txt_hero_boy)
			return (84);
	}
	else if (sex == 1)
		texture->dialogue_txt_hero_boy =
		sfTexture_createFromFile("ressources/img/dialogue_pics/\
hero_girl.png", NULL);
	texture->dialogue_txt_wizard =
	sfTexture_createFromFile("ressources/img/dialogue_pics/spirit_nature.p\
ng", NULL);
	init_texture_sub(texture);
	return (0);
}
