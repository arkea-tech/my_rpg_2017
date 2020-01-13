/*
** EPITECH PROJECT, 2018
** rotate_balls.c
** File description:
** rotate balls from gravity center
*/

#include <math.h>
#include "my_stdc.h"
#include "credit.h"

static float	change_angle(float angle, float speed)
{
	if (RADIAN(angle) > RADIAN(360))
		angle = 0.0;
	return (angle + speed);
}

static void	set_a_new_gravity_angle(credit_t *credit, int i)
{
	credit->particules_infos_red[i]->angle_gravity = \
change_angle(credit->particules_infos_red[i]->angle_gravity, RADIAN(50));
	credit->particules_infos_green[i]->angle_gravity = \
change_angle(credit->particules_infos_green[i]->angle_gravity, RADIAN(50));
	credit->particules_infos_white[i]->angle_gravity = \
change_angle(credit->particules_infos_white[i]->angle_gravity, RADIAN(50));
	credit->particules_infos_blue[i]->angle_gravity = \
change_angle(credit->particules_infos_blue[i]->angle_gravity, RADIAN(50));
}

static void	set_the_new_gravity_angle_to_red_particules(credit_t	*credit,
int	i)
{
	credit->particules_infos_red[i]->center.x = \
	credit->particules_infos_red[i]->gravity_cent.x + RADIUS_BIG
	* cos(RADIAN(credit->particules_infos_red[i]->angle_gravity));
	credit->particules_infos_red[i]->center.y = \
	credit->particules_infos_red[i]->gravity_cent.y + RADIUS_BIG *
	sin(RADIAN(credit->particules_infos_red[i]->angle_gravity));
}

static void	set_the_new_gravity_angle_to_blue_particules(credit_t	*credit,
int	i)
{
	credit->particules_infos_blue[i]->center.x = \
	credit->particules_infos_blue[i]->gravity_cent.x + RADIUS_BIG *
	cos(RADIAN(credit->particules_infos_blue[i]->angle_gravity));
	credit->particules_infos_blue[i]->center.y = \
	credit->particules_infos_blue[i]->gravity_cent.y + RADIUS_BIG *
	sin(RADIAN(credit->particules_infos_blue[i]->angle_gravity));
}

void	rotate_balls(credit_t *credit)
{
	for (int i = 0;credit->particules_infos_red[i] != NULL;++i) {
		set_a_new_gravity_angle(credit, i);
		set_the_new_gravity_angle_to_red_particules(credit, i);
		set_the_new_gravity_angle_to_blue_particules(credit, i);
		credit->particules_infos_white[i]->center.x = \
		credit->particules_infos_white[i]->gravity_cent.x + RADIUS_BIG *
		cos(RADIAN(credit->particules_infos_white[i]->angle_gravity));
		credit->particules_infos_white[i]->center.y = \
		credit->particules_infos_white[i]->gravity_cent.y + RADIUS_BIG *
		sin(RADIAN(credit->particules_infos_white[i]->angle_gravity));
		credit->particules_infos_green[i]->center.x = \
		credit->particules_infos_green[i]->gravity_cent.x + RADIUS_BIG *
		cos(RADIAN(credit->particules_infos_green[i]->angle_gravity));
		credit->particules_infos_green[i]->center.y = \
		credit->particules_infos_green[i]->gravity_cent.y + RADIUS_BIG *
		sin(RADIAN(credit->particules_infos_green[i]->angle_gravity));
	}
}
