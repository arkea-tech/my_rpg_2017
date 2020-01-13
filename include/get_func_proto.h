/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** get_func_proto.h file
*/

#ifndef GET_FUNC_PROTO_H_
#define GET_FUNC_PROTO_H_

#include <SFML/Graphics.h>

sfSprite *create_sprite(char const *path,
sfIntRect rect, sfVector2f pos);
sfVector2f	get_vector(float x, float y);
sfIntRect	get_rectangle(const int *rect_ltwh);
sfSprite	*get_sprite(const char *pathname, sfIntRect rectangle);
#endif /* GET_FUNC_PROTO_H_ */
