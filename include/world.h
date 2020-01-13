/*
** EPITECH PROJECT, 2018
** world.h
** File description:
** world.h
*/

#ifndef		_WORLD_H_
#define		_WORLD_H_

#include <SFML/Graphics.h>
#include <stdint.h>
#include "button.h"
#include "world_pnj.h"

#define		CUR_ROT		game->world.current_rotation
#define		CUR_POS		game->world.current_posture

static const int CHAR_SPEED = 10;

static const sfIntRect	AREA_FEM_CHAR_MINI = {48 * 9, 48 * 4, 46, 46};
static const char	CHAR_FEM_MINI[] = \
			"./ressources/img/char_fem/perso_female_mini.png";

static const sfIntRect	AREA_MALE_CHAR_MINI = {0, 0, 46, 46};
static const char	CHAR_MALE_MINI[] = \
			"./ressources/img/char_male/char_male_mini.png";

static const sfIntRect	AREA_LOCATION_INDICATOR = {0, 0, 228, 150};
static const char	FRAME_LOCATION_INDICATOR[] = \
			"ressources/img/world/location_indicator.png";

static const sfIntRect	AREA_SURROUND_HUD = {0, 0, 1920, 1080};
static const char	SURROUND_HUD_WORLD[] = \
			"ressources/img/world/surround.png";

static const sfIntRect	AREA_INVENTORY_BUTTON = {0, 0, 36, 36};
static const char	INVENTORY_BUTTON_IDLE[] = \
			"ressources/img/world/inventory_button_idle.png";
static const char	INVENTORY_BUTTON_HOVER[] = \
			"ressources/img/world/inventory_button_hover.png";
static const char	INVENTORY_BUTTON_CLICKED[] = \
			"ressources/img/world/inventory_button_clicked.png";

static const sfIntRect	AREA_HELP_BUTTON = {519, 249, 55, 54};
static const char	HELP_BUTTON_IDLE[] = \
			"ressources/img/buttons_mini_idle.png";
static const char	HELP_BUTTON_HOVER[] = \
			"ressources/img/buttons_mini_hover.png";
static const char	HELP_BUTTON_CLICKED[] = \
			"ressources/img/buttons_mini_clicked.png";

static const sfIntRect		AREA_INVENTORY_OPEN = {0, 0, 800, 600};
static const char	INVENTORY_BOY_OPEN[] = \
			"ressources/img/inventory/inventory_boy.png";
static const char	INVENTORY_GIRL_OPEN[] =	\
			"ressources/img/inventory/inventory_girl.png";

/* Elements */
static const sfIntRect	AREA_ELEMENT_EARTH = {2, 339, 46, 44};
static const sfIntRect	AREA_ELEMENT_FIRE = {98, 340, 46, 44};
static const sfIntRect	AREA_ELEMENT_WATER = {145, 337, 47, 46};
static const sfIntRect	AREA_ELEMENT_AIR = {242, 339, 46, 44};

static const char	ELEMENTS_OPEN[] = \
			"ressources/img/chest.png";

/* Inventory */
static const sfIntRect	AREA_STAFF = {67, 577, 31, 31};
static const sfIntRect	AREA_SWORD = {34, 545, 33, 32};
static const sfIntRect	AREA_ARMOR = {127, 639, 33, 31};
static const sfIntRect	AREA_DRESS = {191, 639, 32, 32};
static const sfIntRect	AREA_PLATE = {97, 673, 31, 31};
static const sfIntRect	AREA_GLOVES = {2, 672,27, 31};
static const sfIntRect	AREA_RING = {33, 128, 32, 31};
static const sfIntRect	AREA_FOOD = {96, 194, 32, 31};
static const sfIntRect	AREA_HEAL = {65, 161, 32, 30};

static const char	STUFF_OPEN[] = "ressources/img/stuff.png";

/* How to play texture */
static const char	HOW_TO_PLAY[] = \
			"ressources/img/how_to_play.png";

/* Tiled map textures */
static const char	PATH_TERRAIN[] = "ressources/img/world/terrain.png";

/* Map decoration */
static const char	PATH_FENCE[] = "ressources/img/world/fence.png";
static const sfIntRect	AREA_FENCE_EARTH = {0, 136, 95, 32};
static const sfIntRect	AREA_CLOSING_FENCE_EARTH = {0, 173, 10, 96};
static const sfIntRect	AREA_FENCE_FIRE = {100, 0, 95, 32};
static const sfIntRect	AREA_CLOSING_FENCE_FIRE = {100, 38, 10, 96};
static const sfIntRect	AREA_FENCE_WATER = {300, 272, 95, 32};
static const sfIntRect	AREA_CLOSING_FENCE_WATER = {300, 309, 10, 96};
static const sfIntRect	AREA_FENCE_AIR = {300, 0, 95, 32};

/* These positions are not relative to the window */
static const sfIntRect	RECT_ARENA_EARTH = {1500, 145, 100, 60};
static const sfIntRect	RECT_ARENA_FIRE = {1100, 145, 100, 60};
static const sfIntRect	RECT_ARENA_WATER = {650, 145, 100, 60};
static const sfIntRect	RECT_ARENA_AIR = {200, 145, 100, 60};


typedef struct background_world_t background_world_t;
struct background_world_t {
	sfTexture *texture_world_background;
	sfSprite *sprite_world_background;
};

typedef struct map_s {
	uint8_t		**map_nb;
	sfVertexArray	*tiled_map;
	sfTexture	*textures;
	sfRenderStates	state_texture;
	sfSprite	**fences;
} map_t;

