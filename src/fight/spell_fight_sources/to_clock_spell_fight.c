/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** clock functions
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "spell_fight.h"

void clock_create_spell_fight(spell_fight_t *spell_fight)
{
	spell_fight->spell_fight_hero.clock_spell_fight.
	clock_spell_fight_first = sfClock_create();
	spell_fight->spell_fight_hero.clock_spell_fight.
	clock_spell_fight_second = sfClock_create();
}

void clock_get_spell_fight(spell_fight_t *spell_fight)
{
	sfTime time_elapsed_first =
	sfClock_getElapsedTime(spell_fight->
	spell_fight_hero.
	clock_spell_fight.
	clock_spell_fight_first);
	if (time_elapsed_first.microseconds >= 160000) {
		move_rectangle_spell_fight(spell_fight);
		sfClock_restart(spell_fight->
		spell_fight_hero.clock_spell_fight.
		clock_spell_fight_first);
	}
}
