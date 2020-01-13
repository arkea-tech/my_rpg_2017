/*
** EPITECH PROJECT, 2018
** event_world_male_arrows_mvmt.c
** File description:
** make the male character move
*/

#include "game.h"
#include "csfml_practical.h"
#include "event.h"

static void setup_all_sprite_position_to_same(sfSprite *tab[5][5], game_t *game)
{
	sfVector2f pos = sfSprite_getPosition(tab[CUR_ROT][CUR_POS]);

	for (int i = 0 ; i < 4 ; ++i)
		for (int i2 = 0 ; i2 < 3 ; ++i2)
			sfSprite_setPosition(tab[i][i2], pos);
}

void	left_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched)
{
	sfVector2f	offset;

	*arrow_key_touched = true;
	offset = set_pos(-CHAR_SPEED, 0);
	CUR_ROT = LEFT_W;
	if (!is_future_collision(position, LEFT_W, world)) {
		sfSprite_move(world->char_male_mini[CUR_ROT][CUR_POS], offset);
		setup_all_sprite_position_to_same(world->char_male_mini, game);
	}
}

void	right_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched)
{
	sfVector2f	offset;

	*arrow_key_touched = true;
	offset = set_pos(CHAR_SPEED, 0);
	CUR_ROT = RIGHT_W;
	if (!is_future_collision(position, RIGHT_W, world)) {
		sfSprite_move(world->char_male_mini[CUR_ROT][CUR_POS], offset);
		setup_all_sprite_position_to_same(world->char_male_mini, game);
	}
}

void	up_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched)
{
	sfVector2f	offset;

	*arrow_key_touched = true;
	CUR_ROT = UP_W;
	offset = set_pos(0, -CHAR_SPEED);
	if (!is_future_collision(position, UP_W, world)) {
		sfSprite_move(world->char_male_mini[CUR_ROT][CUR_POS], offset);
		setup_all_sprite_position_to_same(world->char_male_mini, game);
	}
}

void	down_key_male(	world_t		*world,
			sfVector2f	position,
			game_t		*game,
			bool		*arrow_key_touched)
{
	sfVector2f	offset;

	*arrow_key_touched = true;
	offset = set_pos(0, CHAR_SPEED);
	CUR_ROT = DOWN_W;
	if (!is_future_collision(position, DOWN_W, world)) {
		sfSprite_move(world->char_male_mini[CUR_ROT][CUR_POS], offset);
		setup_all_sprite_position_to_same(world->char_male_mini, game);
	}
}
