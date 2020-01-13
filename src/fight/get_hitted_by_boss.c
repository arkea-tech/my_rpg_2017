/*
** EPITECH PROJECT, 2018
** get_hitted_by_boss.c
** File description:
** description
*/

#include "game.h"

/* Remove character health */
void	update_hp_after_beiing_hit_by_boss(int chapter, int *health)
{
	switch (chapter) {
	case EARTH:
		(*health) -= 10;
		break;
	case FIRE:
		(*health) -= 20;
		break;
	case WATER:
		(*health) -= 30;
		break;
	case AIR:
		(*health) -= 40;
		break;
	}
	if ((*health) < 0)
		(*health) = 0;
}
