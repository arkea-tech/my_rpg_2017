/*
** EPITECH PROJECT, 2018
** button.c
** File description:
** create buttons
*/

#include <stdlib.h>
#include "button.h"
#include "csfml_practical.h"

static void	fill_button_frames(	button_t *button,
					sfSprite *idle,
					sfSprite *hover,
					sfSprite *clicked)
{
	button->idle = idle;
	button->hover = hover;
	button->clicked = clicked;
}

static sfText	*create_txt_button(	const char	*str,
					const char	*path_font,
					sfVector2f	pos,
					sfFloatRect	buttons_rect)
{
	sfText		*text = NULL;
	sfFont		*font = NULL;
	sfFloatRect	rect_text;

	if (str == NULL)
		return (NULL);
	text = sfText_create();
	font = sfFont_createFromFile(path_font);
	sfText_setFont(text, font);
	sfText_setCharacterSize(text, 17);
	sfText_setPosition(text, pos);
	sfText_setString(text, str);
	rect_text = sfText_getLocalBounds(text);
	pos.x += (buttons_rect.width - rect_text.width) / 2;
	pos.y += (buttons_rect.height - rect_text.height) / 2;
	sfText_setPosition(text, pos);
	return (text);
}

static sfFloatRect	get_button_frame_bounds(button_t *button)
{
	sfFloatRect no_frame_button = {0, 0, 0, 0};

	if (button->idle != NULL)
		return (sfSprite_getLocalBounds(button->idle));
	if (button->hover != NULL)
		return (sfSprite_getLocalBounds(button->hover));
	if (button->clicked != NULL)
		return (sfSprite_getLocalBounds(button->clicked));
	return (no_frame_button);
}

/*
** Text is the text inside the button, set it to NULL if you want no text.
** path_frames is table containing 3 filename path (image path).
**	First is the sprite when the button is in idle mode
**	Second is the sprite when the button is in hover mode
**	Third is the sprite when the button is in clicked mode
** area is the coord of the button inside the image
** pos is the future position of the button on your screen
*/
button_t	*create_button(	const char	*text,
				const char	**path_frames,
				sfIntRect	*area,
				sfVector2f	pos)
{
	button_t	*button = malloc(sizeof(button_t));

	if (button == NULL)
		return (NULL);
	if (path_frames == NULL)
		fill_button_frames(button, NULL, NULL, NULL);
	else {
		fill_button_frames(button,
		create_sprite_from_path(path_frames[0], area, pos),
		create_sprite_from_path(path_frames[1], area, pos),
		create_sprite_from_path(path_frames[2], area, pos));
	}
	button->text = create_txt_button(text, PATH_DEFAULT_FONT, pos,
			get_button_frame_bounds(button));
	button->state = IDLE;
	button->help_text_box = NULL;
	button->hover_help_text.is_visible = false;
	button->sound = button_set_sound(PATH_DEFAULT_CLICK);
	sfMusic_setVolume(button->sound, 10);
	return (button);
}
