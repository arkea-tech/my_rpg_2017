/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** rpg
*/

#ifndef _DIALOGUE_H_
#define _DIALOGUE_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>

typedef struct struct_sprite_s	struct_sprite;
struct struct_sprite_s {
	sfSprite *dialogue_sprt_1;
	sfSprite *dialogue_sprt_chest_blue;
	sfSprite *dialogue_sprt_chest_green;
	sfSprite *dialogue_sprt_chest_red;
	sfSprite *dialogue_sprt_chest_potion;
	sfSprite *dialogue_sprt_boss;
	sfSprite *dialogue_sprt_hero_boy;
	sfSprite *dialogue_sprt_wizard;
	sfSprite *dialogue_sprt_teenager;
	sfSprite *dialogue_sprt_teenager_boy;
	sfSprite *dialogue_sprt_teenager_girl;
	sfSprite *dialogue_sprt_grandma;
	sfSprite *dialogue_sprt_grandpa;
	sfSprite *dialogue_sprt_man;
	sfSprite *dialogue_sprt_woman;
	sfSprite *dialogue_sprt_cat;
	sfSprite *dialogue_sprt_magus;
	sfSprite *dialogue_sprite_spirit;
	sfSprite *dialogue_sprite_old_lady_desert;
	sfSprite *dialogue_sprite_lady_desert;
	sfSprite *dialogue_sprite_boy_desert;
	sfSprite *dialogue_sprite_man_desert;
	sfSprite *dialogue_sprite_woman_desert;
	sfSprite *dialogue_sprite_spirit_sea;
	sfSprite *dialogue_sprite_spirit_wind;
	sfSprite *dialogue_sprite_villager_sea;
	sfSprite *dialogue_sprite_grandpa_sea;
	sfSprite *dialogue_sprite_chest_white;
	sfSprite *dialogue_sprite_spirit_forest;
	sfVector2f dialogue_pos_1;
	sfVector2f dialogue_pos_chest_blue;
	sfVector2f dialogue_pos_chest_green;
	sfVector2f dialogue_pos_chest_red;
	sfVector2f dialogue_pos_chest_potion;
	sfVector2f dialogue_pos_boss;
	sfVector2f dialogue_pos_hero_boy;
	sfVector2f dialogue_pos_wizard;
	sfVector2f dialogue_pos_teenager;
	sfVector2f dialogue_pos_grandma;
	sfVector2f dialogue_pos_grandpa;
	sfVector2f dialogue_pos_teenager_girl;
	sfVector2f dialogue_pos_teenager_boy;
	sfVector2f dialogue_pos_man;
	sfVector2f dialogue_pos_woman;
	sfVector2f dialogue_pos_cat;
	sfVector2f dialogue_pos_magus;
	sfVector2f dialogue_position_spirit;
	sfVector2f dialogue_position_old_lady_desert;
	sfVector2f dialogue_position_lady_desert;
	sfVector2f dialogue_position_boy_desert;
	sfVector2f dialogue_position_man_desert;
	sfVector2f dialogue_position_woman_desert;
	sfVector2f dialogue_position_spirit_wind;
	sfVector2f dialogue_position_spirit_sea;
	sfVector2f dialogue_position_villager_sea;
	sfVector2f dialogue_position_grandpa_sea;
	sfVector2f dialogue_position_chest_white;
	sfVector2f dialogue_position_spirit_forest;
};

typedef struct struct_text_s struct_text;
struct struct_text_s {
	sfTexture *dialogue_txt_1;
	sfTexture *dialogue_txt_chest_blue;
	sfTexture *dialogue_txt_chest_green;
	sfTexture *dialogue_txt_chest_red;
	sfTexture *dialogue_txt_boss;
	sfTexture *dialogue_txt_hero_boy;
	sfTexture *dialogue_txt_wizard;
	sfTexture *dialogue_txt_teenager;
	sfTexture *dialogue_txt_grandma;
	sfTexture *dialogue_txt_grandpa;
	sfTexture *dialogue_txt_teenager_girl;
	sfTexture *dialogue_txt_teenager_boy;
	sfTexture *dialogue_txt_man;
	sfTexture *dialogue_txt_woman;
	sfTexture *dialogue_txt_cat;
	sfTexture *dialogue_txt_magus;
	sfTexture *dialogue_txt_chest_potion;
	sfTexture *dialogue_texture_spirit;
	sfTexture *dialogue_texture_old_lady_desert;
	sfTexture *dialogue_texture_lady_desert;
	sfTexture *dialogue_texture_boy_desert;
	sfTexture *dialogue_texture_man_desert;
	sfTexture *dialogue_texture_woman_desert;
	sfTexture *dialogue_texture_spirit_sea;
	sfTexture *dialogue_texture_villager_sea;
	sfTexture *dialogue_texture_grandpa_sea;
	sfTexture *dialogue_texture_spirit_wind;
	sfTexture *dialogue_texture_chest_white;
	sfTexture *dialogue_texture_spirit_forest;
};

