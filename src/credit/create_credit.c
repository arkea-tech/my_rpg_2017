/*
** EPITECH PROJECT, 2018
** create_credit
** File description:
** description
*/

#include <math.h>
#include "game.h"
#include "credit.h"
#include "my_stdc.h"
#include "csfml_practical.h"

float	get_random_angle(void)
{
	return ((rand() / (double)RAND_MAX) * 2.0 * 3.1415);
}

static int8_t	create_the_end_background(credit_t *credit)
{
	sfIntRect	area = AREA_THE_END_IMG;
	sfVector2f	pos = {0, 0};

	credit->the_end = create_sprite_from_path(THE_END_IMG, &area, pos);
	if (credit->the_end == NULL)
		return (ERROR);
	return (SUCCESS);
}

static int8_t	create_left_click_img(credit_t *credit)
{
	sfIntRect	area = AREA_LEFT_CLICK_IMG;
	sfVector2f	pos = {0, 0};
	sfVector2f	scale = {0.1, 0.1};

	credit->left_click = create_sprite_from_path(LEFT_CLICK_IMG, &area, pos);
	if (credit->left_click == NULL)
		return (ERROR);
	sfSprite_setScale(credit->left_click, scale);
	return (SUCCESS);
}

uint8_t create_ending_credit(sfRenderWindow *window, game_t *game, int count)
{
	credit_t	*credit = &game->credit;
	sfVector2i	mouse_pos = sfMouse_getPositionRenderWindow(window);

	if (create_dialogue_one_time_only(game))
		return (ERROR);
	credit->clock = sfClock_create();
	if (credit->clock == NULL)
		return (ERROR);
	if (create_infos_about_red_circle(credit, mouse_pos, count)
	|| create_infos_about_blue_circle(credit, mouse_pos, count)
	|| create_infos_about_green_circle(credit, mouse_pos, count)
	|| create_infos_about_white_circle(credit, mouse_pos, count))
		return (ERROR);
	if (create_the_end_background(credit)
	|| create_left_click_img(credit))
		return (ERROR);
	return (SUCCESS);
}
