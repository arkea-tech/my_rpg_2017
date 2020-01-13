/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg header
*/

#ifndef BATTLE_H_
#define BATTLE_H_

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

static const int BOSS_ANIMATION_ENABLE = 1;
static const int BOSS_ANIMATION_DISABLE = 0;
static const int HERO_GIRL_BATTLE = 1;
static const int HERO_BOY_BATTLE = 2;
static const int HERO_STAND = 1;
static const int HERO_FIGHT = 2;
static const int HERO_WON = 3;
static const int HERO_LOST = 4;
static const int HERO_DODGE = 5;
static const int HERO_DAMAGE = 6;
static const int BOSS_FOREST = 0;
static const int BOSS_WATER = 1;
static const int BOSS_VOLCANO = 2;
static const int BOSS_WIND = 3;
static const int LETS_FIGHT = 1;
static const int YOU_WON = 2;
static const int YOU_LOST = 3;

typedef struct texture_battle_t texture_battle_t;
struct texture_battle_t {
	sfTexture *texture_water;
	sfTexture *texture_wind;
	sfTexture *texture_fire;
	sfTexture *texture_nature;
	sfTexture *texture_boss_water;
	sfTexture *texture_boss_wind;
	sfTexture *texture_boss_fire;
	sfTexture *texture_boss_nature;
	sfTexture *texture_girl_battle;
	sfTexture *texture_you_lost_battle;
	sfTexture *texture_you_won_battle;
	sfTexture *texture_lets_fight_battle;
};

typedef struct sprite_battle_t sprite_battle_t;
struct sprite_battle_t {
	sfSprite *sprite_water;
	sfSprite *sprite_wind;
	sfSprite *sprite_fire;
	sfSprite *sprite_nature;
	sfSprite *sprite_boss_water;
	sfSprite *sprite_boss_wind;
	sfSprite *sprite_boss_fire;
	sfSprite *sprite_boss_nature;
	sfSprite *sprite_girl_battle;
	sfSprite *sprite_girl_fight_battle;
	sfSprite *sprite_girl_won_battle;
	sfSprite *sprite_girl_lost_battle;
	sfSprite *sprite_girl_damage_battle;
	sfSprite *sprite_girl_dodge_battle;
	sfSprite *sprite_you_won_battle;
	sfSprite *sprite_you_lost_battle;
	sfSprite *sprite_lets_fight_battle;
	bool verify_lets_fight;
};

typedef struct position_battle_t position_battle_t;
struct position_battle_t {
	sfVector2f position_boss_water;
	sfVector2f position_boss_wind;
	sfVector2f position_boss_fire;
	sfVector2f position_boss_nature;
	sfVector2f position_girl_battle;
	sfVector2f position_girl_fight_battle;
	sfVector2f position_girl_won_battle;
	sfVector2f position_girl_lost_battle;
	sfVector2f position_girl_damage_battle;
	sfVector2f position_girl_dodge_battle;
	sfVector2f position_you_lost_battle;
	sfVector2f position_you_won_battle;
	sfVector2f position_lets_fight_battle;
	sfVector2f position_lets_fight_move_battle;
};

typedef struct rectangle_battle_t rectangle_battle_t;
struct rectangle_battle_t {
	sfIntRect rectangle_boss_water;
	sfIntRect rectangle_boss_wind;
	sfIntRect rectangle_boss_fire;
	sfIntRect rectangle_boss_forest;
	sfIntRect rectangle_hero_girl_standing;
	sfIntRect rectangle_hero_girl_fight;
	sfIntRect rectangle_hero_girl_won;
	sfIntRect rectangle_hero_girl_lost;
	sfIntRect rectangle_hero_girl_damage;
	sfIntRect rectangle_hero_girl_dodge;
	sfIntRect rectangle_you_lost;
	sfIntRect rectangle_you_won;
	int verify;
	bool verify_damage;
	bool verify_dodge;
	bool verify_lost;
	bool verify_trigger_dodge;
	bool verify_trigger_damage;
	bool verify_trigger_lost;
	bool boss_animation_enable_disable;
};

typedef struct clock_battle_t clock_battle_t;
struct clock_battle_t {
	sfClock *clock_boss;
	sfClock *clock_intro_outro;
};

typedef struct main_battle_t main_battle_t;
struct main_battle_t {
	texture_battle_t *texture_battle;
	texture_battle_t *texture_battle_girl;
	sprite_battle_t *sprite_battle;
	position_battle_t *position_battle;
	rectangle_battle_t *rectangle;
	clock_battle_t *clock_battle;
};

typedef struct window_t window_t;
struct window_t {
	sfRenderWindow *window;
	sfEvent event;
	sfVideoMode mode;
};

static const char WATER_BACKGROUND[] =
"ressources/img/battle_mode_ressources/water_background.jpg";
static const char WIND_BACKGROUND[] =
"ressources/img/battle_mode_ressources/wind_background.jpg";
static const char VOLCANO_BACKGROUND[] =
"ressources/img/battle_mode_ressources/volcano_background.jpg";
static const char FOREST_BACKGROUND[] =
"ressources/img/battle_mode_ressources/forest_background.jpg";
static const char WATER_BOSS[] =
"ressources/img/battle_mode_ressources/boss_water.png";
static const char WIND_BOSS[] =
"ressources/img/battle_mode_ressources/boss_wind.png";
static const char VOLCANO_BOSS[] =
"ressources/img/battle_mode_ressources/boss_volcano.png";
static const char FOREST_BOSS[] =
"ressources/img/battle_mode_ressources/boss_forest.png";
static const char CHARACTER_GIRL_BATTLE[] =
"ressources/img/battle_mode_ressources/character_girl_battle.png";
static const char CHARACTER_BOY_BATTLE[] =
"ressources/img/battle_mode_ressources/character_boy_battle.png";
static const char YOU_LOST_BATTLE[] =
"ressources/img/battle_mode_ressources/you_lost_battle.png";
static const char YOU_WON_BATTLE[] =
"ressources/img/battle_mode_ressources/you_won_battle.png";
static const char LETS_FIGHT_BATTLE[] =
"ressources/img/battle_mode_ressources/lets_fight_battle.png";

