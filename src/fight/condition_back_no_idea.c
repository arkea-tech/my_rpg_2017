/*
** EPITECH PROJECT, 2018
** condition_back_no_idea.c
** File description:
** description
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

void	condition_back_no_idea(game_t *game)
{
	if (game->fight.spell_fight.spell_fight_hero.
	position_spell_fight_hero.
	position_spell_fight_hero
	[POSITION_HERO_EARTH_SPELL].x <= 600
	&& game->fight.fight_cl_spells.earth_clicked) {
		game->fight.spell_fight.
		spell_fight_hero.position_spell_fight_hero.
		position_spell_fight_hero
		[POSITION_HERO_EARTH_SPELL].x = 1600;
	}
}
