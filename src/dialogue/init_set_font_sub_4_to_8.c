/*
** EPITECH PROJECT, 2018
** init_sub_4_to_8.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_sub_8(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "Do you believe in spirits ? A teenager told me \
that\na random guy asked him about the spirits in the\nforest.", "Woman");
	}
	if (next == 1) {
		set_font(font, "But none of us have ever seen something unusual\
...", "Woman");
	}
	set_font_pos(font);
}

void init_set_font_sub_7(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "My black cat just escaped...\nCould you help me\
searching for it?", "Man");
	}
	set_font_pos(font);
}

void init_set_font_sub_6(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "Hey, do you know how to get to the mall ?",
		"Teenager");
	}
	set_font_pos(font);
}

void init_set_font_sub_5(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "I love reading science fiction books,\nit gives\
me the impression of traveling in time.", "Teenager");
	set_font_pos(font);
}

void init_set_font_sub_4(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "Back in the days,\nthe weather used to be way c\
ooler...", "Old man");
	}
	set_font_pos(font);
}
