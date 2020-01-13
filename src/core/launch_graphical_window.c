/*
** EPITECH PROJECT, 2018
** launch_graphical_game.c
** File description:
** launch graphical window
*/

#include "menu.h"
#include "my_stdc.h"
#include "event.h"
#include "pause.h"
#include "char_select.h"
#include "save.h"
#include "intro.h"
#include "intro_proto.h"
#include "audio.h"
#include "game.h"
#include "credit.h"

static bool	launch_the_correct_game_content(sfRenderWindow *window,
game_t	*game,
int	id_screen_tmp,
bool	(*launch_game_content_tmp)(sfRenderWindow *, game_t *))
{
	if (id_screen_tmp == game->id_screen)
		if (launch_game_content_tmp(window, game))
			return (ERROR);
	return (SUCCESS);
}

static bool	launch_game_content(sfRenderWindow *window,
game_t *game,
gui_t *gui)
{
	int	ids_screen[] = {INTRO, MENU, CHAR_SELECT, WORLD, FIGHT, CREDIT};
	bool	(*tab_of_game_content[])(sfRenderWindow *, game_t *) = {
		&launch_intro, &launch_menu,
		&launch_char_select, &launch_world,
		&launch_fight, &launch_credit, NULL};

	for (int i = 0;i < NB_SCENE;++i)
		if (launch_the_correct_game_content(window, game, ids_screen[i],
			tab_of_game_content[i]))
			return (ERROR);
	if (game->pause_b)
		show_pause_window(window, game);
	if (game->id_screen == MENU || game->id_screen == CHAR_SELECT) {
		if (destroy_and_create_particules(gui))
			return (ERROR);
		sfRenderWindow_drawVertexArray(window, gui->particules, NULL);
	}
	return (SUCCESS);
}

static bool	initialize_struct_game(game_t *game)
{
	game->id_screen = INTRO;
	game->menu.menu_buttons = NULL;
	game->shutdown = false;
	game->pause_b = false;
	game->locked = false;
	game->character.gender_changed = true;
	if (load_save(game))
		return (ERROR);
	return (SUCCESS);
}

bool	launch_graphical_window(void)
{
	gui_t gui;
	game_t game;

	initialize_struct_game(&game);
	if (create_program(&gui, &game))
		return (ERROR);
	sfRenderWindow_setMouseCursorVisible(gui.window, sfFalse);
	while (sfRenderWindow_isOpen(gui.window)) {
		sfRenderWindow_clear(gui.window, sfBlack);
		sfMusic_setLoop(game.audio.music, sfTrue);
		if (launch_game_content(gui.window, &game, &gui))
			return (ERROR);
		event_handling(&gui, &game);
		display_mouse(&gui);
		sfRenderWindow_display(gui.window);
	}
	if (autosave(&game))
		return (ERROR);
	destroy_program(&gui, &game);
	return (SUCCESS);
}
