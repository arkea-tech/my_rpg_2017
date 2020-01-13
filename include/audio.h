/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** audio.h file
*/

#ifndef		AUDIO_H_
#define		AUDIO_H_

#include <SFML/Audio.h>

typedef struct audio_s
{
    sfMusic *music;
} audio_t;

#include "game.h"

bool	create_audio_and_sprites(audio_t	*audio,
				pause_t		*pause,
				sfVector2u	window_size,
				button_t	**buttons);
void		destroy_musics(game_t *game);
void		create_sound_button(button_t **buttons,
const char	*path_buttons[], sfVector2u window_size);
void		check_sound_params(pause_t *pause, sfMusic *music);
void		display_sound_params(	sfRenderWindow	*window,
					sfSprite	*volum_bar,
					sfSprite	*volum_up,
					sfSprite	*volum_down);

#endif	/* AUDIO_H_ */
