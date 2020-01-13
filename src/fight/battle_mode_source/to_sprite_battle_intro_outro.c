/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** intro outro sprite
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "battle_mode.h"

void set_sprite_battle_intro_outro(sprite_battle_t *sprite_battle)
{
	sprite_battle->sprite_you_lost_battle = sfSprite_create();
	sprite_battle->sprite_you_won_battle = sfSprite_create();
	sprite_battle->sprite_lets_fight_battle = sfSprite_create();
}

void initialisation_position_intro_outro(position_battle_t *position_battle)
{
	position_battle->position_you_lost_battle.x = 600;
	position_battle->position_you_lost_battle.y = 250;
	position_battle->position_you_won_battle.x = 700;
	position_battle->position_you_won_battle.y = 250;
	position_battle->position_lets_fight_battle.x = -900;
	position_battle->position_lets_fight_battle.y = 300;
	position_battle->position_lets_fight_move_battle.x = 12;
	position_battle->position_lets_fight_move_battle.y = 0;
}

void set_position_battle_intro_outro(position_battle_t *sprite_battle_position,
sprite_battle_t *sprite_battle)
{
	sfSprite_setPosition(sprite_battle->sprite_you_lost_battle,
	sprite_battle_position->position_you_lost_battle);
	sfSprite_setPosition(sprite_battle->sprite_you_won_battle,
	sprite_battle_position->position_you_won_battle);
	sfSprite_setPosition(sprite_battle->sprite_lets_fight_battle,
	sprite_battle_position->
	position_lets_fight_battle);
}

void draw_sprite_intro_outro_battle_below(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == YOU_LOST) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->
		sprite_you_lost_battle,
		NULL);
		main_battle->
		sprite_battle->verify_lets_fight = 0;
	}
}

void draw_sprite_intro_outro_battle(sfRenderWindow *window,
main_battle_t *main_battle,
short check)
{
	if (check == LETS_FIGHT) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->
		sprite_lets_fight_battle,
		NULL);
		main_battle->
		sprite_battle->verify_lets_fight = 1;
	}
	if (check == YOU_WON) {
		sfRenderWindow_drawSprite(window,
		main_battle->
		sprite_battle->
		sprite_you_won_battle,
		NULL);
		main_battle->
		sprite_battle->verify_lets_fight = 0;
	}
	draw_sprite_intro_outro_battle_below(window, main_battle, check);
}
