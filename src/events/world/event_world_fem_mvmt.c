/*
** EPITECH PROJECT, 2018
** event_world_fem_mvmt.c
** File description:
** movement fem character
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

void	handle_fem_character_movement(sfEvent *event, game_t *game)
{
	bool		arrow_key_touched = false;
	world_t		*world = &game->world;
	sfVector2f	position;
	sfKeyCode	key_codes[4] = {sfKeyLeft, sfKeyRight,
					sfKeyUp, sfKeyDown};
	void		(*arrow_mvt_fcts_fem[])(world_t *,
					sfVector2f, game_t *, bool *) = \
		{&left_key_fem, &right_key_fem, &up_key_fem, &down_key_fem};

	position = sfSprite_getPosition(world->char_fem_mini[CUR_ROT][CUR_POS]);
	for (int i = 0 ; i < 4 ; ++i) {
		if (event->key.code == key_codes[i]) {
			arrow_mvt_fcts_fem[i](	world, position, game,
						&arrow_key_touched);
			break;
		}
	}
	set_cur_posture(arrow_key_touched, game);
}
