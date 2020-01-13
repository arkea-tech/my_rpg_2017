/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** dialogue
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

static void	call_dialogue_3_to_12(sfRenderWindow *win,
int next,
call_dia_t *di,
int number)
{
	if (number == 12)
		draw_sprite_text_chest_blue(win, next, di->sprite, di->font);
	if (number == 11)
		draw_sprite_text_chest_green(win, next, di->sprite, di->font);
	if (number == 10)
		draw_sprite_text_sub_9(win, next, di->sprite, di->font);
	if (number == 9)
		draw_sprite_text_sub_8(win, next, di->sprite, di->font);
	if (number == 8)
		draw_sprite_text_sub_7(win, next, di->sprite, di->font);
	if (number == 7)
		draw_sprite_text_sub_6(win, next, di->sprite, di->font);
	if (number == 6)
		draw_sprite_text_sub_5(win, next, di->sprite, di->font);
	if (number == 5)
		draw_sprite_text_sub_4(win, next, di->sprite, di->font);
	if (number == 4)
		draw_sprite_text_sub_3(win, next, di->sprite, di->font);
	if (number == 3)
		draw_sprite_text_sub_2(win, next, di->sprite);
}

void	call_dialogue(int number, sfRenderWindow *window, game_t *game)
{
	struct_sprite	*sprite = &game->dialogue.sprites;
	struct_font	*font = &game->dialogue.fonts;
	call_dia_t	dia = {sprite, font};
	int	next = game->dialogue.next;

	call_dialogue_3_to_12(window, next, &dia, number);
	call_dialogue_13_to_20(window, next, &dia, number);
	call_dialogue_21_to_28(window, next, &dia, number);
	call_dialogue_29_to_36(window, next, &dia, number);
	call_dialogue_37_to_45(window, next, &dia, number);
	call_dialogue_46_to_53(window, next, &dia, number);
	if (number == 54)
		draw_sprite_text_spirit_forest_won(window, next, dia.sprite,
		dia.font);
	if (number == 2)
		draw_sprite_text_sub_1(window, next, sprite, font);
	if (number == 1)
		draw_sprite_text(window, next, sprite, font);
}
