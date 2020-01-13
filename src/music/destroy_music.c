/*
** EPITECH PROJECT, 2018
** destroy_musics.c
** File description:
** destroy_musics
*/

#include "game.h"

void	destroy_musics(game_t *game)
{
	sfMusic_destroy(game->audio.music);
}
