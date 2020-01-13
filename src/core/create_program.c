/*
** EPITECH PROJECT, 2018
** create_program.c
** File description:
** description
*/

#include "game.h"
#include "gui.h"
#include "my_stdc.h"
#include "intro_proto.h"

static bool	create_game(gui_t *gui, game_t *game)
{
	if (create_world(gui->window, game))
		return (ERROR);
	if (create_pause(sfRenderWindow_getSize(gui->window), game)
	|| create_menu(gui->window, game)
	|| create_char_select(gui->window, game)
	|| create_audio_and_sprites(	&game->audio,
					&game->pause,
					sfRenderWindow_getSize(gui->window),
					game->pause.buttons)
	|| create_intro(&game->intro, sfRenderWindow_getSize(gui->window))
	|| create_fight(gui->window, game))
		return (ERROR);
	return (SUCCESS);
}

bool	create_program(gui_t *gui, game_t *game)
{
	sfFloatRect	rect = {0, 0, 1920, 1080};

	game->view = sfView_createFromRect(rect);
	if (game->view == NULL)
		return (ERROR);
	if (create_window(&gui->window, 1920, 1080)
		|| create_mouse_cursor(PATH_MOUSE_CURSOR, &gui->cursor))
		return (ERROR);
	sfRenderWindow_setView(gui->window, game->view);
	if (create_game(gui, game)
		|| create_particule_mouse(gui, NB_PARTICULE_MENU))
		return (ERROR);
	if (create_ending_credit(gui->window, game, NB_PARTICULE_CREDIT))
		return (ERROR);
	return (SUCCESS);
}
