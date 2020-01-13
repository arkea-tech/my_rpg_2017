/*
** EPITECH PROJECT, 2018
** set_sprite_pos.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

static void	set_sprite_men(struct_sprite *sprite)
{
	sprite->dialogue_sprt_1 = sfSprite_create();
	sprite->dialogue_sprt_hero_boy = sfSprite_create();
	sprite->dialogue_sprt_wizard = sfSprite_create();
	sprite->dialogue_sprt_teenager = sfSprite_create();
	sprite->dialogue_sprt_grandma = sfSprite_create();
	sprite->dialogue_sprt_grandpa = sfSprite_create();
	sprite->dialogue_sprt_teenager_boy = sfSprite_create();
	sprite->dialogue_sprt_teenager_girl = sfSprite_create();
	sprite->dialogue_sprt_man = sfSprite_create();
	sprite->dialogue_sprt_woman = sfSprite_create();
	sprite->dialogue_sprt_cat = sfSprite_create();
	sprite->dialogue_sprt_magus = sfSprite_create();
}

void set_sprite(struct_sprite *sprite)
{
	set_sprite_men(sprite);
	sprite->dialogue_sprt_chest_blue = sfSprite_create();
	sprite->dialogue_sprt_chest_green = sfSprite_create();
	sprite->dialogue_sprt_chest_red = sfSprite_create();
	sprite->dialogue_sprt_boss = sfSprite_create();
	sprite->dialogue_sprt_chest_potion = sfSprite_create();
	sprite->dialogue_sprite_spirit = sfSprite_create();
	sprite->dialogue_sprite_old_lady_desert = sfSprite_create();
	sprite->dialogue_sprite_lady_desert = sfSprite_create();
	sprite->dialogue_sprite_boy_desert = sfSprite_create();
	sprite->dialogue_sprite_man_desert = sfSprite_create();
	sprite->dialogue_sprite_woman_desert = sfSprite_create();
	sprite->dialogue_sprite_spirit_sea = sfSprite_create();
	sprite->dialogue_sprite_villager_sea = sfSprite_create();
	sprite->dialogue_sprite_grandpa_sea = sfSprite_create();
	sprite->dialogue_sprite_spirit_wind = sfSprite_create();
	sprite->dialogue_sprite_chest_white = sfSprite_create();
	sprite->dialogue_sprite_spirit_forest = sfSprite_create();
}

void set_sprite_pos_sub_chest(struct_sprite *sprite)
{
	sprite->dialogue_pos_chest_blue.x = 0;
	sprite->dialogue_pos_chest_blue.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprt_chest_blue,
	sprite->dialogue_pos_chest_blue);
	sprite->dialogue_pos_chest_green.x = 0;
	sprite->dialogue_pos_chest_green.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprt_chest_green,
	sprite->dialogue_pos_chest_green);
	sprite->dialogue_pos_chest_red.x = 10;
	sprite->dialogue_pos_chest_red.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprt_chest_red,
	sprite->dialogue_pos_chest_red);
	sprite->dialogue_pos_chest_potion.x = 0;
	sprite->dialogue_pos_chest_potion.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprt_chest_potion,
	sprite->dialogue_pos_chest_potion);
	set_sprite_pos_boss_potion(sprite);
}

void set_sprite_pos_sub_1(struct_sprite *sprite)
{
	sprite->dialogue_pos_man.x = 1575;
	sprite->dialogue_pos_man.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_man,
	sprite->dialogue_pos_man);
	sprite->dialogue_pos_woman.x = 1583;
	sprite->dialogue_pos_woman.y = 495;
	sfSprite_setPosition(sprite->dialogue_sprt_woman,
	sprite->dialogue_pos_woman);
	sprite->dialogue_pos_cat.x = 1575;
	sprite->dialogue_pos_cat.y = 495;
	sfSprite_setPosition(sprite->dialogue_sprt_cat,
	sprite->dialogue_pos_cat);
	sprite->dialogue_pos_magus.x = 1575;
	sprite->dialogue_pos_magus.y = 495;
	sfSprite_setPosition(sprite->dialogue_sprt_magus,
	sprite->dialogue_pos_magus);
	set_sprite_pos_sub_chest(sprite);
}

void set_sprite_pos_sub(struct_sprite *sprite)
{
	sprite->dialogue_pos_grandma.x = 1575;
	sprite->dialogue_pos_grandma.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_grandma,
	sprite->dialogue_pos_grandma);
	sprite->dialogue_pos_grandpa.x = 1575;
	sprite->dialogue_pos_grandpa.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_grandpa,
	sprite->dialogue_pos_grandpa);
	sprite->dialogue_pos_teenager_boy.x = 1575;
	sprite->dialogue_pos_teenager_boy.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_teenager_boy,
	sprite->dialogue_pos_teenager_boy);
	sprite->dialogue_pos_teenager_girl.x = 1575;
	sprite->dialogue_pos_teenager_girl.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_teenager_girl,
	sprite->dialogue_pos_teenager_girl);
	set_sprite_pos_sub_1(sprite);
}
