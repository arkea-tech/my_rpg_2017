/*
** EPITECH PROJECT, 2018
** text_story_magus.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void text_story_spirit_fire_after_winning(struct_font *font,
int next)
{
	if (next == 0)
		set_font(font, "You won again !\nYou are so strong !",
		"Spirit");
	if (next == 1)
		set_font(font, "Come with me my friend we still have two magi\
c\nstones to get to bring back the peace ! ", "Spirit");
	set_font_pos(font);
}

void text_story_spirit_north_volcano(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "I feel like you need to go this way.\nI felt th\
e stone over there. ", "Spirit");
	set_font_pos(font);
}

void text_story_spirit_desert_village(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "This desert is wide.\nYou will need a lot brav\
ery to get this stone back.", "Spirit");
	if (next == 1)
		set_font(font, "Converse with the inhabitants of the deser\
t.\nTheir statements will be precious to you. ", "Spirit");
	set_font_pos(font);
}

void text_story_first_spirit(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Finally, you arrived !\nI heard of your \
heroic deeds.", "Spirit");
	if (next == 1)
		set_font(font, "I knew that we chose \
the right person.", "Spirit");
	if (next == 2)
		set_font(font, "The next evil has the blue \
stone,\nbut we just feel too weak to defeat him. . .", "Spirit");
	if (next == 3)
		set_font(font, "So please take him down, \
he might not be far. . .", "Spirit");
	set_font_pos(font);
}

void text_story_magus_final(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "You have completed your quest.\nThank you for y\
our help.", "Gugus");
	if (next == 1)
		set_font(font, "You have restored order,\nwe can now live in pe\
ace.", "Gugus");
	set_font_pos(font);
}
