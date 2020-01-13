/*
** EPITECH PROJECT, 2018
** text_story_spirit.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void text_story_spirit_forest(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "This way ! Follow the path !", "Spirit");
	if (next == 1)
		set_font(font, "You are almost there !", "Spirit");
	set_font_pos(font);
}

void text_story_spirit_final(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Whoah ! Are you the one that \
we talked about ?", "Spirit");
	set_font_pos(font);
}

void text_story_spirit_sea(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Whoah ! Are you the one that \
we talked about ?", "Spirit");
	if (next == 1)
		set_font(font, "We are so happy \
to see you here !", "Spirit");
	if (next == 2)
		set_font(font, "Please, retrieve the red stone \
from the evil who\nstole it.", "Spirit");
	set_font_pos(font);
}

void text_story_spirit_sea_win(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, ". . . Show me what \
you have . . . ?", "Spirits");
	if (next == 1)
		set_font(font, "The four stones ?! \
\nThank you so much for your help, \
we are forever\ngrateful.", "Spirits");
	if (next == 2)
		set_font(font, "We can now live in harmony \
alongside our people.\nFollow us, we will bring you \
back to your world.", "Spirits");
	set_font_pos(font);
}

void text_story_spirit_way_volcano(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "You are getting closer...\nFollow the path... ",
		"Spirit");
	set_font_pos(font);
}
