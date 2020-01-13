/*
** EPITECH PROJECT, 2018
** intro_launch.c
** File description:
** functions to launch intro
*/

#include "game.h"
#include "menu.h"
#include "csfml_practical.h"
#include "get_func_proto.h"
#include "intro.h"
#include "intro_proto.h"
#include "my_stdc.h"
#include "music.h"
#include "audio.h"

static void update_intro_sprite(sfSprite *intro_sprite)
{
	sfIntRect rectangle = sfSprite_getTextureRect(intro_sprite);

	rectangle.left = rectangle.left + INTRO_ONE_SPRITE_WIDTH;
	if (rectangle.left == INTRO_ONE_SPRITE_WIDTH) {
		rectangle.top = rectangle.top
		+ INTRO_ONE_SPRITE_HEIGHT;
		rectangle.left = 0;
	}
	sfSprite_setTextureRect(intro_sprite, rectangle);
}

static void	display_intro(sfRenderWindow *window, intro_t *intro)
{
	if (CLOCK_TIME(intro->clock_intro) > MICROSECONDS(1.75)) {
		update_intro_sprite(intro->intro_sprite);
		sfClock_restart(intro->clock_intro);
	}
	sfRenderWindow_drawSprite(window, intro->intro_sprite, NULL);
}

static void check_intro_end(sfSprite *intro_sprite, game_t *game)
{
	sfIntRect rectangle = sfSprite_getTextureRect(intro_sprite);

	if (rectangle.top >= INTRO_MAX_TOP
	&& rectangle.left == INTRO_ONE_SPRITE_WIDTH - INTRO_ONE_SPRITE_WIDTH) {
		game->id_screen = MENU;
	}
}

bool	launch_intro(sfRenderWindow *window, game_t *game)
{
	display_intro(window, &game->intro);
	check_intro_end(game->intro.intro_sprite, game);
	event_handler_intro(window, game);
	return (SUCCESS);
}
