/*
** EPITECH PROJECT, 2018
** settings.h
** File description:
** settings.h
*/

#ifndef		_SETTINGS_H_
#define		_SETTINGS_H_

#include "button.h"

typedef struct pause_s {
	sfSprite	*frame;
	button_t	**buttons;
	sfIntRect	volum_rect;
	sfSprite	*volum_bar;
} pause_t;

enum	pause_button_e {
	RESUME,
	LEAVE_GAME,
	DOWN,
	UP
};

static const char PATH_FRAME_PAUSE[] = "ressources/img/frame_pause.png";

#include "game.h"

void		create_sound_button(button_t **buttons,
const char	*path_buttons[], sfVector2u window_size);
void		show_pause_window(sfRenderWindow *window, game_t *game);
bool		create_pause(sfVector2u window_size, game_t *game);
void		handle_escape_key(sfEvent *event, game_t *game);
void		destroy_pause(game_t *game);
void		reset_pos_to_middle_of_the_room(game_t *game);

#endif /* _SETTINGS_H_ */
