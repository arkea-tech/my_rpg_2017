/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** dialogue
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

static void	set_tex_sub_1(struct_text *texture, struct_sprite *sprite)
{
	sfSprite_setTexture(sprite->dialogue_sprt_cat,
	texture->dialogue_txt_cat,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_magus,
	texture->dialogue_txt_magus,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_chest_blue,
	texture->dialogue_txt_chest_blue,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_chest_green,
	texture->dialogue_txt_chest_green,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_chest_red,
	texture->dialogue_txt_chest_red,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_boss,
	texture->dialogue_txt_boss,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_chest_potion,
	texture->dialogue_txt_chest_potion, sfTrue);
}

static void	set_tex_sub_2(struct_text *texture, struct_sprite *sprite)
{
	sfSprite_setTexture(sprite->dialogue_sprite_spirit,
	texture->dialogue_texture_spirit,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_old_lady_desert,
	texture->dialogue_texture_old_lady_desert,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_lady_desert,
	texture->dialogue_texture_lady_desert,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_boy_desert,
	texture->dialogue_texture_boy_desert,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_man_desert,
	texture->dialogue_texture_man_desert,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_woman_desert,
	texture->dialogue_texture_woman_desert,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_spirit_sea,
	texture->dialogue_texture_spirit_sea, sfTrue);
}

void set_texture_sub_1(struct_text *texture, struct_sprite *sprite)
{
	set_tex_sub_1(texture, sprite);
	set_tex_sub_2(texture, sprite);
	sfSprite_setTexture(sprite->dialogue_sprite_villager_sea,
	texture->dialogue_texture_villager_sea,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_grandpa_sea,
	texture->dialogue_texture_grandpa_sea,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_spirit_wind,
	texture->dialogue_texture_spirit_wind,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_chest_white,
	texture->dialogue_texture_chest_white,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprite_spirit_forest,
	texture->dialogue_texture_spirit_forest,
	sfTrue);
}

void set_texture_sub(struct_text *texture, struct_sprite *sprite)
{
	sfSprite_setTexture(sprite->dialogue_sprt_grandpa,
	texture->dialogue_txt_grandpa,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_teenager_boy,
	texture->dialogue_txt_teenager_boy,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_teenager_girl,
	texture->dialogue_txt_teenager_girl,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_man,
	texture->dialogue_txt_man,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_woman,
	texture->dialogue_txt_woman,
	sfTrue);
	set_texture_sub_1(texture, sprite);
}

void set_texture(struct_text *texture, struct_sprite *sprite)
{
	sfSprite_setTexture(sprite->dialogue_sprt_1,
	texture->dialogue_txt_1,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_hero_boy,
	texture->dialogue_txt_hero_boy,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_wizard,
	texture->dialogue_txt_wizard,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_teenager,
	texture->dialogue_txt_teenager,
	sfTrue);
	sfSprite_setTexture(sprite->dialogue_sprt_grandma,
	texture->dialogue_txt_grandma,
	sfTrue);
	set_texture_sub(texture, sprite);
}
