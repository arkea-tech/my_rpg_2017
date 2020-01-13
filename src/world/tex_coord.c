/*
** EPITECH PROJECT, 2018
** tex_coord.c
** File description:
** coord in the .png
*/

#include <SFML/Graphics.h>
#include <stdint.h>
#include <stdlib.h>

static sfVector2f	*fill_tex_coord_array(sfVector2f *tex_coord_array,
						int	origin_pos_x,
						int	origin_pos_y)
{
	tex_coord_array[0].x = origin_pos_x;
	tex_coord_array[0].y = origin_pos_y;
	tex_coord_array[1].x = origin_pos_x + 96;
	tex_coord_array[1].y = origin_pos_y;
	tex_coord_array[2].x = origin_pos_x + 96;
	tex_coord_array[2].y = origin_pos_y + 144;
	tex_coord_array[3].x = origin_pos_x;
	tex_coord_array[3].y = origin_pos_y + 144;
	return (tex_coord_array);
}

sfVector2f	*get_tex_coord_array(uint8_t terrain_type)
{
	sfVector2f	*tex_coord_array = malloc(sizeof(sfVector2f) * 4);

	if (tex_coord_array == NULL)
		return (NULL);
	if (terrain_type == 101 || terrain_type == 1)
		return (fill_tex_coord_array(tex_coord_array, 96, 0));
	if (terrain_type == 100 || terrain_type == 0)
		return (fill_tex_coord_array(tex_coord_array, 0, 0));
	if (terrain_type == 10)
		return (fill_tex_coord_array(tex_coord_array, 288, 288));
	return (NULL);
}
