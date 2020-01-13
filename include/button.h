/*
** EPITECH PROJECT, 2018
** button.h
** File description:
** CSFML button.h
*/

#ifndef		_BUTTON_H_
#	define	_BUTTON_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdlib.h>

static const char PATH_DEFAULT_FONT[] = "ressources/font/morpheus.ttf";
static const char PATH_DEFAULT_CLICK[] = \
"ressources/sound/click_sound/click.wav";

typedef struct pos_s {
	int	x;
	int	y;
	bool	is_visible;
} pos_t;

/*
** Different states : IDLE, HOVER, CLICKED
*/
typedef struct button_s {
	sfText			*text;
	sfSprite		*idle;
	sfSprite		*hover;
	sfSprite		*clicked;
	int			state;
	sfSprite		*help_text_box;
	pos_t			hover_help_text;
	sfMusic			*sound;
} button_t;

enum	state_button {
	IDLE,
	HOVER,
	CLICKED
};

button_t	*create_button(	const char	*text,
				const char	**path_frames,
				sfIntRect	*area,
				sfVector2f	pos);
sfFloatRect	get_global_button_rect(button_t *button);
sfFloatRect	get_local_button_rect(button_t *button);
void		display_button(sfRenderWindow *window, button_t *button);
void		button_destroy(button_t *button);
void		buttons_destroy(button_t ***button);
void		button_set_sprite_scale(button_t *button, float scale);
void		button_set_font_size(button_t *button, int size);
bool		button_set_font(button_t *button, const char *path_font);
bool		button_set_help_text_box(button_t	*button,
					const char	*path_box,
					sfIntRect	*area);
void		button_set_help_text_pos(button_t *button, int x, int y);
void		button_display_help_txt(sfRenderWindow	*window,
					button_t	*button);
sfMusic		*button_set_sound(const char *path_sound);
void		button_center_pos(button_t *button);
void		button_try_to_detect_hover(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect);
void		button_try_to_detect_clicked(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect);
void	button_try_to_detect_clicked_simple(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect);
void	button_try_to_detect_hover_simple(	sfEvent		*event,
						button_t	*button,
						sfFloatRect	rect);

#endif /* _BUTTON_H_ */
