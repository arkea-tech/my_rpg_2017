/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** dialogue
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"

static void	set_pos_pot(struct_sprite *sprite)
{
	sprite->dialogue_pos_boss.x = 0;
	sprite->dialogue_pos_boss.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprt_boss,
	sprite->dialogue_pos_boss);
	sprite->dialogue_position_spirit.x = 1570;
	sprite->dialogue_position_spirit.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_spirit,
	sprite->dialogue_position_spirit);
	sprite->dialogue_position_old_lady_desert.x = 1570;
	sprite->dialogue_position_old_lady_desert.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_old_lady_desert,
	sprite->dialogue_position_old_lady_desert);
	sprite->dialogue_position_lady_desert.x = 1570;
	sprite->dialogue_position_lady_desert.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_lady_desert,
	sprite->dialogue_position_lady_desert);
	sprite->dialogue_position_boy_desert.x = 1570;
	sprite->dialogue_position_boy_desert.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_boy_desert,
	sprite->dialogue_position_boy_desert);
}

static void	set_villager(struct_sprite *sprite)
{
	sprite->dialogue_position_man_desert.x = 1570;
	sprite->dialogue_position_man_desert.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_man_desert,
	sprite->dialogue_position_man_desert);
	sprite->dialogue_position_woman_desert.x = 1570;
	sprite->dialogue_position_woman_desert.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_woman_desert,
	sprite->dialogue_position_woman_desert);
	sprite->dialogue_position_spirit_sea.x = 1570;
	sprite->dialogue_position_spirit_sea.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_spirit_sea,
	sprite->dialogue_position_spirit_sea);
	sprite->dialogue_position_villager_sea.x = 1570;
	sprite->dialogue_position_villager_sea.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_villager_sea,
	sprite->dialogue_position_villager_sea);
	sprite->dialogue_position_grandpa_sea.x = 1570;
	sprite->dialogue_position_grandpa_sea.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_grandpa_sea,
	sprite->dialogue_position_grandpa_sea);
}

void set_sprite_pos_boss_potion(struct_sprite *sprite)
{
	set_pos_pot(sprite);
	set_villager(sprite);
	sprite->dialogue_position_spirit_wind.x = 1570;
	sprite->dialogue_position_spirit_wind.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_spirit_wind,
	sprite->dialogue_position_spirit_wind);
	sprite->dialogue_position_chest_white.x = 5;
	sprite->dialogue_position_chest_white.y = 590;
	sfSprite_setPosition(sprite->dialogue_sprite_chest_white,
	sprite->dialogue_position_chest_white);
	sprite->dialogue_position_spirit_forest.x = 1570;
	sprite->dialogue_position_spirit_forest.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprite_spirit_forest,
	sprite->dialogue_position_spirit_forest);
}

void set_sprite_pos(struct_sprite *sprite)
{
	sprite->dialogue_pos_1.x = 35;
	sprite->dialogue_pos_1.y = 640;
	sfSprite_setPosition(sprite->dialogue_sprt_1,
	sprite->dialogue_pos_1);
	sprite->dialogue_pos_hero_boy.x = 1544;
	sprite->dialogue_pos_hero_boy.y = 470;
	sfSprite_setPosition(sprite->dialogue_sprt_hero_boy,
	sprite->dialogue_pos_hero_boy);
	sprite->dialogue_pos_wizard.x = 1570;
	sprite->dialogue_pos_wizard.y = 475;
	sfSprite_setPosition(sprite->dialogue_sprt_wizard,
	sprite->dialogue_pos_wizard);
	sprite->dialogue_pos_teenager.x = 1570;
	sprite->dialogue_pos_teenager.y = 480;
	sfSprite_setPosition(sprite->dialogue_sprt_teenager,
	sprite->dialogue_pos_teenager);
	set_sprite_pos_sub(sprite);
}
