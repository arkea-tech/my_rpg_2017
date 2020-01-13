/*
** EPITECH PROJECT, 2018
** call_dialogue_initialisation.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "dialogue.h"

void	call_dialogue_initialisation(int number, struct_font *font, int next)
{
	call_dialogue_init_45_to_54(number, font, next);
	call_dialogue_init_35_to_44(number, font, next);
	call_dialogue_init_25_to_34(number, font, next);
	call_dialogue_init_15_to_24(number, font, next);
	call_dialogue_init_6_to_14(number, font, next);
	if (number == 5)
		init_set_font_sub_5(font, next);
	if (number == 4)
		init_set_font_sub_4(font, next);
	if (number == 3)
		init_set_font_sub_3(font, next);
	if (number == 2)
		init_set_font_sub_2(font, next);
	if (number == 1)
		init_set_font(font, next);
}
