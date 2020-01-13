/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** dialogue sub
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

void init_set_font_sub_3(struct_font *font, int next)
{
	if (next == 0) {
		set_font(font, "Hi! are you waiting for the opening of the ne\
w\nmovie theatre ? It opens this afternoon.\nI can barely contain my excitement\
.", "Old lady");
	}
	set_font_pos(font);
}

void init_set_font_sub_2(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Errr... Hi ? Excuse me, do you know anything\na\
bout the spirits of the forest ?\nIs this some kind of hunted place or somethin\
g?", "Player");
	if (next == 1)
		set_font(font, "What...?", "Teenager");
	if (next == 2)
		set_font(font, "Don't you know anything about this ?",
		"Player");
	if (next == 3)
		set_font(font, "Listen my family has been living in this fores\
t\nfor hundreds of years. I have never heard of this.\nSo trust me, there is n\
othing wrong out there.", "Teenager");
	if (next == 4)
		set_font(font, "Hhmm... Well ... I see , okay thank's.",
		"Player");
	set_font_pos(font);
}

void init_set_font_sub_1(struct_font *font, int next)
{
	if (next == 4)
		set_font(font, "Let me remind you that that you did not land he\
re\nby chance, my young friend. The spirits warned me\nabout your arrival.",
		"Wizard");
	if (next == 5)
		set_font(font, "You are the chosen one to bring back the peac\
		e\ninto the elements.", "Wizard");
	if (next == 6)
		set_font(font, "No! I don't know anything! I want to go home\
!\nTell your stupid spirits to bring me back \nhome! I don't want any of this\
!", "Player");
	if (next == 7)
		set_font(font, "I will meet you again when you will be ready\nt\
o listen to the voice of the forest:", "Wizard");
	if (next == 8)
		set_font(font, "NO ! Tell me what i need to know !", "Player");
	if (next == 9)
		set_font(font, "... What the hell is going on ?!", "Player");
}

void init_set_font(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "...Where am I ...What is happening to me ?",
		"Player");
	if (next == 1)
		set_font(font, "...I knew you would come. We used to \
live in pe\
ace,\nbut the evils took the stones...", "Spirit");
	if (next == 2)
		set_font(font, "Who are you ? Which stones ?\nWhat are you talk\
ing about ? I don't understand !\nI don't even know how \
i got here !", "Player");
	if (next == 3)
		set_font(font, "You need get back the four stones, and pu\
t\nthem where they belong.\nOne of the evils is hidden somewhere,\ngo fight \
him.", "Spirit");
	set_font_pos(font);
}
