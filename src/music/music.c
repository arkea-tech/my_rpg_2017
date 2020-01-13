/*
** EPITECH PROJECT, 2018
** settings_main.c
** File description:
** settings_main.c
*/

#include <stdlib.h>
#include "my_stdc.h"
#include "audio.h"
#include "music.h"
#include "pause.h"
#include "rect_values.h"
#include "get_func_proto.h"
#include "csfml_practical.h"

static sfMusic	*get_music(char const *path)
{
	sfMusic *music;

	music = sfMusic_createFromFile(path);
	if (music == NULL)
		return (NULL);
	sfMusic_setVolume(music, BASIC_VOL_MUSIC);
	return (music);
}

static void sprite_audio_set_pos(sfSprite *volum_bar, sfSprite *volum_up,
sfSprite *volum_down, sfVector2u window_size)
{
	int		marge = 20;
	sfVector2f	sprite_pos = {	SUBTRACT_PERCENT(window_size.x, 50),
					SUBTRACT_PERCENT(window_size.y, 50)};

	sprite_pos.x = sprite_pos.x - VOL_BARS_VALUES[2] / 2;
	sprite_pos.y = sprite_pos.y - VOL_BARS_VALUES[3] / 2;
	sfVector2f plus_pos =
	get_vector((sprite_pos.x + VOL_BARS_VALUES[2] + marge),
	(sprite_pos.y + VOL_BARS_VALUES[3] / 2 - VOLUME_RECT_BUTTON[3] / 2));
	sfVector2f minus_pos =
	get_vector((sprite_pos.x - (VOL_BARS_VALUES[2] / 3 - marge)),
	(sprite_pos.y + VOL_BARS_VALUES[3] / 2 - VOLUME_RECT_BUTTON[3] / 2));

	sfSprite_setPosition(volum_down, minus_pos);
	sfSprite_setPosition(volum_up, plus_pos);
	sfSprite_setPosition(volum_bar, sprite_pos);
}

static void create_sprites_audio(pause_t *pause,
sfVector2u window_size, button_t **buttons)
{
	buttons[DOWN]->idle = get_sprite(PATH_VOLUME_DOWN,
	get_rectangle(VOLUME_RECT_BUTTON));
	buttons[UP]->idle = get_sprite(PATH_VOLUME_UP,
	get_rectangle(VOLUME_RECT_BUTTON));
	pause->volum_bar = get_sprite(PATH_VOL_BARS,
	get_rectangle(VOL_BARS_VALUES));
	sprite_audio_set_pos(pause->volum_bar, buttons[UP]->idle,
	buttons[DOWN]->idle, window_size);
}

bool create_audio_and_sprites(audio_t *audio,
pause_t *pause, sfVector2u window_size, button_t **buttons)
{
	audio->music = get_music(MUSIC_PATH);
	sfMusic_play(audio->music);
	create_sprites_audio(pause, window_size, buttons);
	return (SUCCESS);
}
