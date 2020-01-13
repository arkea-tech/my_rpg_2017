/*
** EPITECH PROJECT, 2018
** menu_main.c
** File description:
** First function to be called when starting the menu
*/

#include "game.h"
#include "menu.h"
#include "my_stdc.h"
#include "pause.h"
#include "csfml_practical.h"
#include "audio.h"
#include "music.h"

static void	move_bg_menu(menu_t *menu)
{
	static sfVector2f	offset = {1.5, 1.5};
	sfVector2f		center = sfView_getCenter(menu->bg_view);

	if (center.y > 1200)
		offset.y = -1.5;
	if (center.x > 1700)
		offset.y = 0;
	if (center.x > 1850)
		offset.x = -1.5;
	if (center.x < 1300)
		offset.x = 1.5;
	sfView_move(menu->bg_view, offset);
}

static void	display_bg(sfRenderWindow *window, menu_t *menu, sfView *view)
{
	if (CLOCK_TIME(menu->clock_menu) > MICROSECONDS(0.4)) {
		move_bg_menu(menu);
		sfClock_restart(menu->clock_menu);
	}
	sfRenderWindow_setView(window, menu->bg_view);
	sfRenderWindow_drawSprite(window, menu->bg, NULL);
	sfRenderWindow_setView(window, view);
}

static void	display_menu(sfRenderWindow *window, game_t *game)
{
	display_bg(window, &game->menu, game->view);
	for (int i = 0; game->menu.menu_buttons[i] != NULL; ++i)
		display_button(window, game->menu.menu_buttons[i]);
	sfRenderWindow_drawText(window, game->menu.credit, NULL);
	sfRenderWindow_drawText(window, game->menu.game_name, NULL);
}

static void	event_handler_menu(game_t *game)
{
	if (game->menu.menu_buttons[PLAY]->state == CLICKED) {
		game->id_screen = CHAR_SELECT;
		game->menu.menu_buttons[PLAY]->state = IDLE;
	}
	if (game->menu.menu_buttons[CONTINUE]->state == CLICKED) {
		game->id_screen = WORLD;
		game->menu.menu_buttons[CONTINUE]->state = IDLE;
	}
	if (game->menu.menu_buttons[LEAVE]->state == CLICKED)
		game->shutdown = true;
	if (game->menu.menu_buttons[SETTINGS]->state == CLICKED) {
		game->pause_b = true;
		game->locked = true;
		game->menu.menu_buttons[SETTINGS]->state = IDLE;
	}
}

bool	launch_menu(sfRenderWindow *window, game_t *game)
{
	display_menu(window, game);
	event_handler_menu(game);
	return (SUCCESS);
}
