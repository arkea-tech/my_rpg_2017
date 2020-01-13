/*
** EPITECH PROJECT, 2018
** menu.h
** File description:
** header for the menu
*/

#ifndef		_MENU_H_
#	define	_MENU_H_

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "button.h"

static const char PATH_MENU_BUTTONS_IDLE[] = \
"ressources/img/menu_buttons_idle.png";
static const char PATH_MENU_BUTTONS_HOVER[] = \
"ressources/img/menu_buttons_hover.png";
static const char PATH_MENU_BUTTONS_CLICKED[] = \
"ressources/img/menu_buttons_clicked.png";
static const char PATH_BG_MENU[] = "ressources/img/menu_bg.jpg";

typedef struct menu_s {
	button_t	**menu_buttons;
	sfText		*credit;
	sfText		*game_name;
	sfSprite	*bg;
	sfView		*bg_view;
	sfClock		*clock_menu;
} menu_t;

enum menu_buttons_e {
	PLAY,
	CONTINUE,
	SETTINGS,
	LEAVE
};

#include "game.h"

bool	launch_menu(sfRenderWindow *window, game_t *game);
bool	create_menu(sfRenderWindow *window, game_t *game);
bool	create_menu_bg(game_t *game);
bool	create_menu_objs(sfRenderWindow *window, game_t *game);
void	destroy_menu(game_t *game);

#endif /* _MENU_H_ */
