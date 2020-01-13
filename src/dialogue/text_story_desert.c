/*
** EPITECH PROJECT, 2018
** text_story_desert.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void text_story_desert_man(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "The streets are not safe anymore.\nYou are you\
ng and alone, you should not stay here.", "Man");
	if (next == 1)
		set_font(font, "Find yourself a safe place to hide yourself in\
.", "Man");
	if (next == 2)
		set_font(font, "Don't worry about me , I can defend myself.\nW\
hy is everybody so nervous ?\nWhy do people want to leave ?", "Player");
	if (next == 3)
		set_font(font, "We do not know. There is some kind of negati\
ve\nenergy in the north, in the volcano.", "Woman");
	if (next == 4)
		set_font(font, "The ones that were brave enough to venture\nth\
ere did not came back.", "Woman");
	if (next == 5)
		set_font(font, "Well, I know where to go from now.", "Player");
	set_font_pos(font);
}

void text_story_desert_boy(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "My mom said that we are going to move soon.\nI\
don't understand why...", "Boy");
	if (next == 1)
		set_font(font, "I love this house and this city.\nI don't want\
to leave!", "Boy");
	set_font_pos(font);
}

void text_story_desert_lady(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "I red in an old book that centuries ago,\nthis\
village used to be surrounded by spirits.", "Old lady");
	if (next == 1)
		set_font(font, "However nowadays, nobody talks about the spiri\
ts\nanymore.\nHow sad !", "Old lady");
	set_font_pos(font);
}

void text_story_desert_old_lady(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "For some time, it seems that dark energy\nemer\
ged from the volcano north of our village.", "Old lady");
	if (next == 1)
		set_font(font, "I have been there when I was young,\nIt left m\
e with a lot of souvenirs to deal with.", "Old lady");
	set_font_pos(font);
}
