/*
** EPITECH PROJECT, 2018
** create_character_male.c
** File description:
** create_character_male
*/

#include "game.h"
#include "csfml_practical.h"
#include "my_stdc.h"

static bool	create_character_down(	sfVector2f	pos,
					sfIntRect	*area,
					game_t		*game)
{
	game->world.char_male_mini[DOWN_W][0] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[DOWN_W][1] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[DOWN_W][2] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	return (SUCCESS);
}

static bool	create_character_left(	sfVector2f	pos,
					sfIntRect	*area,
					game_t		*game)
{
	area->left -= 48 * 2;
	area->top += 48;
	game->world.char_male_mini[LEFT_W][0] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[LEFT_W][1] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[LEFT_W][2] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	return (SUCCESS);
}

static bool	create_character_right(	sfVector2f	pos,
					sfIntRect	*area,
					game_t		*game)
{
	area->left -= 48 * 2;
	area->top += 48;
	game->world.char_male_mini[RIGHT_W][0] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[RIGHT_W][1] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[RIGHT_W][2] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	return (SUCCESS);
}

static bool	create_character_up(	sfVector2f	pos,
					sfIntRect	*area,
					game_t		*game)
{
	area->left -= 48 * 2;
	area->top += 48;
	game->world.char_male_mini[UP_W][0] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[UP_W][1] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	area->left += 48;
	game->world.char_male_mini[UP_W][2] = \
			create_sprite_from_path(CHAR_MALE_MINI, area, pos);
	return (SUCCESS);
}

bool	create_character_male(	sfVector2f	pos,
				sfIntRect	*area,
				game_t		*game)
{
	create_character_down(pos, area, game);
	create_character_left(pos, area, game);
	create_character_right(pos, area, game);
	create_character_up(pos, area, game);
	return (SUCCESS);
}