typedef struct struct_font_s struct_font;
struct struct_font_s {
	sfText *text;
	sfText *text_2;
	sfText *text_chest;
	sfText *text_boss;
	sfText *text_boss_down;
	sfFont *rpg_style;
	sfFont *rpg_style_chest;
	sfFont *rpg_style_boss;
	sfVector2f pos_text;
	sfVector2f pos_text_2;
	sfVector2f pos_text_chest;
	sfVector2f pos_text_boss;
	sfVector2f pos_text_boss_down;
};

typedef struct dialogue_s {
	struct_sprite	sprites;
	struct_text	texts;
	struct_font	fonts;
	int		next;
	bool dialogue_earth;
	bool dialogue_water;
	bool dialogue_air;
	bool dialogue_fire;
	bool dialogue_chest;
	int d_test;
	int b_trigger_a;
	int b_trigger;
	int d_trigger;
} dialogue_t;

typedef struct struct_window struct_window;
struct struct_window {
	sfRenderWindow *window;
	sfEvent event;
	sfVideoMode mode;
	int next;
	int next_txt;
};

typedef struct call_dia_s {
	struct_sprite	*sprite;
	struct_font	*font;
} call_dia_t;

static const char	DIA_MYST_POT[] = \
"      You have found the \n\n        EARTH, FIRE, WATER\n\n         \
and WIND element !";
static const char	DIA_HEAL_POT[] = \
"         You have found a\n\n           HEALTH POTION !";
static const char	DIA_H_D_POT[] = \
"         You have found a\n\nHEALTH and a DAMAGE POTION!";
static const char	DIA_H_M_POT[] = \
"You have found some HEALTH\n\n                      and a \n\n           \
MYSTERY POTION !";
static const char	W_ELEM[] = \
"\n            You earned the\n\n              WIND ELEMENT !";
static const char	B_DEFEAT[] = \
"I hope you did not seriously think that you would\n\nbeat me easily.";

#include "game.h"

