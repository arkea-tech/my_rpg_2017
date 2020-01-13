/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg header
*/

#ifndef SPELL_FIGHT_H_
#define SPELL_FIGHT_H_

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

static const int HERO_SPELL_FIRE = 1;
static const int HERO_SPELL_WIND = 2;
static const int HERO_SPELL_EARTH = 3;
static const int HERO_SPELL_WATER = 4;

typedef enum texture_spell_fight_hero_e texture_spell_fight_hero_e;
enum texture_spell_fight_hero_e {
	TEXTURE_HERO_FIRE_SPELL,
	TEXTURE_HERO_WIND_SPELL,
	TEXTURE_HERO_WATER_SPELL,
	TEXTURE_HERO_EARTH_SPELL,
};

typedef enum sprite_spell_fight_hero_e sprite_spell_fight_hero_e;
enum sprite_spell_fight_hero_e {
	SPRITE_HERO_FIRE_SPELL,
	SPRITE_HERO_WIND_SPELL,
	SPRITE_HERO_WATER_SPELL,
	SPRITE_HERO_EARTH_SPELL,
};

typedef enum position_spell_fight_hero_e position_spell_fight_hero_e;
enum position_spell_fight_hero_e {
	POSITION_HERO_FIRE_SPELL,
	POSITION_HERO_WIND_SPELL,
	POSITION_HERO_WATER_SPELL,
	POSITION_HERO_EARTH_SPELL,
};

typedef enum rectangle_spell_fight_hero_e rectangle_spell_fight_hero_e;
enum rectangle_spell_fight_hero_e {
	RECTANGLE_HERO_FIRE_SPELL,
	RECTANGLE_HERO_WIND_SPELL,
	RECTANGLE_HERO_WATER_SPELL,
	RECTANGLE_HERO_EARTH_SPELL,
};

typedef struct texture_spell_fight_hero_t texture_spell_fight_hero_t;
struct texture_spell_fight_hero_t {
	sfTexture **texture_spell_fight_hero;
};

typedef struct sprite_spell_fight_hero_t sprite_spell_fight_hero_t;
struct sprite_spell_fight_hero_t {
	sfSprite **sprite_spell_fight_hero;
};

typedef struct position_spell_fight_hero_t position_spell_fight_hero_t;
struct position_spell_fight_hero_t {
	sfVector2f *position_spell_fight_hero;
};

typedef struct rectangle_spell_fight_hero_t rectangle_spell_fight_hero_t;
struct rectangle_spell_fight_hero_t {
	sfIntRect *rectangle_spell_fight_hero;
};

typedef struct clock_spell_fight_t clock_spell_fight_t;
struct clock_spell_fight_t {
	sfClock *clock_spell_fight_first;
	sfClock *clock_spell_fight_second;
};

typedef struct spell_fight_hero_t spell_fight_hero_t;
struct spell_fight_hero_t {
	texture_spell_fight_hero_t texture_spell_fight_hero;
	sprite_spell_fight_hero_t sprite_spell_fight_hero;
	position_spell_fight_hero_t position_spell_fight_hero;
	rectangle_spell_fight_hero_t rectangle_spell_fight_hero;
	clock_spell_fight_t clock_spell_fight;
};

typedef struct spell_fight_t spell_fight_t;
struct spell_fight_t {
	spell_fight_hero_t spell_fight_hero;
	bool trigger_earth;
	bool trigger_fire;
	bool put_earth;
	bool put_fire;
	bool put_water;
	bool put_wind;
	bool put_earth_boss;
	bool put_fire_boss;
	bool put_water_boss;
	bool put_wind_boss;
	sfClock *spell_clock_end;
};

void (*draw_sprite_fight_spell_hero[5])(sfRenderWindow *window,
spell_fight_t *spell_fight);

static const char SPELL_FIRE_PICTURE[] =
"ressources/img/spell_fight_ressources/animation_fire_fight.png";
static const char SPELL_WATER_PICTURE[] =
"ressources/img/spell_fight_ressources/animation_water_fight.png";
static const char SPELL_EARTH_PICTURE[] =
"ressources/img/spell_fight_ressources/animation_earth_fight.png";
static const char SPELL_WIND_PICTURE[] =
"ressources/img/spell_fight_ressources/animation_wind_fight.png";

void initialisation_position_fight_spell_hero(spell_fight_t *spell_fight);
void set_position_fight_spell_hero(spell_fight_t *spell_fight);
void create_fight_spell(spell_fight_t *spell_fight);
void fill_array_spell_fight(spell_fight_t *spell_fight);
bool create_texture_spell_fight(spell_fight_t *spell_fight);
void set_texture_spell_fight(spell_fight_t *spell_fight);
void create_sprite_fight_spell_hero(spell_fight_t *spell_fight);
void destroy_spell_fight(spell_fight_t *spell_fight);
void draw_sprite_fight_spell_earth_hero(sfRenderWindow *window,
spell_fight_t *spell_fight);
void draw_sprite_fight_spell_fire_hero(sfRenderWindow *window,
spell_fight_t *spell_fight);
void draw_sprite_fight_spell_wind_hero(sfRenderWindow *window,
spell_fight_t *spell_fight);
void draw_sprite_fight_spell_water_hero(sfRenderWindow *window,
spell_fight_t *spell_fight);
void initialisation_rectangle_spell_fight(spell_fight_t *spell_fight);
void set_rectangle_spell_fight_mode(spell_fight_t *spell_fight);
void clock_create_spell_fight(spell_fight_t *spell_fight);
void clock_get_spell_fight(spell_fight_t *spell_fight);
void set_rectangle_spell_fight(spell_fight_t *spell_fight);
void move_rectangle_spell_fight(spell_fight_t *spell_fight);
void move_position_fight_spell_hero(spell_fight_t *spell_fight);
void draw_fight_spell_hero_conditions(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight);
void move_position_fight_spell_boss(spell_fight_t *spell_fight);
void draw_fight_spell_boss_conditions(sfRenderWindow *window,
spell_fight_t *spell_fight,
const int hero_spell_fight);
#endif /* SPELL_FIGHT_H */
