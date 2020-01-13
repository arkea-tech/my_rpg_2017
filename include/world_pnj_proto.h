/*
** EPITECH PROJECT, 2018
** world_pnj_proto.h
** File description:
** world_pnj_proto.h
*/

#ifndef		_WORLD_PNJ_PROTO_H_
#define		_WORLD_PNJ_PROTO_H_
#include <SFML/Graphics.h>
#include "game.h"

bool create_spirits(sfVector2u window_size, game_t *game);
void display_pnj_chest(sfRenderWindow *window, game_t *game);

#endif	/* _WORLD_PNJ_PROTO_H_ */
