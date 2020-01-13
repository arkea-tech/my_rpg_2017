/*
** EPITECH PROJECT, 2018
** settings_main.c
** File description:
** settings_main.c
*/

#include "game.h"
#include "csfml_practical.h"
#include "my_stdc.h"
#include "button.h"
#include "audio.h"
#include "pause.h"

void	reset_pos_to_middle_of_the_room(game_t *game)
{
	if (game->character.gender == MALE)
		set_char_pos_chapter(	game->state.chapter,
					&game->world, MALE);
	else
		set_char_pos_chapter(	game->state.chapter,
					&game->world, FEMALE);
}

static void	go_to_main_menu_from_echap(game_t *game)
{
	if (game->id_screen == FIGHT)
		reset_pos_to_middle_of_the_room(game);
	game->id_screen = MENU;
	game->pause_b = false;
	game->locked = false;
}

void	show_pause_window(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->pause.frame, NULL);
	for (int i = 0; game->pause.buttons[i] != NULL; ++i)
		display_button(window, game->pause.buttons[i]);
	if (game->pause.buttons[RESUME]->state == CLICKED) {
		go_to_main_menu_from_echap(game);
		game->pause.buttons[RESUME]->state = IDLE;
	}
	check_sound_params(&game->pause,
	game->audio.music);
	display_sound_params(window, game->pause.volum_bar,
	game->pause.buttons[UP]->idle, game->pause.buttons[DOWN]->idle);
	if (game->pause.buttons[LEAVE_GAME]->state == CLICKED)
		game->shutdown = true;
}
