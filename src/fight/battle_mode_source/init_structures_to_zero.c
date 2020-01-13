/*
** EPITECH PROJECT, 2018
** init_structures_to_zero.c
** File description:
** description
*/

#include "game.h"

void	init_structures_to_zero(main_battle_t *main_battle)
{
	main_battle->sprite_battle->verify_lets_fight = 0;
	main_battle->rectangle->boss_animation_enable_disable = \
BOSS_ANIMATION_DISABLE;
	main_battle->rectangle->verify = 0;
	main_battle->rectangle->verify_trigger_lost = 0;
	main_battle->rectangle->verify_damage = 0;
	main_battle->rectangle->verify_dodge = 0;
	main_battle->rectangle->verify_trigger_damage = 0;
	main_battle->rectangle->verify_trigger_dodge = 0;
	main_battle->rectangle->verify_lost = 0;
}
