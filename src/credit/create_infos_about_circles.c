/*
** EPITECH PROJECT, 2018
** create_infos_about_circles.c
** File description:
** particule circle infos
*/

#include <math.h>
#include "gui.h"
#include "my_stdc.h"

static void generate_all_particules_infos(particule_t	*info,
sfVector2i mouse_pos,
sfColor color)
{
	int	radius = (rand() / (double)RAND_MAX) * (RADIUS_MAX - 0) + 0;
	float	speed = (rand() / (double)RAND_MAX) * (0.15 - 0.03) + 0.03;

	info->center.x = mouse_pos.x;
	info->center.y = mouse_pos.y;
	info->angle = get_random_angle();
	info->vertex.position.x = mouse_pos.x + radius * cos(info->angle);
	info->vertex.position.y = mouse_pos.y + radius * sin(info->angle);
	info->vertex.color = color;
	info->radius = radius;
	info->speed = speed;
}

uint8_t create_infos_about_blue_circle(credit_t	*credit,
sfVector2i mouse_pos,
int count)
{
	credit->particules_blue = sfVertexArray_create();
	credit->particules_infos_blue = \
	malloc(sizeof(particule_t *) * (count + 1));
	if (!credit->particules_blue || !credit->particules_infos_blue)
		return (ERROR);
	if (malloc_tab_particules_infos(&credit->particules_infos_blue, count))
		return (ERROR);
	for (int i = 0;credit->particules_infos_blue[i] != NULL;++i) {
		generate_all_particules_infos(credit->particules_infos_blue[i],
		mouse_pos, sfBlue);
		credit->particules_infos_blue[i]->center.x = \
		mouse_pos.x + RADIUS_BIG * cos(RADIAN(300));
		credit->particules_infos_blue[i]->center.y = \
		mouse_pos.y + RADIUS_BIG * sin(RADIAN(300));
		credit->particules_infos_blue[i]->angle_gravity = 300;
		credit->particules_infos_blue[i]->gravity_cent.x = mouse_pos.x;
		credit->particules_infos_blue[i]->gravity_cent.y = mouse_pos.y;
	}
	return (SUCCESS);
}

uint8_t create_infos_about_green_circle(credit_t *credit,
sfVector2i mouse_pos,
int count)
{
	credit->particules_green = sfVertexArray_create();
	credit->particules_infos_green = \
	malloc(sizeof(particule_t *) * (count + 1));
	if (!credit->particules_green || !credit->particules_infos_green)
		return (ERROR);
	if (malloc_tab_particules_infos(&credit->particules_infos_green, count))
		return (ERROR);
	for (int i = 0;credit->particules_infos_green[i] != NULL;++i) {
		generate_all_particules_infos(credit->particules_infos_green[i],
		mouse_pos, sfGreen);
		credit->particules_infos_green[i]->center.x = \
		mouse_pos.x + RADIUS_BIG * cos(RADIAN(210));
		credit->particules_infos_green[i]->center.y = \
		mouse_pos.y + RADIUS_BIG * sin(RADIAN(210));
		credit->particules_infos_green[i]->angle_gravity = 210;
		credit->particules_infos_green[i]->gravity_cent.x = mouse_pos.x;
		credit->particules_infos_green[i]->gravity_cent.y = mouse_pos.y;
	}
	return (SUCCESS);
}

uint8_t create_infos_about_white_circle(credit_t *credit,
sfVector2i mouse_pos,
int count)
{
	credit->particules_white = sfVertexArray_create();
	credit->particules_infos_white = \
	malloc(sizeof(particule_t *) * (count + 1));
	if (!credit->particules_white || !credit->particules_infos_white)
		return (ERROR);
	if (malloc_tab_particules_infos(&credit->particules_infos_white, count))
		return (ERROR);
	for (int i = 0;credit->particules_infos_white[i] != NULL;++i) {
		generate_all_particules_infos(credit->particules_infos_white[i],
		mouse_pos, sfWhite);
		credit->particules_infos_white[i]->center.x = \
		mouse_pos.x + RADIUS_BIG * cos(RADIAN(120));
		credit->particules_infos_white[i]->center.y = \
		mouse_pos.y + RADIUS_BIG * sin(RADIAN(120));
		credit->particules_infos_white[i]->angle_gravity = 120;
		credit->particules_infos_white[i]->gravity_cent.x = mouse_pos.x;
		credit->particules_infos_white[i]->gravity_cent.y = mouse_pos.y;
	}
	return (SUCCESS);
}

uint8_t create_infos_about_red_circle(credit_t	*credit,
sfVector2i mouse_pos,
int count)
{
	credit->particules_red = sfVertexArray_create();
	credit->particules_infos_red = \
	malloc(sizeof(particule_t *) * (count + 1));
	if (!credit->particules_infos_red || !credit->particules_red)
		return (ERROR);
	if (malloc_tab_particules_infos(&credit->particules_infos_red, count))
		return (ERROR);
	for (int i = 0;credit->particules_infos_red[i] != NULL;++i) {
		generate_all_particules_infos(credit->particules_infos_red[i],
		mouse_pos, sfRed);
		credit->particules_infos_red[i]->center.x = \
		mouse_pos.x + RADIUS_BIG * cos(RADIAN(30));
		credit->particules_infos_red[i]->center.y = \
		mouse_pos.y + RADIUS_BIG * sin(RADIAN(30));
		credit->particules_infos_red[i]->angle_gravity = 30.0;
		credit->particules_infos_red[i]->gravity_cent.x = mouse_pos.x;
		credit->particules_infos_red[i]->gravity_cent.y = mouse_pos.y;
	}
	return (SUCCESS);
}
