/*
** EPITECH PROJECT, 2018
** gui.h
** File description:
** Header for the graphical interface
*/

#ifndef		_GUI_H_
#	define	_GUI_H_

#include <SFML/Graphics.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct particule_s {
	sfInt64		lifetime;
	sfVector2f	velocity;
	sfVertex	vertex;
	double		angle;
	sfVector2f	center;
	float		radius;
	float		speed;
	sfVector2f	gravity_cent;
	sfVector2f	destination_gravity_center;
	sfClock		*clock_gravity_center_mvmt;
	float		angle_gravity;
} particule_t;

typedef struct gui_s {
	sfRenderWindow	*window;
	sfSprite	*cursor;
	sfVertexArray	*particules;
	particule_t	**particules_infos;
	sfClock		*clock_particule;
} gui_t;

static const long NB_PARTICULE_MENU = 4000;

/* PATH_IMAGES */
static const char PATH_MOUSE_CURSOR[] = "ressources/mouse_cursor/blue.png";

#include "game.h"

/* cfsml practical functions */
bool	create_window(sfRenderWindow **window, int width, int height);

/* Beginning of the program */
bool	launch_graphical_window(void);
bool	create_mouse_cursor(const char filename[], sfSprite **cursor);
void	display_mouse(gui_t *gui);
bool	create_program(gui_t *gui, game_t *game);
void	destroy_program(gui_t *gui, game_t *game);

/* Particules mouse */
uint8_t	destroy_and_create_particules(gui_t *gui);
uint8_t	create_particule_mouse(gui_t *gui, long count);
uint8_t	malloc_tab_particules_infos(particule_t ***tab, long count);
sfVector2f	get_random_velocity(void);

#endif /* _GUI_H_ */
