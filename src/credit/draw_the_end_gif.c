/*
** EPITECH PROJECT, 2018
** draw_the_end_gif.c
** File description:
** draw_the_end_gif
*/

#include "game.h"

void	draw_the_end_gif(sfRenderWindow *window, credit_t *credit)
{
	sfRenderWindow_drawSprite(window, credit->the_end, NULL);
	sfRenderWindow_drawSprite(window, credit->left_click, NULL);
}
