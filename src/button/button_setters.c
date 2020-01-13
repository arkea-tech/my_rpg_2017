/*
** EPITECH PROJECT, 2018
** button_setters
** File description:
** Setters
*/

#include "button.h"

void	button_set_sprite_scale(button_t *button, float scale_int)
{
	sfVector2f	scale = {scale_int, scale_int};

	if (button->idle != NULL)
		sfSprite_setScale(button->idle, scale);
	if (button->hover != NULL)
		sfSprite_setScale(button->hover, scale);
	if (button->clicked != NULL)
		sfSprite_setScale(button->clicked, scale);
}

void	button_set_font_size(button_t *button, int size)
{
	sfFloatRect	rect_frame;
	sfFloatRect	rect_text;
	sfFloatRect	rect_global_frame;
	sfVector2f	offset;

	sfText_setCharacterSize(button->text, size);
	rect_frame = get_local_button_rect(button);
	rect_text = sfText_getLocalBounds(button->text);
	offset.x = (float)rect_frame.width / 2 - (float)rect_text.width / 2;
	offset.y = (float)rect_frame.height / 2 - (float)rect_text.height / 2;
	rect_global_frame = get_global_button_rect(button);
	offset.x += rect_global_frame.left;
	offset.y += rect_global_frame.top;
	sfText_setPosition(button->text, offset);
}

bool	button_set_font(button_t *button, const char *path_font)
{
	sfFont *font = sfFont_createFromFile(path_font);
	sfText *txt = sfText_create();

	if (txt == NULL || font == NULL)
		return (EXIT_FAILURE);
	sfText_setFont(button->text, font);
	return (EXIT_SUCCESS);
}

bool	button_set_help_text_box(button_t *button, const char *path_box,
							sfIntRect *area)
{
	sfSprite	*sprite = sfSprite_create();
	sfTexture	*texture = sfTexture_createFromFile(path_box, area);

	if (sprite == NULL || texture == NULL)
		return (EXIT_FAILURE);
	sfSprite_setTexture(sprite, texture, sfFalse);
	button->help_text_box = sprite;
	return (EXIT_SUCCESS);
}

void	button_set_help_text_pos(button_t *button, int x, int y)
{
	button->hover_help_text.x = x;
	button->hover_help_text.y = y;
	button->hover_help_text.is_visible = true;
}
