/*
** EPITECH PROJECT, 2018
** update_fight_hp.c
** File description:
** update hp
*/

#include "game.h"
#include "fight.h"
#include "fight_const.h"
#include "battle_mode.h"
#include "my_stdc.h"
#include "csfml_practical.h"

bool update_enemy_hp(game_t *game)
{
	sfIntRect rect = sfSprite_getTextureRect
	(game->fight.fight_hp.hp_enemy[game->state.chapter]);
	int tmp_enemy_px = (game->fight.enemy_health * HP_RECT_VALUES[2])
	/ HP_MAX;

	rect.width = tmp_enemy_px;
	sfSprite_setTextureRect
	(game->fight.fight_hp.hp_enemy[game->state.chapter], rect);
	return (SUCCESS);
}

bool update_player_hp(game_t *game)
{
	sfIntRect rect =
	sfSprite_getTextureRect(game->fight.fight_hp.hp_player);
	int tmp_player_px =
	(game->character.health * HP_RECT_VALUES[2]) / HP_MAX;

	rect.width = tmp_player_px;
	sfSprite_setTextureRect(game->fight.fight_hp.hp_player, rect);
	return (SUCCESS);
}