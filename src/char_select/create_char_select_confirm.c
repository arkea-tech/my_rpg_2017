/*
** EPITECH PROJECT, 2018
** create_char_select_confirm.c
** File description:
** create_char_select_confirm
*/

#include "game.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static bool	create_char_select_confirm_bg(sfVector2u window_size,
game_t *game)
{
	sfIntRect	area = {0, 0, 1200, 800};
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 72),
		SUBTRACT_PERCENT(window_size.y, 72)};

	game->select.confirm_bg = \
create_sprite_from_path(CHAR_SELECT_CONFIRM_BG, &area, pos);
	if (game->select.confirm_bg == NULL)
		return (ERROR);
	return (SUCCESS);
}

static bool create_char_select_confirm_buttons(sfVector2u window_size,
game_t *game)
{
	sfIntRect	area = {595, 1020, 265, 90};
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 68),
		SUBTRACT_PERCENT(window_size.y, 33)};
	const char	*path_buttons[] = {PATH_MENU_BUTTONS_IDLE,
		PATH_MENU_BUTTONS_HOVER,
		PATH_MENU_BUTTONS_CLICKED};

	game->select.new = create_button("START GAME", path_buttons, &area,
	pos);
	pos.x = SUBTRACT_PERCENT(window_size.x, 45);
	game->select.back = create_button("BACK", path_buttons, &area, pos);
	if (game->select.new == NULL || game->select.back == NULL)
		return (ERROR);
	return (SUCCESS);
}

static bool create_char_select_confirm_text(sfVector2u window_size,
game_t *game)
{
	sfVector2f	pos = {SUBTRACT_PERCENT(window_size.x, 50),
		SUBTRACT_PERCENT(window_size.y, 68)};

	game->select.confirm_text_m = create_text(pos, CONFIRM_TEXT_M, 30);
	game->select.confirm_text_f = create_text(pos, CONFIRM_TEXT_F, 30);
	pos.y = SUBTRACT_PERCENT(window_size.y, 60);
	game->select.confirm_text_w = create_text(pos, CONFIRM_TEXT_W, 30);
	pos.y = SUBTRACT_PERCENT(window_size.y, 40);
	game->select.confirm_text_final = create_text(pos, CONFIRM_TEXT_FINAL,
	30);
	if (!game->select.confirm_text_m || !game->select.confirm_text_f
		|| !game->select.confirm_text_w
		|| !game->select.confirm_text_final)
		return (ERROR);
	text_set_center(game->select.confirm_text_m);
	text_set_center(game->select.confirm_text_f);
	text_set_center(game->select.confirm_text_w);
	text_set_center(game->select.confirm_text_final);
	return (SUCCESS);
}

static bool	create_char_select_faces(sfVector2u window_size, game_t *game)
{
	sfIntRect	area = {0, 0, 144, 144};
	sfVector2f	pos = {SUBTRACT_PERCENT(window_size.x, 54),
		SUBTRACT_PERCENT(window_size.y, 56)};

	game->select.face_m = create_sprite_from_path(CHAR_MALE_MEDIUM, &area,
	pos);
	area.left = 144 * 3;
	area.top = 144;
	game->select.face_f = create_sprite_from_path(CHAR_FEMALE_MEDIUM, &area,
	pos);
	if (game->select.face_m == NULL || game->select.face_f == NULL)
		return (ERROR);
	return (SUCCESS);
}

bool	create_char_select_confirm(sfVector2u window_size, game_t *game)
{
	if (create_char_select_confirm_bg(window_size, game)
		|| create_char_select_confirm_buttons(window_size, game)
		|| create_char_select_confirm_text(window_size, game)
		|| create_char_select_faces(window_size, game))
		return (ERROR);
	return (SUCCESS);
}
