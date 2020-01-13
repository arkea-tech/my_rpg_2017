/*
** EPITECH PROJECT, 2018
** create_fight.c
** File description:
** create_fight
*/

#include "game.h"
#include "fight_const.h"
#include "battle_mode.h"
#include "get_func_proto.h"
#include "my_stdc.h"

static sfVector2f get_pos_frame(sfVector2u window_size,
float pos_x_shift)
{
	float marge_from_up = 20;
	sfVector2f pos = {SUBTRACT_PERCENT(window_size.x, 50),
			SUBTRACT_PERCENT(window_size.y, 50)};

	pos.x = pos.x + pos_x_shift;
	pos.y = marge_from_up;
	return (pos);
}

static sfVector2f get_pos_hp(sfVector2f pos_frame)
{
	sfVector2f pos;

	pos.x = pos_frame.x + FRAME_WIDTH_TO_HP;
	pos.y = pos_frame.y + FRAME_HEIGHT_TO_HP;
	return (pos);
}

static bool put_hp_enemy_sprite(fight_hp_t *fight, sfVector2f pos_enemy)
{
	fight->hp_enemy = malloc(sizeof(sfSprite *) * (NB_BATTLE + 1));
	if (fight->hp_enemy == NULL)
		return (ERROR);
	fight->hp_enemy[NB_BATTLE] = NULL;
	for (int i = 0; i < NB_BATTLE; ++i) {
		fight->hp_enemy[i] = create_sprite(HP_BAR_PATH,
		get_rectangle(HP_RECT_VALUES), pos_enemy);
	}
	return (SUCCESS);
}

static bool create_hp_frames(fight_hp_t *fight, sfVector2u window_size)
{
	sfVector2f pos_frame_player =
	get_pos_frame(window_size, MARGE_BTW_HP_BAR / 2);
	sfVector2f pos_frame_enemy =
	get_pos_frame(window_size, (MARGE_BTW_HP_BAR / 2) * -1
	- HP_FRAME_RECT_VALUES[2]);
	sfVector2f pos_player = get_pos_hp(pos_frame_player);
	sfVector2f pos_enemy = get_pos_hp(pos_frame_enemy);

	fight->hp_frame_player =
	create_sprite(FRAME_HP_PATH, get_rectangle(HP_FRAME_RECT_VALUES),
	pos_frame_player);
	fight->hp_frame_ennemy =
	create_sprite(FRAME_HP_PATH, get_rectangle(HP_FRAME_RECT_VALUES),
	pos_frame_enemy);
	fight->hp_player =
	create_sprite(HP_BAR_PATH, get_rectangle(HP_RECT_VALUES), pos_player);
	if (put_hp_enemy_sprite(fight, pos_enemy) == ERROR)
		return (ERROR);
	return (SUCCESS);
}

bool	create_fight(sfRenderWindow *window, game_t *game)
{
	sfVector2u	window_size = sfRenderWindow_getSize(window);

	game->fight.enemy_health = HP_MAX;
	game->fight.main_battle = malloc(sizeof(main_battle_t *)
	* NB_BATTLE * 400);
	create_fight_spell(&(game->fight.spell_fight));
	if (battle_mode_initialisation(game->fight.main_battle) == ERROR)
		return (ERROR);
	if (create_spell_buttons(window_size, &game->fight))
		return (ERROR);
	if (create_hp_frames(&(game->fight.fight_hp),
		sfRenderWindow_getSize(window))	== ERROR)
		return (ERROR);
	create_attack_animation(&(game->fight));
	return (SUCCESS);
}
