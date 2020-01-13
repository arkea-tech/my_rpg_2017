/*
** EPITECH PROJECT, 2018
** display_inventory.c
** File description:
** This file's utility is to display the inventory.
*/

#include "world.h"
#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"
#include "char_select.h"

static sfText	*get_text(char *str, sfText *text, game_t *game)
{
	text = sfText_create();
	sfText_setString(text, str);
	sfText_setFont(text, game->world.police);
	return (text);
}

static void	text_position(sfText *text, float x, float y)
{
	sfVector2f vect;

	vect.x = x;
	vect.y = y;
	sfText_setPosition(text, vect);
}

static void	display_stats(sfRenderWindow *window, game_t *game)
{
	text_position(game->world.hp, 730, 508);
	game->world.air_damage = get_text(my_itoa(game->character.attack),
					  game->world.air_damage, game);
	text_position(game->world.air_damage, 730, 548);
	game->world.earth_damage = get_text(my_itoa(game->character.attack),
					    game->world.earth_damage, game);
	text_position(game->world.earth_damage, 730, 590);
	game->world.fire_damage = get_text(my_itoa(game->character.attack),
				game->world.fire_damage, game);
	text_position(game->world.fire_damage, 730, 646);
	game->world.water_damage = get_text(my_itoa(game->character.attack),
				game->world.water_damage, game);
	text_position(game->world.water_damage, 730, 696);
	sfRenderWindow_drawText(window, game->world.lvl, NULL);
	sfRenderWindow_drawText(window, game->world.hp, NULL);
	sfRenderWindow_drawText(window, game->world.air_damage, NULL);
	sfRenderWindow_drawText(window, game->world.earth_damage, NULL);
	sfRenderWindow_drawText(window, game->world.fire_damage, NULL);
	sfRenderWindow_drawText(window, game->world.water_damage, NULL);
}

static void	display_elems(sfRenderWindow *window, game_t *game)
{
	if (game->world.pot == 1 && game->character.gender == FEMALE) {
		sfRenderWindow_drawSprite(window, game->world.staff, NULL);
		sfRenderWindow_drawSprite(window, game->world.dress, NULL);
		sfRenderWindow_drawSprite(window, game->world.gloves, NULL);
	}
	if (game->world.pot == 1 && game->character.gender == MALE) {
		sfRenderWindow_drawSprite(window, game->world.sword, NULL);
		sfRenderWindow_drawSprite(window, game->world.armor, NULL);
		sfRenderWindow_drawSprite(window, game->world.plates, NULL);
	}
	if (game->world.battle_won % 10 > 3)
		sfRenderWindow_drawSprite(window, game->world.elem_air, NULL);
	if (game->world.battle_won % 10 > 0)
		sfRenderWindow_drawSprite(window,
					game->world.elem_earth, NULL);
	if (game->world.battle_won % 10 > 2)
		sfRenderWindow_drawSprite(window, game->world.elem_fire, NULL);
	if (game->world.battle_won % 10 > 1)
		sfRenderWindow_drawSprite(window,
					game->world.elem_water, NULL);
}

void	display_inventory(sfRenderWindow *window, game_t *game)
{
	if (game->character.gender == MALE)
		sfRenderWindow_drawSprite(window,
					  game->world.inventory_boy, NULL);
	if (game->character.gender == FEMALE)
		sfRenderWindow_drawSprite(window,
					  game->world.inventory_girl, NULL);
	game->world.police = \
		sfFont_createFromFile("ressources/font/morpheus.ttf");
	game->world.lvl = get_text(my_itoa(game->character.level),
				game->world.lvl, game);
	text_position(game->world.lvl, 790, 348);
	game->world.hp = get_text(my_itoa(game->character.health),
				game->world.hp, game);
	display_stats(window, game);
	display_elems(window, game);
	if (game->world.pot == 1) {
		sfRenderWindow_drawSprite(window, game->world.ring, NULL);
		sfRenderWindow_drawSprite(window, game->world.food, NULL);
		sfRenderWindow_drawSprite(window, game->world.heal, NULL);
	}
}
