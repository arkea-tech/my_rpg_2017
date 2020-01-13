/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main function of battle mode sprint 2
*/

#include <stdlib.h>
#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

bool initialisation_texture_battle_mode(main_battle_t *main_battle)
{
	if (initialisation_texture_battle_background(main_battle->
		texture_battle) == 1)
		return (1);
	if (initialisation_texture_battle_boss(main_battle->
		texture_battle) == 1)
		return (1);
	if (initialisation_texture_battle_intro_outro(main_battle->
		texture_battle) == 1)
		return (1);
	return (0);
}

void set_sprite_position_battle_mode(main_battle_t *main_battle)
{
	initialisation_position_boss(main_battle->position_battle);
	initialisation_position_heroes(main_battle->position_battle);
	initialisation_position_intro_outro(main_battle->position_battle);
	set_sprite_battle_background(main_battle->sprite_battle);
	set_sprite_battle_boss(main_battle->sprite_battle);
	set_sprite_battle_heores(main_battle->sprite_battle);
	set_sprite_battle_intro_outro(main_battle->sprite_battle);
	set_position_battle_boss(main_battle->position_battle,
	main_battle->sprite_battle);
	set_position_battle_heroes(main_battle->position_battle,
	main_battle->sprite_battle);
	set_position_battle_intro_outro(main_battle->position_battle,
	main_battle->sprite_battle);
}

void set_texture_clock_rectangle_battle_mode(main_battle_t *main_battle)
{
	set_texture_battle_background(main_battle->texture_battle,
	main_battle->sprite_battle);
	set_texture_battle_boss(main_battle->texture_battle,
	main_battle->sprite_battle);
	set_texture_battle_intro_outro(main_battle->texture_battle,
	main_battle->sprite_battle);
	clock_to_create_battle(main_battle->clock_battle);
	initialisation_rectangle_characters_battle(main_battle->rectangle);
}

bool battle_mode_initialisation(main_battle_t *main_battle)
{
	battle_mode_malloc(main_battle);
	if (initialisation_texture_battle_mode(main_battle) == 1)
		return (1);
	set_sprite_position_battle_mode(main_battle);
	set_texture_clock_rectangle_battle_mode(main_battle);
	init_structures_to_zero(main_battle);
	return (0);
}

void battle_mode_malloc(main_battle_t *main_battle)
{
	main_battle->sprite_battle = malloc(sizeof(sprite_battle_t));
	main_battle->texture_battle = malloc(sizeof(texture_battle_t));
	main_battle->position_battle = malloc(sizeof(position_battle_t));
	main_battle->rectangle = malloc(sizeof(rectangle_battle_t));
	main_battle->clock_battle = malloc(sizeof(clock_battle_t));
}
