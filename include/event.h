/*
** EPITECH PROJECT, 2018
** event.h
** File description:
** events for the program
*/

#ifndef		_EVENT_H_
#define		_EVENT_H_

#include "game.h"

#define INSIDE(rect, x, y)	sfIntRect_contains(rect, x, y)

enum	directions_e {
	LEFT_DIR = 0,
	RIGHT_DIR,
	UP_DIR,
	DOWN_DIR
};

/* Main Event handling fct */
void	event_handling(gui_t *gui, game_t *game);

/* Menu */
void	handle_events_menu(sfEvent *event, game_t *game);

/* Pause */
void	handle_events_pause(sfEvent *event, game_t *game);

/* Char selection */
void	handle_events_char_select(sfEvent *event, game_t *game);
void	handle_events_char_select_confirm(sfEvent *event, game_t *game);

/* World event */
void	handle_events_world(sfEvent *event, game_t *game);
void	handle_fem_character_movement(sfEvent *event, game_t *game);
bool	is_future_collision(	sfVector2f	position,
				int		direction,
				world_t		*world);
void	down_key_fem(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	up_key_fem(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	right_key_fem(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	left_key_fem(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);

void	handle_male_character_movement(sfEvent *event, game_t *game);
void	down_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	up_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	right_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void	left_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched);
void activate_how_to_play_menu(sfEvent *event, game_t *game);
void handle_how_to_play_event(sfEvent *event, game_t *game, int offset);
bool	detect_anti_spam_mvmt(sfEvent *event, world_t *world);

/* Fight event */
void	handle_events_fight(sfEvent *event, game_t *game);

/* Debug mode */
void	debug_mode(sfEvent *event, game_t *game);

#endif /* _EVENT_H_ */
