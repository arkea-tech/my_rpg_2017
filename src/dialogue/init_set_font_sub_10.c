/*
** EPITECH PROJECT, 2018
** init_set_font_sub.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void text_story_magus_equipment_not_found(struct_font *font,
int next)
{
	if (next == 0)
		set_font(font, "Show me what you have...", "Gugus");
	if (next == 1)
		set_font(font, "This is not enough. Search again.", "Gugus");
	set_font_pos(font);
}

void text_story_magus_equipment_found(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "What have you found ? Show me!", "Gugus");
	if (next == 1)
		set_font(font, "Well i am impressed, you have been quick !\nYou\
can not go back for the moment.\nSo go deeper into the forest, the spirits wil\
l\nguide you.", "Gugus");
	if (next == 2)
		set_font(font, "You must bring back peace into the elements.\n \
Good luck my young fried, and be careful...!", "Gugus");
	set_font_pos(font);
}

static void	init_set_font_sub_ten(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Finally, you came back. I knew you would.",
		"Gugus");
	if (next == 1)
		set_font(font, "Holly... Tell me what's going on !", "Player");
	if (next == 2)
		set_font(font, "Well, let me explain.", "Gugus");
	if (next == 3)
		set_font(font, "It seems that you have been chosen by the spiri\
ts to\nbring back the peace into the forest.They are asking\nfor your help beca\
use they can't solve their\nproblem themselves.", "Gugus");
	if (next == 4)
		set_font(font, "There due was to, originally protect the four s\
tones.\nEach of the elements is attached to its stone.\nTogether, the stones gi\
ves off a perfect \nbalance.", "Gugus");
	if (next == 5)
		set_font(font, "But they have been stolen...\n", "Gugus");

}

void init_set_font_sub_10(struct_font *font, int next)
{
	init_set_font_sub_ten(font, next);
	if (next == 6)
		set_font(font, "And the ones who own it today don't have goo\
d\nintentions. They just want to take the control of\nthe universe with all the\
power content in\nthe stones", "Gugus");
	if (next == 7)
		set_font(font, "You must return the stones to their original pl\
ace...", "Gugus");
	if (next == 8)
		set_font(font, "I know who stole the first stone. He is dangero\
us,\nyou need to find yourself \
some weapons in order\nto beat him", "Gugus");
	if (next == 9)
		set_font(font, "Find them and i'll give you more advices...",
		"Gugus");
	set_font_pos(font);
}

void init_set_font_sub_9(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "Hey stranger. I can feel the spirits around yo\
u\nIt seems like you are attracting them...\nI can remember now. The magus told\
me that", "Cat");
	}
	if (next == 1) {
		set_font(font, "whenever you'll hear me talking, you'll be abl\
e\nto return to the forest in order to get more\nexplanations.", "Cat");
	}
	if (next == 2)
		set_font(font, "So go back where you woke up at first.", "Cat");
	set_font_pos(font);
}
