/*
** EPITECH PROJECT, 2018
** destroy_program.c
** File description:
** destroy_program
*/

#include "game.h"
#include "intro_proto.h"

static void	destroy_particule_tab(particule_t **particule_tab)
{
	for (int i = 0 ; particule_tab[i] != NULL ; ++i)
		free(particule_tab[i]);
}

void	destroy_program(gui_t *gui, game_t *game)
{
	destroy_intro(&game->intro);
	destroy_menu(game);
	destroy_char_select(game);
	destroy_pause(game);
	destroy_musics(game);
	destroy_world(game);
	destroy_fight(game);
	destroy_credit(&game->credit);
	sfRenderWindow_destroy(gui->window);
	sfSprite_destroy(gui->cursor);
	sfVertexArray_destroy(gui->particules);
	destroy_particule_tab(gui->particules_infos);
	sfClock_destroy(gui->clock_particule);
}
