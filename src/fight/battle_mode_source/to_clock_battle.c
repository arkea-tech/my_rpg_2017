/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** clock handle functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void clock_to_create_battle(clock_battle_t *clock_battle)
{
	clock_battle->clock_boss = sfClock_create();
	clock_battle->clock_intro_outro = sfClock_create();
}

void clock_get_boss_battle(clock_battle_t *clock_battle,
rectangle_battle_t *rectangle)
{
	sfTime time_elapsed = sfClock_getElapsedTime(clock_battle->clock_boss);
	sfTime time_elapsed_intro_outro = \
	sfClock_getElapsedTime(clock_battle->clock_intro_outro);

	if (time_elapsed.microseconds >= 170000) {
		animation_characters_battle(rectangle);
		sfClock_restart(clock_battle->clock_boss);
	}
	if (time_elapsed_intro_outro.microseconds >= 200000) {
		animation_characters_intro_outro(rectangle);
		sfClock_restart(clock_battle->clock_intro_outro);
	}
}
