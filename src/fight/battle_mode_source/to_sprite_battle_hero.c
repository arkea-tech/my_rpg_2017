/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** sprite battle heroe
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void set_sprite_battle_heores(sprite_battle_t *sprite_battle)
{
	sprite_battle->sprite_girl_battle = sfSprite_create();
	sprite_battle->sprite_girl_fight_battle = sfSprite_create();
	sprite_battle->sprite_girl_won_battle = sfSprite_create();
	sprite_battle->sprite_girl_lost_battle = sfSprite_create();
	sprite_battle->sprite_girl_damage_battle = sfSprite_create();
	sprite_battle->sprite_girl_dodge_battle = sfSprite_create();
}

void initialisation_position_heroes(position_battle_t *position_battle)
{
	position_battle->position_girl_battle.x = 1680;
	position_battle->position_girl_battle.y = 620;
	position_battle->position_girl_fight_battle.x = 1680;
	position_battle->position_girl_fight_battle.y = 620;
	position_battle->position_girl_won_battle.x = 1680;
	position_battle->position_girl_won_battle.y = 620;
	position_battle->position_girl_lost_battle.x = 1680;
	position_battle->position_girl_lost_battle.y = 620;
	position_battle->position_girl_damage_battle.x = 1680;
	position_battle->position_girl_damage_battle.y = 620;
	position_battle->position_girl_dodge_battle.x = 1680;
	position_battle->position_girl_dodge_battle.y = 620;
}

void set_position_battle_heroes(position_battle_t *sprite_battle_position,
sprite_battle_t *sprite_battle)
{
	sfSprite_setPosition(sprite_battle->sprite_girl_battle,
	sprite_battle_position->position_girl_battle);
	sfSprite_setPosition(sprite_battle->sprite_girl_won_battle,
	sprite_battle_position->position_girl_won_battle);
	sfSprite_setPosition(sprite_battle->sprite_girl_lost_battle,
	sprite_battle_position->position_girl_lost_battle);
	sfSprite_setPosition(sprite_battle->sprite_girl_damage_battle,
	sprite_battle_position
	->position_girl_damage_battle);
	sfSprite_setPosition(sprite_battle->sprite_girl_dodge_battle,
	sprite_battle_position->
	position_girl_dodge_battle);
	sfSprite_setPosition(sprite_battle->sprite_girl_fight_battle,
	sprite_battle_position->
	position_girl_fight_battle);
}

void draw_sprite_hero_battle(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == HERO_STAND) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->
		sprite_girl_battle,
		NULL);
		main_battle->rectangle->verify = 0;
		main_battle->rectangle->verify_dodge = 0;
		main_battle->rectangle->verify_damage = 0;
	}
	if (check == HERO_FIGHT) {
		sfRenderWindow_drawSprite(window,
		main_battle->sprite_battle->
		sprite_girl_fight_battle,
		NULL);
		main_battle->rectangle->verify = 0;
		main_battle->rectangle->verify_dodge = 0;
		main_battle->rectangle->verify_damage = 0;
	}
	draw_sprite_hero_battle_below(window, main_battle, check);
}
