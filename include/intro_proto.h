/*
** EPITECH PROJECT, 2018
** rpg.h
** File description:
** intro_proto.h file
*/

#ifndef		INTRO_PROTO_H_
#define		INTRO_PROTO_H_
#include <SFML/Graphics.h>
#include "game.h"

bool	launch_intro(sfRenderWindow *window, game_t *game);
int	create_intro(intro_t *intro, sfVector2u window_size);
void	event_handler_intro(sfRenderWindow *window, game_t *game);
int	destroy_intro(intro_t *intro);

#endif	/* INTRO_PROTO_H_ */
