/*
** EPITECH PROJECT, 2018
** launch_credit.c
** File description:
** display credit scene
*/

#include <math.h>
#include "game.h"
#include "credit.h"
#include "my_stdc.h"

static float	change_angle(float angle, float speed)
{
	if (RADIAN(angle) > RADIAN(360))
		angle = 0.0;
	return (angle + speed);
}

static void
create_slope_and_intercept_for_new_gravity_center(sfRenderWindow *window,
						particule_t	*info,
						double		*slope,
						double		*intercept)
{
	sfVector2f	destination;
	sfVector2i	mouse_pos;

	mouse_pos = sfMouse_getPositionRenderWindow(window);
	destination.x = mouse_pos.x;
	destination.y = mouse_pos.y;
	update_slope_and_intercept(	info->gravity_cent,
					destination,
					slope,
					intercept);
	info->destination_gravity_center = destination;
}

static void	update_pos_particule(	sfVertexArray	**particules,
					sfInt64		elapsed,
					particule_t	*info,
					sfRenderWindow	*window)
{
	static double	slope = -42.42;
	static double	intercept = 0.0;

	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		info->clock_gravity_center_mvmt = sfClock_create();
		create_slope_and_intercept_for_new_gravity_center(window, info,
							&slope, &intercept);
		slowly_move_the_gravity_center(info, slope, intercept);
	} else {
		slowly_move_the_gravity_center(info, slope, intercept);
		info->radius = change_radius(info->radius);
		info->angle = change_angle(info->angle, info->speed);
		info->vertex.position.x = info->center.x + info->radius
		* cos(info->angle) * SECONDS(elapsed);
		info->vertex.position.y = info->center.y + info->radius
		* sin(info->angle) * SECONDS(elapsed);
		sfVertexArray_append(*particules, info->vertex);
	}
}

uint8_t destroy_and_create_particules_end(credit_t *credit,
sfRenderWindow	*window)
{
	sfInt64 elapsed = sfClock_restart(credit->clock).microseconds;

	sfVertexArray_destroy(credit->particules_red);
	sfVertexArray_destroy(credit->particules_blue);
	credit->particules_red = sfVertexArray_create();
	credit->particules_blue = sfVertexArray_create();
	credit->particules_green = sfVertexArray_create();
	credit->particules_white = sfVertexArray_create();
	for (int i = 0;credit->particules_infos_red[i] != NULL;++i) {
		update_pos_particule(&credit->particules_red, elapsed,
		credit->particules_infos_red[i], window);
		update_pos_particule(&credit->particules_blue, elapsed,
		credit->particules_infos_blue[i], window);
		update_pos_particule(&credit->particules_green, elapsed,
		credit->particules_infos_green[i], window);
		update_pos_particule(&credit->particules_white, elapsed,
		credit->particules_infos_white[i], window);
	}
	return (SUCCESS);
}

bool	launch_credit(sfRenderWindow *window, game_t *game)
{
	static bool	once_only = false;
	sfVector2i	mouse_pos;
	credit_t	*credit = &game->credit;

	if (once_only == false) {
		mouse_pos = sfMouse_getPositionRenderWindow(window);
		credit->pos_click.x = mouse_pos.x;
		credit->pos_click.y = mouse_pos.y;
		once_only = true;
	}
	if (destroy_and_create_particules_end(credit, window))
		return (ERROR);
	rotate_balls(credit);
	draw_the_end_gif(window, credit);
	sfRenderWindow_drawVertexArray(window, credit->particules_red, NULL);
	sfRenderWindow_drawVertexArray(window, credit->particules_blue, NULL);
	sfRenderWindow_drawVertexArray(window, credit->particules_green, NULL);
	sfRenderWindow_drawVertexArray(window, credit->particules_white, NULL);
	display_dialogue(window, 38, game);
	return (SUCCESS);
}
