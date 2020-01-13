/*
** EPITECH PROJECT, 2018
** fight.h
** File description:
** fight
*/

#ifndef		_FIGHT_H_
#define		_FIGHT_H_
#include <stdint.h>
#include "game.h"
#include "battle_mode.h"
#include "spell_fight.h"

typedef struct fight_hp_s {
	sfSprite *hp_frame_player;
	sfSprite *hp_frame_ennemy;
	sfSprite *hp_player;
	sfSprite **hp_enemy;
} fight_hp_t;

typedef struct fight_cl_spell_s {
	bool	earth_clicked;
	bool	air_clicked;
	bool	water_clicked;
	bool	fire_clicked;
	bool	locked;
	sfClock *clock_cl;
} fight_cl_spell_t;

typedef struct fight_s
{
	fight_hp_t	fight_hp;
	main_battle_t	*main_battle;
	spell_fight_t spell_fight;
	button_t	**button_tab_spells;
	int		enemy_health;
	fight_cl_spell_t fight_cl_spells;
	sfClock		*clock_end_fight;
	sfClock		*cl_turns;
	sfClock     *cl_anim;
	sfSprite *sprite_turn;
	sfText *turn;
	sfText *nb_turn;
	sfFont *f;
	sfTexture *texture_turn;
	sfIntRect rectangle_turn;
	int attacking;
	int move;
} fight_t;

enum spell_e {
	EARTH = 0,
	FIRE,
	WATER,
	AIR
};

static const int NB_SPELL = 4;

static const sfIntRect AREA_BUTTON_SPELLS = {124, 695, 300, 120};

enum id_hp_enemy_e {
	AIR_HP,
	FIRE_HP,
	EARTH_HP,
	WATER_HP
};

enum id_whos_turn_e {
	PLAYER_TURN,
	BOSS_TURN
};

void fight_turns(sfRenderWindow *window, game_t *game, unsigned int *turn_nb);
bool launch_fight(sfRenderWindow *window, game_t *game);
bool create_fight(sfRenderWindow *window, game_t *game);

void display_enemy_lost(sfRenderWindow *window, game_t *game);
void display_player_lost(sfRenderWindow *window, game_t *game);
void reset_enemy_lost(game_t *game, bool *clock_start);
void reset_player_lost(game_t *game, bool *clock_start);
bool is_end_fight(sfRenderWindow *window, game_t *game);

bool update_player_hp(game_t *game);
void update_hp_after_beiing_hit_by_boss(int chapter, int *health);
bool update_enemy_hp(game_t *game);
bool update_fight_hps(game_t *game);

void fill_structure_only_one_time(game_t *game);

uint8_t create_spell_buttons(sfVector2u window_size, fight_t *fight);
void	draw_spell_buttons(sfRenderWindow *window, game_t *game);
uint8_t	handle_buttons_spell_clicks(sfRenderWindow *window,
game_t *game);
void	destroy_fight(game_t *game);
void verify_buttons_clicks_or_clocks_spell(game_t *game);
void conditions_effects_spell_clicks(game_t *game);
void conditions_back_to_beginning_spell_clicks(game_t *game);
void	condition_back_no_idea(game_t *game);
void create_attack_animation(fight_t *st);
void draw_attack_anim(sfRenderWindow *window, game_t *st);

#endif		/* FIGHT_H_ */