bool battle_mode_initialisation(main_battle_t *main_battle);
void set_texture_battle_background(texture_battle_t *texture_battle,
			sprite_battle_t *sprite_battle);
bool initialisation_texture_battle_background(texture_battle_t
					*texture_battle);
void set_sprite_battle_background(sprite_battle_t *sprite_battle);
void draw_sprite_background_battle(sfRenderWindow *window,
				main_battle_t *main_battle, short check);
void set_texture_battle_boss(texture_battle_t *texture_battle,
			sprite_battle_t *sprite_battle);
bool initialisation_texture_battle_boss(texture_battle_t *texture_battle);
void set_sprite_battle_boss(sprite_battle_t *sprite_battle);
void set_position_battle_boss(position_battle_t *sprite_battle_position,
			sprite_battle_t *sprite_battle);
void initialisation_position_boss(position_battle_t *position_battle);
void draw_sprite_background_battle_below(sfRenderWindow *window,
						main_battle_t *main_battle,
						short check);
void initialisation_rectangle_characters_battle(rectangle_battle_t *rectangle);
void animation_characters_battle(rectangle_battle_t *rectangle);
int condition_animation_characters_battle(rectangle_battle_t *rectangle,
					position_battle_t *position_battle,
					sprite_battle_t *sprite_battle);
void set_rectangle_characters_battle(main_battle_t *main_battle);
void clock_to_create_battle(clock_battle_t *clock_battle);
void clock_get_boss_battle(clock_battle_t *clock_battle,
			rectangle_battle_t *rectangle);
void set_position_battle_heroes(position_battle_t *sprite_battle_position,
				sprite_battle_t *sprite_battle);
void initialisation_position_heroes(position_battle_t *position_battle);
void set_sprite_battle_heores(sprite_battle_t *sprite_battle);
bool initialisation_texture_battle_heroes(texture_battle_t *texture_battle,
					short check);
void set_texture_battle_heroes(texture_battle_t *texture_battle,
			sprite_battle_t *sprite_battle);
void initialisation_rectangle_characters_below_battle(rectangle_battle_t
						*rectangle);
int condition_animation_characters_battle_below(rectangle_battle_t *rectangle,
						position_battle_t
						*position_battle,
						sprite_battle_t
						*sprite_battle);
void set_rectangle_characters_below_battle(rectangle_battle_t *rectangle,
					sprite_battle_t *sprite_battle,
					position_battle_t *position_battle);
void
initialisation_rectangle_characters_below_below_battle(rectangle_battle_t
						*rectangle);
void condition_animation_characters_battle_below_below(rectangle_battle_t
						*rectangle,
						position_battle_t
						*position_battle,
						sprite_battle_t
						*sprite_battle);
void animation_characters_below_battle(rectangle_battle_t *rectangle);
void set_texture_battle_intro_outro(texture_battle_t *texture_battle,
				sprite_battle_t *sprite_battle);
bool initialisation_texture_battle_intro_outro(texture_battle_t
					*texture_battle);
void set_sprite_battle_intro_outro(sprite_battle_t *sprite_battle);
void initialisation_position_intro_outro(position_battle_t *position_battle);
void set_position_battle_intro_outro(position_battle_t *sprite_battle_position,
				sprite_battle_t *sprite_battle);
void set_rectangle_characters_below_below_battle(rectangle_battle_t *rectangle,
						sprite_battle_t *sprite_battle,
						position_battle_t
						*position_battle);
void animation_characters_intro_outro(rectangle_battle_t *rectangle);
void draw_sprite_intro_outro_battle(sfRenderWindow *window,
				main_battle_t *main_battle, short check);
void draw_sprite_hero_battle(sfRenderWindow *window,
			main_battle_t *main_battle,
			short check);
void draw_sprite_hero_battle_below(sfRenderWindow *window,
				main_battle_t *main_battle,
				short check);
void draw_sprite_hero_battle_below_below(sfRenderWindow *window,
					main_battle_t *main_battle,
					short check);
void set_rectangle_boss_animation_battle(main_battle_t *main_battle,
					int boss_animation);
void animation_characters_battle_boss_conditions(rectangle_battle_t *rectangle);
void draw_sprite_intro_outro_battle_below(sfRenderWindow *window,
					main_battle_t *main_battle,
					short check);
bool initialisation_texture_battle_mode(main_battle_t *main_battle);
void set_sprite_position_battle_mode(main_battle_t *main_battle);
void set_texture_clock_rectangle_battle_mode(main_battle_t *main_battle);
void battle_mode_malloc(main_battle_t *main_battle);
void texture_battle_initialisation(main_battle_t *main_battle);
void	init_structures_to_zero(main_battle_t *main_battle);

#endif /* BATTLE_H */
