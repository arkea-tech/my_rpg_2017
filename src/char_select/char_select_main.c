/*
** EPITECH PROJECT, 2018
** char_select_main.c
** File description:
** char_selectio main display
*/

#include "game.h"
#include "char_select.h"
#include "save.h"
#include "my_stdc.h"

static void	display_char_selection_confirmation_box(sfRenderWindow *window,
game_t *game, int char_chosen)
{
	sfRenderWindow_drawSprite(window, game->select.confirm_bg, NULL);
	display_button(window, game->select.new);
	display_button(window, game->select.back);
	if (char_chosen == MALE) {
		sfRenderWindow_drawText(window, game->select.confirm_text_m,
		NULL);
		sfRenderWindow_drawSprite(window, game->select.face_m, NULL);
	} else {
		sfRenderWindow_drawText(window, game->select.confirm_text_f,
		NULL);
		sfRenderWindow_drawSprite(window, game->select.face_f, NULL);
	}
	sfRenderWindow_drawText(window, game->select.confirm_text_w, NULL);
	sfRenderWindow_drawText(window, game->select.confirm_text_final, NULL);
}

static void	event_handler_button_return(game_t *game)
{
	if (game->select.return_b->state == CLICKED) {
		game->id_screen = MENU;
		game->select.return_b->state = IDLE;
	}
}

static bool	event_handler_confirmation_menu(game_t *game)
{
	if (game->select.back->state == CLICKED) {
		game->locked = false;
		game->char_select_confirm = false;
		game->select.back->state = IDLE;
		game->select.char_male->state = IDLE;
		game->select.char_female->state = IDLE;
	}
	if (game->select.new->state == CLICKED) {
		game->id_screen = WORLD;
		if (erase_save(game))
			return (ERROR);
		game->character.gender = game->select.gender;
		set_char_pos_chapter(EARTH, &game->world, game->select.gender);
		game->select.new->state = IDLE;
		game->locked = false;
		game->char_select_confirm = false;
		game->character.gender_changed = true;
	}
	return (SUCCESS);
}

static void	event_handler_char_select(sfRenderWindow *window, game_t *game)
{
	if (game->select.char_male->state == CLICKED) {
		display_char_selection_confirmation_box(window, game, MALE);
		game->locked = true;
		game->char_select_confirm = true;
		game->select.gender = MALE;
	}
	if (game->select.char_female->state == CLICKED) {
		display_char_selection_confirmation_box(window, game, FEMALE);
		game->locked = true;
		game->char_select_confirm = true;
		game->select.gender = FEMALE;
	}
}

bool	launch_char_select(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->select.bg, NULL);
	display_button(window, game->select.char_male);
	display_button(window, game->select.char_female);
	sfRenderWindow_drawText(window, game->select.title, NULL);
	display_button(window, game->select.return_b);
	event_handler_button_return(game);
	event_handler_char_select(window, game);
	if (event_handler_confirmation_menu(game))
		return (ERROR);
	return (SUCCESS);
}
