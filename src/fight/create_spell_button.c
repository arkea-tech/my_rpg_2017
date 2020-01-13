/*
** EPITECH PROJECT, 2018
** create_spell_button.c
** File description:
** button for spells
*/

#include "game.h"
#include "my_stdc.h"

uint8_t create_spell_buttons_tab(sfVector2u	window_size,
button_t	**button_tab_spells,
const char	*paths_buttons[],
sfIntRect	*area)
{
	sfVector2f pos = {SUBTRACT_PERCENT(window_size.x, 90),
		SUBTRACT_PERCENT(window_size.y, 15)};

	button_tab_spells[EARTH] = create_button("EARTH", paths_buttons,
	area, pos);
	pos.x = SUBTRACT_PERCENT(window_size.x, 70);
	button_tab_spells[WATER] = create_button("WATER", paths_buttons,
	area, pos);
	pos.x = SUBTRACT_PERCENT(window_size.x, 50);
	button_tab_spells[FIRE] = create_button("FIRE", paths_buttons,
	area, pos);
	pos.x = SUBTRACT_PERCENT(window_size.x, 30);
	button_tab_spells[AIR] = create_button("AIR", paths_buttons,
	area, pos);
	if (!button_tab_spells[EARTH]
		|| !button_tab_spells[WATER]
		|| !button_tab_spells[FIRE]
		|| !button_tab_spells[AIR])
		return (ERROR);
	return (SUCCESS);
}

uint8_t create_spell_buttons(sfVector2u window_size, fight_t *fight)
{
	sfIntRect area = AREA_BUTTON_SPELLS;
	const char *paths_buttons[] = {PATH_MENU_BUTTONS_IDLE,
					PATH_MENU_BUTTONS_HOVER,
					PATH_MENU_BUTTONS_CLICKED};

	fight->button_tab_spells = malloc(sizeof(button_t *) * (NB_SPELL + 1));
	if (fight->button_tab_spells == NULL)
		return (ERROR);
	fight->button_tab_spells[NB_SPELL] = NULL;
	create_spell_buttons_tab(window_size,
	fight->button_tab_spells,
	paths_buttons,
	&area);
	return (SUCCESS);
}
