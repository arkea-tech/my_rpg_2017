/*
** EPITECH PROJECT, 2018
** set_pos_char_fem.c
** File description:
** set_pos_char fem
*/

#include "world.h"
#include "csfml_practical.h"

static void	set_sprite_position(	int8_t		gender,
					sfSprite	*sprite_male,
					sfSprite	*sprite_female,
					sfVector2f	pos)
{
	if (gender == MALE)
		sfSprite_setPosition(sprite_male, pos);
	else
		sfSprite_setPosition(sprite_female, pos);
}

/* gender is either MALE or FEMALE */
void	set_pos_char(sfVector2f pos, world_t *world, int8_t gender)
{
	for (int i = 0 ; i < 4 ; ++i)
		for (int i2 = 0 ; i2 < 3 ; ++i2)
			set_sprite_position(	gender,
						world->char_male_mini[i][i2],
						world->char_fem_mini[i][i2],
						pos);
}

/*
** Set the character position to a specific room.
** argument chapter is either EARTH, FIRE, WATER or AIR
*/
void	set_char_pos_chapter(int8_t chapter, world_t *world, int8_t gender)
{
	switch (chapter) {
	case EARTH:
		set_pos_char(set_pos(1700, 450), world, gender);
		break;
	case FIRE:
		set_pos_char(set_pos(1200, 450), world, gender);
		break;
	case WATER:
		set_pos_char(set_pos(800, 450), world, gender);
		break;
	default:
		set_pos_char(set_pos(300, 450), world, gender);
		break;
	}
}