typedef struct dialogue_pos_s {
	sfVector2f position_pnj_earth;
	sfVector2f position_pnj_fire;
	sfVector2f position_pnj_water;
	sfVector2f position_pnj_air;
	sfVector2f position_chest;
	sfVector2f position_character_mini_male;
	sfVector2f position_character_mini_fem;
} dialogue_pos_t;

static const uint8_t TOTAL_FENCES = 57;

static const uint8_t HEIGHT_MAP = 7;
static const uint8_t WIDTH_MAP = 20;

typedef struct world_s {
	sfClock		*clock_mvmt;
	int		pot;
	sfSprite	*sword;
	sfSprite	*staff;
	sfSprite	*armor;
	sfSprite	*dress;
	sfSprite	*gloves;
	sfSprite	*plates;
	sfSprite	*ring;
	sfSprite	*food;
	sfSprite	*heal;
	sfSprite	*elem_air;
	sfSprite	*elem_earth;
	sfSprite	*elem_fire;
	sfSprite	*elem_water;
	sfFont		*police;
	sfText		*lvl;
	sfText		*hp;
	sfText		*fire_damage;
	sfText		*water_damage;
	sfText		*air_damage;
	sfText		*earth_damage;
	int		battle_won;
	int		current_rotation;
	int		current_posture;
	sfSprite	*char_fem_mini[5][5];
	sfSprite	*char_male_mini[5][5];
	sfSprite	*location_indicator;
	char		**locations;
	sfText		*location_text;
	sfSprite	*surround_hud;
	button_t	*inventory_button;
	button_t	*help_button;
	sfSprite	*inventory_boy;
	sfSprite	*inventory_girl;
	map_t		map;
	spirits_t	spirits;
	sfSprite	*chest;
	dialogue_pos_t dialogue_pos;
	background_world_t background_world;
} world_t;

enum rotations_e {
	DOWN_W = 0,
	LEFT_W = 1,
	RIGHT_W = 2,
	UP_W = 3
};

static const int NB_LOCATION = 6;

enum locations_e {
	UNKNOWN = 0,
	FOREST,
	VILLAGE,
	DESERT,
	BEACH,
	MONTAIN
};

#include "game.h"

bool create_background_world(background_world_t *background_world);
void destroy_background_world(background_world_t *background_world);
bool	launch_world(sfRenderWindow *window, game_t *game);
void draw_background_world(	sfRenderWindow		*window,
				background_world_t	*background_world);
bool	create_world(sfRenderWindow *window, game_t *game);
bool	create_character(sfVector2u window_size, game_t *game);
bool	create_character_fem(	sfVector2f	pos,
				sfIntRect	*area,
				game_t		*game);
bool	create_character_male(	sfVector2f	pos,
				sfIntRect	*area,
				game_t		*game);
bool	create_location_indicator(sfVector2u window_size, game_t *game);
bool	create_locations(game_t *game);
bool	create_location_text(sfVector2u window_size, game_t *game);
bool	create_surround_hud(sfVector2u window_size, game_t *game);
bool	create_inventory_button(sfVector2u window_size, game_t *game);
bool	create_inventory(sfVector2u window_size, game_t *game);
bool	create_help_button(sfVector2u window_size, game_t *game);
bool	display_character(sfRenderWindow *window, game_t *game);
void	display_inventory(sfRenderWindow *window, game_t *game);
void	display_location_indicator(sfRenderWindow *window, game_t *game);
void	set_pos_char(sfVector2f pos, world_t *world, int8_t gender);
void	set_char_pos_chapter(int8_t chapter, world_t *world, int8_t gender);
void display_how_to_play(sfRenderWindow *window, game_t *game);
void	display_dialogue(	sfRenderWindow	*window,
				int		id_dialogue,
				game_t		*game);
void world_dialogue_get_position(game_t *game);
void world_dialogue_display_pos_match_male(sfRenderWindow *window,
game_t *game);
void world_cond_chest_pos_match_male(sfRenderWindow *window, game_t *game);
void world_cond_air_pos_match_male(sfRenderWindow *window, game_t *game);
void world_cond_water_pos_match_male(sfRenderWindow *window, game_t *game);
void world_cond_fire_pos_match_male(sfRenderWindow *window, game_t *game);
void world_cond_earth_pos_match_male(sfRenderWindow *window, game_t *game);
void	display_location_text(sfRenderWindow *window, game_t *game);

/*check x button to trigger the dialogues like pokemon*/
void reset_dial_and_x_trigger(game_t *game);
void check_if_x_trigger(game_t *game);
void reset_dial_and_check_if_x_trigger(game_t *game,
	int nb_next, int nb_story_state);
void set_pot_and_character_statistic(game_t *game);

/* Tile map */
uint8_t		create_tile_map(map_t *map, int story_state);
sfVector2f	*get_tex_coord_array(uint8_t terrain_type);
int8_t	display_tile_map(sfRenderWindow *window, map_t *map, int story_state);

/* Map decoration */
uint8_t create_map_decoration(sfVector2u window_size, map_t *map);
uint8_t create_earth_decoration(sfVector2u window_size, map_t *map);
void	display_map_decoration(sfRenderWindow *window, map_t *map, int story);
void	modify_terrain_events(map_t *map, int story_state);
int8_t create_fire_decoration(sfVector2u window_size, map_t *map);
int8_t create_water_decoration(sfVector2u window_size, map_t *map);
int8_t	create_air_decoration(sfVector2u window_size, map_t *map);

/* Destroy */
void	destroy_map(map_t *map);
void	destroy_world(game_t *game);
void	destroy_how_to_play(game_t *game);

#endif	/* _WORLD_H_ */
