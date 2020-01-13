/*
** EPITECH PROJECT, 2018
** text_story.c
** File description:
** description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "dialogue.h"
#include "my_stdc.h"

static void	text_story_grandpa_sea_house(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "What do you want to know ?", "Old man");
	if (next == 1)
		set_font(font, "Well... I have a heavy task to complete.",
		"Player");
	if (next == 2)
		set_font(font, "I must bring back the peace to the spirits,\nre\
porting to them the goods that have been stolen\nto me.", "Player");
	if (next == 3)
		set_font(font, "Well... Wait a second.\nLet me bring back the b\
ook that my grandfather\ngave me.", "Old man");
	if (next == 4)
		set_font(font, "'...And when the weather is dark and the sea i\
s\nrough, a stranger, dressed in red, will restore\nthe kingdom of spirits.'",
		"Book");
	if (next == 5)
		set_font(font, "'This being with a pure heart and unlimited cou\
rage\nwill have to face four impure creatures who have\nstolen each stone conta\
ining the elements.'", "Book");
}

void text_story_grandpa_sea_inside_house(struct_font *font,
int next)
{
	text_story_grandpa_sea_house(font, next);
	if (next == 6)
		set_font(font, "'The village of Terremer, since its creation, i\
s\nsurrounded by the sea. Expect to find a monster\nguarding the elemental ston\
e of the water.'", "Book");
	if (next == 7)
		set_font(font, "Terremer is the village you are currently in.",
		"Old man");
	if (next == 8)
		set_font(font, "Because you are the chosen one, let me give yo\
u\nthese. Those are magic parchments that will\nlead you to master attacks.",
		"Old man");
	if (next == 9)
		init_set_font_chest_blue(font, next);
	if (next == 10)
		set_font(font, "Use them wisely. Now go to the sea,\nto fulfil\
l the prophecy", "Old man");
	set_font_pos(font);
}

void text_story_grandpa_sea_house_repeat(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "You need to go to the see, to fulfill the proph\
ecy", "Old man");
	set_font_pos(font);
}

void text_story_grandpa_sea(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "Nobody has ever told you to knock before coming\
in ?\nWhat a poor education !", "?");
	if (next == 1)
		set_font(font, "Excuse me, sir.I just came to have some informa\
tion\nabout the surroundings.", "Player");
	set_font_pos(font);
}

void text_story_villager_sea(struct_font *font, int next)
{
	if (next == 0)
		set_font(font, "The sea is not as calm as it used to be.\nWe ca\
nnot bath as before.", "Fisherman");
	set_font_pos(font);
}