void draw_sprite_text_chest_potion_wind_first(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_potion_sea_first(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_potion_sea_second(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_potion_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_desert_win(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_volcano_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_forest_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_wind_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_sea_meet(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boss_desert_loose(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_red_after_winning(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_white(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_red(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_blue(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_man_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_boy_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_final(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_lady_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_old_lady_desert(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_grandpa_sea_repeat_house(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_grandpa_sea_inside_house(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_grandpa_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_villager_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_forest_won(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_wind(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_forest(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_sea(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_fire_after_winning(sfRenderWindow *window,
int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_way_volcano(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_north_volcano(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit_desert_village(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_spirit(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_chest_green(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_gugus_final(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_gugus_equipment_not_found(sfRenderWindow *window,
int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_gugus_equipment_found(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_9(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_8(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_7(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_6(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_5(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_4(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_3(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text_sub_2(sfRenderWindow *window, int next,
struct_sprite *sprite);
void draw_sprite_text_sub_1(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);
void draw_sprite_text(sfRenderWindow *window, int next,
struct_sprite *sprite,
struct_font *font);

void init_set_font_potion_wind_first(struct_font *font);
void init_set_font_potion_sea_first(struct_font *font);
void init_set_font_potion_sea_second(struct_font *font);
void init_set_font_potion_desert(struct_font *font);
void init_set_font_wind_chest_won(struct_font *font);
void init_set_font_boss_wind_fighting(struct_font *font, int next);
void init_set_font_boss_wind_near_forest(struct_font *font, int next);
void init_set_font_boss_wind_near_mountain(struct_font *font, int next);
void init_set_font_boss_sea_loss(struct_font *font, int next);
void init_set_font_boss_sea_win(struct_font *font, int next);
void init_set_font_boss_sea_meet(struct_font *font, int next);
void init_set_font_boss_desert_win(struct_font *font, int next);
void init_set_font_boss_wind_win(struct_font *font, int next);
void init_set_font_boss_wind_lost(struct_font *font, int next);
void init_set_font_boss_desert_loose(struct_font *font, int next);
void init_set_font_chest_red_after_winning(struct_font *font, int next);
void init_set_font_chest_white(struct_font *font, int next);
void init_set_font_chest_red(struct_font *font, int next);
void init_set_font_chest_blue_victory(struct_font *font, int next);
void init_set_font_chest_blue(struct_font *font, int next);
void init_set_font_chest_green_element(struct_font *font, int next);
void init_set_font_chest_green(struct_font *font, int next);
void text_story_forest_spirit_won(struct_font *font, int next);
void text_story_wind_spirit(struct_font *font, int next);
void text_story_desert_man(struct_font *font, int next);
void text_story_desert_boy(struct_font *font, int next);
void text_story_desert_lady(struct_font *font, int next);
void text_story_desert_old_lady(struct_font *font, int next);
void text_story_grandpa_sea_house_repeat(struct_font *font, int next);
void text_story_grandpa_sea(struct_font *font, int next);
void text_story_villager_sea(struct_font *font, int next);
void text_story_spirit_forest(struct_font *font, int next);
void text_story_spirit_final(struct_font *font, int next);
void text_story_spirit_sea(struct_font *font, int next);
void text_story_spirit_sea_win(struct_font *font, int next);
void text_story_spirit_way_volcano(struct_font *font, int next);
void text_story_spirit_north_volcano(struct_font *font, int next);
void text_story_spirit_desert_village(struct_font *font, int next);
void text_story_first_spirit(struct_font *font, int next);
void text_story_magus_final(struct_font *font, int next);
void text_story_spirit_fire_after_winning(struct_font *font,
					int next);
void init_set_font_boss_wind_near_volcano(struct_font *font,
					int next);
void text_story_grandpa_sea_inside_house(struct_font *font,
					int next);
void text_story_magus_equipment_found(struct_font *font, int next);
void text_story_magus_equipment_not_found(struct_font *font,
					int next);
void init_set_font_sub_10(struct_font *font, int next);
void init_set_font_sub_9(struct_font *font, int next);
void init_set_font_sub_8(struct_font *font, int next);
void init_set_font_sub_7(struct_font *font, int next);
void init_set_font_sub_6(struct_font *font, int next);
void init_set_font_sub_5(struct_font *font, int next);
void init_set_font_sub_4(struct_font *font, int next);
void init_set_font_sub_3(struct_font *font, int next);
void init_set_font_sub_2(struct_font *font, int next);
void init_set_font_sub_1(struct_font *font, int next);
void init_set_font(struct_font *font, int next);

int init_font(struct_font *font);
void set_font_boss(struct_font *font, char array[100], char const *array_next);
void set_font_chest(struct_font *font, char const *array, sfColor color);
void set_font(struct_font *font, char array[100], char array_2[100]);
void set_font_pos_boss(struct_font *font);
void set_font_pos_chest(struct_font *font);
void set_font_pos(struct_font *font);

int init_texture_boss_potion(struct_text *texture);
int init_texture_sub_chest(struct_text *texture);
int init_texture_sub_2(struct_text *texture);
int init_texture_sub_1(struct_text *texture);
int init_texture_sub(struct_text *texture);
int init_texture(struct_text *texture, bool sex);
void set_texture_sub_1(struct_text *texture, struct_sprite *sprite);
void set_texture_sub(struct_text *texture, struct_sprite *sprite);
void set_texture(struct_text *texture, struct_sprite *sprite);

void set_sprite(struct_sprite *sprite);
void set_sprite_pos_boss_potion(struct_sprite *sprite);
void set_sprite_pos_sub_chest(struct_sprite *sprite);
void set_sprite_pos_sub_1(struct_sprite *sprite);
void set_sprite_pos_sub(struct_sprite *sprite);
void set_sprite_pos(struct_sprite *sprite);

void	call_dialogue_initialisation(int number, struct_font *font, int next);
void	call_dialogue(int number, sfRenderWindow *window, game_t *game);
void	handle_events_dialogue(sfEvent *event, game_t *game);
void	init_set_font(struct_font *font, int next);
int8_t	create_dialogue_one_time_only(game_t *game);

void	call_dialogue_init_45_to_54(	int		number,
					struct_font	*font,
					int		next);
void	call_dialogue_init_35_to_44(	int		number,
					struct_font	*font,
					int		next);
void	call_dialogue_init_25_to_34(	int		number,
					struct_font	*font,
					int		next);
void	call_dialogue_init_15_to_24(	int		number,
					struct_font	*font,
					int		next);
void	call_dialogue_init_6_to_14(	int		number,
					struct_font	*font,
					int		next);
void	call_dialogue_46_to_53(	sfRenderWindow	*win,
				int		next,
				call_dia_t	*di,
				int		number);
void	call_dialogue_37_to_45(	sfRenderWindow	*win,
				int		nex,
				call_dia_t	*di,
				int		number);
void	call_dialogue_29_to_36(	sfRenderWindow	*win,
				int		next,
				call_dia_t	*di,
				int		number);
void	call_dialogue_21_to_28(	sfRenderWindow	*win,
				int		next,
				call_dia_t	*di,
				int		number);
void	call_dialogue_13_to_20(	sfRenderWindow	*win,
				int		next,
				call_dia_t	*di,
				int		number);

int	init_tex_five(struct_text *texture);

#endif /* _DIALOGUE_ */
