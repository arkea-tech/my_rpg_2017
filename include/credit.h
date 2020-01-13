/*
** EPITECH PROJECT, 2018
** credit.h
** File description:
** description
*/

#ifndef		_CREDIT_
#	define	_CREDIT_

#include <stdint.h>
#include <SFML/Graphics.h>

typedef struct particule_s	particule_t;

typedef struct credit_s {
	sfVertexArray	*particules_red;
	sfVertexArray	*particules_blue;
	sfVertexArray	*particules_white;
	sfVertexArray	*particules_green;
	particule_t	**particules_infos_red;
	particule_t	**particules_infos_blue;
	particule_t	**particules_infos_white;
	particule_t	**particules_infos_green;
	sfClock		*clock;
	sfClock		*clock_gravity_center;
	sfVector2f	pos_click;
	sfSprite	*the_end;
	sfSprite	*left_click;
} credit_t;

static const int	NB_PARTICULE_CREDIT = 400;
static const float	RADIUS_MAX = 50.0;
static const float	RADIUS_BIG = 100.0;

static const char	THE_END_IMG[] = "ressources/img/credit/the_end.png";
static const sfIntRect	AREA_THE_END_IMG = {0, 0, 1920, 1080};

static const char	LEFT_CLICK_IMG[] = "ressources/img/credit/left_click.png";
static const sfIntRect	AREA_LEFT_CLICK_IMG = {0, 0, 1600, 1600};

#include "game.h"

uint8_t create_ending_credit(sfRenderWindow *window, game_t *game, int count);
bool	launch_credit(sfRenderWindow *window, game_t *game);
uint8_t destroy_and_create_particules_end(	credit_t *credit,
						sfRenderWindow *window);
float	get_random_angle(void);
void	rotate_balls(credit_t *credit);
int	change_radius(float radius);
uint8_t create_infos_about_red_circle(	credit_t	*credit,
					sfVector2i	mouse_pos,
					int		count);
uint8_t create_infos_about_white_circle(credit_t	*credit,
					sfVector2i	mouse_pos,
					int		count);
uint8_t create_infos_about_green_circle(credit_t	*credit,
					sfVector2i	mouse_pos,
					int		count);
uint8_t create_infos_about_blue_circle(	credit_t	*credit,
					sfVector2i	mouse_pos,
					int		count);
void	update_slope_and_intercept(	sfVector2f	a,
					sfVector2f	b,
					double		*slope,
					double		*intercept);
void	slowly_move_the_gravity_center(	particule_t	*info,
					double		slope,
					double		intercept);
void	draw_the_end_gif(sfRenderWindow *window, credit_t *credit);
void	destroy_credit(credit_t *credit);

#endif	/* _CREDIT_ */
