/*
** EPITECH PROJECT, 2018
** particules_mouse.c
** File description:
** Particules in menu and and char select
*/

#include <math.h>
#include "gui.h"
#include "csfml_practical.h"
#include "my_stdc.h"

sfVector2f	get_random_velocity(void)
{
	sfVector2f	velocity;
	float angle = 0.0;
	float speed = 0.0;

	angle = (rand() % 360) * 3.14 / 180.0;
	speed = (rand() / (double) RAND_MAX) * (2.0 - 0.1) + 0.1;
	velocity.x = cos(angle) * speed;
	velocity.y = sin(angle) * speed;
	return (velocity);
}

uint8_t	malloc_tab_particules_infos(particule_t ***tab, long count)
{
	for (long i = 0;i < count;++i) {
		(*tab)[i] = malloc(sizeof(particule_t));
		if ((*tab)[i] == NULL)
			return (ERROR);
	}
	(*tab)[count] = NULL;
	return (SUCCESS);
}

uint8_t create_particule_mouse(gui_t *gui, long count)
{
	sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(gui->window);

	gui->particules = sfVertexArray_create();
	gui->particules_infos = malloc(sizeof(particule_t *) * (count + 1));
	gui->clock_particule = sfClock_create();
	if (!gui->particules || !gui->particules_infos || !gui->clock_particule)
		return (ERROR);
	if (malloc_tab_particules_infos(&gui->particules_infos, count))
		return (ERROR);
	for (long i = 0;gui->particules_infos[i] != NULL;++i) {
		gui->particules_infos[i]->lifetime = \
		((rand() % 2000) + 1000) * 1000;
		gui->particules_infos[i]->velocity = get_random_velocity();
		gui->particules_infos[i]->vertex.position.x = mouse_pos.x;
		gui->particules_infos[i]->vertex.position.y = mouse_pos.y;
		gui->particules_infos[i]->vertex.color = get_random_color();
	}
	return (SUCCESS);
}

static void	update_pos_particule(gui_t *gui, sfInt64 elapsed, long i)
{
	sfVector2i	mouse_pos;

	mouse_pos = sfMouse_getPositionRenderWindow(gui->window);
	if (gui->particules_infos[i]->lifetime < 0) {
		gui->particules_infos[i]->vertex.position.x = mouse_pos.x;
		gui->particules_infos[i]->vertex.position.y = mouse_pos.y;
		gui->particules_infos[i]->lifetime = \
		((rand() % 2000) + 1000) * 1000;
	} else {
		gui->particules_infos[i]->vertex.position.x += \
		gui->particules_infos[i]->velocity.x * SECONDS(elapsed);
		gui->particules_infos[i]->vertex.position.y += \
		gui->particules_infos[i]->velocity.y * SECONDS(elapsed);
		sfVertexArray_append(gui->particules,
		gui->particules_infos[i]->vertex);
	}
}

uint8_t destroy_and_create_particules(gui_t *gui)
{
	sfInt64 elapsed = sfClock_restart(gui->clock_particule).microseconds;

	sfVertexArray_destroy(gui->particules);
	gui->particules = sfVertexArray_create();
	if (gui->particules == NULL || !gui->clock_particule)
		return (ERROR);
	for (long i = 0;gui->particules_infos[i] != NULL;++i) {
		gui->particules_infos[i]->lifetime -= elapsed;
		update_pos_particule(gui, elapsed, i);
	}
	return (SUCCESS);
}
