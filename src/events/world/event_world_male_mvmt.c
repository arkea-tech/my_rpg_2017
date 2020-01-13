/*
** EPITECH PROJECT, 2018
** event_male_mvmt.c
** File description:
** handle mvmt male char
*/

#include "game.h"
#include "csfml_practical.h"
#include "event.h"

static void	set_cur_posture(bool arrow_key_touched, game_t *game)
{
	if (arrow_key_touched) {
		if (CUR_POS == 1)
			CUR_POS = 2;
		else if (CUR_POS == 2)
			CUR_POS = 0;
		else
			CUR_POS = 1;
	}
}

void	handle_male_character_movement(sfEvent *event, game_t *game)
{
	bool		arrow_key_touched = false;
	world_t		*world = &game->world;
	sfVector2f	pos;
	sfKeyCode	key_codes[4] = {sfKeyLeft, sfKeyRight,
					sfKeyUp, sfKeyDown};
	void		(*arrow_mvt_fcts_male[])(world_t *,
					sfVector2f, game_t *, bool *) = \
		{&left_key_male, &right_key_male, &up_key_male, &down_key_male};

	pos = sfSprite_getPosition(world->char_male_mini[CUR_ROT][CUR_POS]);
	for (int i = 0 ; i < 4 ; ++i) {
		if (event->key.code == key_codes[i]) {
			arrow_mvt_fcts_male[i](	world, pos, game,
						&arrow_key_touched);
			break;
		}
	}
	set_cur_posture(arrow_key_touched, game);
}
