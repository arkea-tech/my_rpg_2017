/*
** EPITECH PROJECT, 2018
** settings_main.c
** File description:
** settings_main.c
*/

#include <SFML/Graphics.h>
#include "game.h"
#include "button.h"
#include "pause.h"
#include "rect_values.h"
#include "get_func_proto.h"
#include "audio.h"
#include "my_stdc.h"

void create_sound_button(button_t **buttons,
const char *path_buttons[], sfVector2u window_size)
{
	sfIntRect	area_down = get_rectangle(VOLUME_RECT_BUTTON);
	sfIntRect	area_up = get_rectangle(VOLUME_RECT_BUTTON);
	sfVector2f	pos = {	SUBTRACT_PERCENT(window_size.x, 50),
				SUBTRACT_PERCENT(window_size.y, 50)};

	buttons[DOWN] = create_button(NULL, path_buttons, &area_down, pos);
	button_center_pos(buttons[DOWN]);
	buttons[UP] = create_button(NULL, path_buttons, &area_up, pos);
	button_center_pos(buttons[UP]);
}

static void change_sound_setting_down(sfMusic *music, sfSprite *volum_sprite)
{
	int		volume = sfMusic_getVolume(music);
	sfIntRect	rectangle = sfSprite_getTextureRect(volum_sprite);
	int		marge = 25;

	if (volume > 0) {
		sfMusic_setVolume(music, volume - marge);
		rectangle.left = rectangle.left - VOL_ONE_BAR_WIDTH;
		sfSprite_setTextureRect(volum_sprite, rectangle);
	}
}

static void change_sound_setting_up(sfMusic *music, sfSprite *volum_sprite)
{
	int		volume = sfMusic_getVolume(music);
	sfIntRect	rectangle = sfSprite_getTextureRect(volum_sprite);
	int		marge = 25;

	if (volume < 100) {
		sfMusic_setVolume(music, volume + marge);
		rectangle.left = rectangle.left + VOL_ONE_BAR_WIDTH;
		sfSprite_setTextureRect(volum_sprite, rectangle);
	}
}

void check_sound_params(pause_t *pause, sfMusic *music)
{
	if (pause->buttons[DOWN]->state == CLICKED) {
		change_sound_setting_down(music, pause->volum_bar);
		pause->buttons[DOWN]->state = IDLE;
	} else if (pause->buttons[UP]->state == CLICKED) {
		change_sound_setting_up(music, pause->volum_bar);
		pause->buttons[UP]->state = IDLE;
	}
}

void display_sound_params(sfRenderWindow *window, sfSprite *volum_bar,
sfSprite *volum_up, sfSprite *volum_down)
{
	sfRenderWindow_drawSprite(window, volum_up, NULL);
	sfRenderWindow_drawSprite(window, volum_down, NULL);
	sfRenderWindow_drawSprite(window, volum_bar, NULL);
}
