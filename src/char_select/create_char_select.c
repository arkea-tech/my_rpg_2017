/*
** EPITECH PROJECT, 2018
** create_char_select.c
** File description:
** create_char_select
*/

#include "game.h"
#include "char_select.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static bool	create_char_select_bg(game_t *game)
{
	sfIntRect	area = {0, 0, 1920, 1080};
	sfVector2f	pos = {0.0, 0.0};

	game->select.bg = create_sprite_from_path(CHAR_SELECT_BG, &area, pos);
	if (game->select.bg == NULL)
		return (ERROR);
	return (SUCCESS);
}

static bool	create_char_select_chars(sfVector2u window_size, game_t *game)
{
	sfIntRect	area_male = {50, 25, 900, 700};
	sfIntRect	area_female = {0, 0, 714, 1000};
	sfVector2f	pos = {0, SUBTRACT_PERCENT(window_size.y, 70)};
	const char	*frames_path_male[] = {	CHAR_MALE_BIG,
		CHAR_MALE_BIG_HOVER,
		CHAR_MALE_BIG_HOVER};
	const char	*frames_path_female[] = {CHAR_FEMALE_BIG,
		CHAR_FEMALE_BIG_HOVER,
		CHAR_FEMALE_BIG_HOVER};

	game->select.char_male = create_button(NULL, frames_path_male,
	&area_male, pos);
	pos.x = SUBTRACT_PERCENT(window_size.x, 40);
	pos.y = SUBTRACT_PERCENT(window_size.y, 93);
	game->select.char_female = create_button(NULL, frames_path_female,
	&area_female, pos);
	if (game->select.char_male == NULL || game->select.char_female == NULL)
		return (ERROR);
	button_set_sprite_scale(game->select.char_male, 1.3);
	return (SUCCESS);
}

static bool	create_char_select_text(sfVector2u window_size, game_t *game)
{
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 50),
		SUBTRACT_PERCENT(window_size.y, 90)};

	game->select.title = create_text(pos, CHAR_SELECTION, 70);
	if (game->select.title == NULL)
		return (ERROR);
	text_set_center(game->select.title);
	return (SUCCESS);
}

static bool	create_char_select_return_button(game_t *game)
{
	sfIntRect	area = {0, 0, 64, 64};
	sfVector2f	pos = {0, 0};
	const char	*frames_button[] = {BUTTONS_MINI_IDLE,
		BUTTONS_MINI_HOVER,
		BUTTONS_MINI_CLICKED};

	game->select.return_b = create_button(NULL, frames_button, &area, pos);
	if (game->select.return_b == NULL)
		return (ERROR);
	return (SUCCESS);
}

bool	create_char_select(sfRenderWindow *window, game_t *game)
{
	sfVector2u	window_size = sfRenderWindow_getSize(window);

	if (create_char_select_bg(game)
		|| create_char_select_chars(window_size, game)
		|| create_char_select_text(window_size, game)
		|| create_char_select_confirm(window_size, game)
		|| create_char_select_return_button(game))
		return (ERROR);
	return (SUCCESS);
}
