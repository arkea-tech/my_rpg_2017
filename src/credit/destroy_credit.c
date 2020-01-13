/*
** EPITECH PROJECT, 2018
** destroy_credit.c
** File description:
** description
*/

#include "game.h"

static void	destroy_particule_tab(particule_t **particule_tab)
{
	for (int i = 0 ; particule_tab[i] != NULL ; ++i)
		free(particule_tab[i]);
}

void	destroy_credit(credit_t *credit)
{
	sfVertexArray_destroy(credit->particules_red);
	sfVertexArray_destroy(credit->particules_blue);
	sfVertexArray_destroy(credit->particules_green);
	sfVertexArray_destroy(credit->particules_white);
	sfClock_destroy(credit->clock);
	sfSprite_destroy(credit->the_end);
	sfSprite_destroy(credit->left_click);
	destroy_particule_tab(credit->particules_infos_red);
	destroy_particule_tab(credit->particules_infos_blue);
	destroy_particule_tab(credit->particules_infos_white);
	destroy_particule_tab(credit->particules_infos_green);
}
