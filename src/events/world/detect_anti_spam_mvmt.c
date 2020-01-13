/*
** EPITECH PROJECT, 2018
** detect_anti_spam_mvmt.c
** File description:
** detect anti spam mvmt
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static bool	is_spamming(world_t *world)
{
	if (CLOCK_TIME(world->clock_mvmt) > MICROSECONDS(0.6))
		return (false);
	return (true);
}

/*
** Returns false to let the movement happen
*/
bool	detect_anti_spam_mvmt(sfEvent *event, world_t *world)
{
	if ((event->key.code == sfKeyLeft
	|| event->key.code == sfKeyRight
	|| event->key.code == sfKeyUp
	|| event->key.code == sfKeyDown)
	&& !is_spamming(world)) {
		sfClock_restart(world->clock_mvmt);
		return (false);
	}
	return (true);
}
