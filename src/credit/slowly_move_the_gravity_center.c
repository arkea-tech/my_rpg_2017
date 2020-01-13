/*
** EPITECH PROJECT, 2018
** slowly_move_the_gravity_center.c
** File description:
** description
*/

#include <math.h>
#include "game.h"
#include "csfml_practical.h"
#include "my_stdc.h"

/* Going to B from A */
void	update_slope_and_intercept(	sfVector2f	a,
					sfVector2f	b,
					double		*slope,
					double		*intercept)
{
	*slope = (b.y - a.y) / (b.x - a.x);
	*intercept = a.y - *slope * a.x;
}

static double	get_distance(sfVector2f vertex_1, sfVector2f vertex_2)
{
	return (sqrtl(	pow(vertex_1.x - vertex_2.x, 2)
			+ pow(vertex_1.y - vertex_2.y, 2)));
}

static void	update_pos_x(sfVector2f *gravity_cent, double destination_x)
{
	double	gravity_center_speed = 20.0;

	if (gravity_cent->x <= destination_x)
		gravity_cent->x += gravity_center_speed;
	else
		gravity_cent->x -= gravity_center_speed;
}

static void	update_pos_y(	sfVector2f	*gravity_cent,
				double		destination_y,
				double		slope,
				double		intercept)
{
	double	pos_y_before_update = gravity_cent->y;
	double	pos_y_after_update = 0.0;
	double	delta_y = 0.0;
	double	gravity_center_speed = 20.0;

	pos_y_after_update = slope * gravity_cent->x + intercept;
	delta_y = pos_y_after_update - pos_y_before_update;
	if (fabs(delta_y) > gravity_center_speed) {
		if (destination_y >= pos_y_before_update)
			gravity_cent->y += gravity_center_speed;
		else
			gravity_cent->y -= gravity_center_speed;
		gravity_cent->x = (gravity_cent->y - intercept) / slope;
	}
}

void	slowly_move_the_gravity_center(	particule_t	*info,
					double		slope,
					double		intercept)
{
	sfVector2f	destination = info->destination_gravity_center;

	if (get_distance(info->gravity_cent, destination) < 20.0
	|| slope == -42.42)
		return;
	if (CLOCK_TIME(info->clock_gravity_center_mvmt) < MICROSECONDS(1.0)) {
		update_pos_x(&info->gravity_cent, destination.x);
		update_pos_y(&info->gravity_cent, destination.y, slope, intercept);
	} else
		sfClock_restart(info->clock_gravity_center_mvmt);
}
