/*
** EPITECH PROJECT, 2018
** create_tile_map.c
** File description:
** create_tile_map
*/

#include "game.h"
#include "my_stdc.h"
#include "world.h"

static uint8_t	init_a_empty_map(map_t *map, uint8_t height, uint8_t width)
{
	map->map_nb = malloc(sizeof(uint8_t *) * (height + 1));
	if (map->map_nb == NULL)
		return (ERROR);
	for (uint8_t y = 0 ; y < height ; ++y) {
		map->map_nb[y] = malloc(sizeof(uint8_t) * width);
		if (map->map_nb[y] == NULL)
			return (ERROR);
		for (uint8_t x = 0 ; x < width ; ++x)
			map->map_nb[y][x] = 0;
	}
	map->map_nb[height] = NULL;
	return (SUCCESS);
}

static void	fill_map(map_t *map)
{
	for (uint8_t x = 0 ; x < WIDTH_MAP ; ++x) {
		map->map_nb[1][x] = 100;
		map->map_nb[2][x] = 1;
		map->map_nb[3][x] = 1;
		map->map_nb[4][x] = 1;
		map->map_nb[5][x] = 100;
	}
	for (uint8_t y = 2 ; y < HEIGHT_MAP - 2 ; ++y) {
		map->map_nb[y][14] = 101;
		map->map_nb[y][9] = 101;
		map->map_nb[y][4] = 101;
	}
	map->map_nb[0][16] = 10;
	map->map_nb[1][16] = 10;
	map->map_nb[0][12] = 10;
	map->map_nb[1][12] = 10;
	map->map_nb[0][7] = 10;
	map->map_nb[1][7] = 10;
	map->map_nb[0][2] = 10;
	map->map_nb[1][2] = 10;
}

sfVector2f	*get_four_square_pos(	int origin_x,
					int origin_y,
					int width,
					int height)
{
	sfVector2f	*positions = malloc(sizeof(sfVector2f) * 4);
	sfVector2f	pos_1 = {origin_x, origin_y};
	sfVector2f	pos_2 = {origin_x + width, origin_y};
	sfVector2f	pos_3 = {origin_x + width, origin_y + height};
	sfVector2f	pos_4 = {origin_x, origin_y + height};

	if (positions == NULL)
		return (NULL);
	positions[0] = pos_1;
	positions[1] = pos_2;
	positions[2] = pos_3;
	positions[3] = pos_4;
	return (positions);
}

void	append_vertex_to_array(map_t *map, uint8_t y, uint8_t x)
{
	sfVector2f	*pos = get_four_square_pos(96 * x, 144 * y, 96, 144);
	sfVector2f	*tex_coord = get_tex_coord_array(map->map_nb[y][x]);
	sfVertex	vertex_1 = {.position = pos[0], .color = sfWhite};
	sfVertex	vertex_2 = {.position = pos[1], .color = sfWhite};
	sfVertex	vertex_3 = {.position = pos[2], .color = sfWhite};
	sfVertex	vertex_4 = {.position = pos[3], .color = sfWhite};

	if (tex_coord != NULL) {
		vertex_1.texCoords = tex_coord[0];
		vertex_2.texCoords = tex_coord[1];
		vertex_3.texCoords = tex_coord[2];
		vertex_4.texCoords = tex_coord[3];
		sfVertexArray_append(map->tiled_map, vertex_1);
		sfVertexArray_append(map->tiled_map, vertex_2);
		sfVertexArray_append(map->tiled_map, vertex_3);
		sfVertexArray_append(map->tiled_map, vertex_4);
		free(tex_coord);
	}
}

uint8_t	create_tile_map(map_t *map, int story_state)
{
	if (init_a_empty_map(map, HEIGHT_MAP, WIDTH_MAP))
		return (ERROR);
	fill_map(map);
	modify_terrain_events(map, story_state);
	map->tiled_map = sfVertexArray_create();
	if (map->tiled_map == NULL)
		return (ERROR);
	sfVertexArray_setPrimitiveType(map->tiled_map, sfQuads);
	for (uint8_t y = 0 ; y < HEIGHT_MAP ; ++y)
		for (uint8_t x = 0 ; x < WIDTH_MAP ; ++x)
			append_vertex_to_array(map, y, x);
	if (map->textures == NULL)
		map->textures = sfTexture_createFromFile(PATH_TERRAIN, NULL);
	if (map->textures == NULL)
		return (ERROR);
	map->state_texture.blendMode = sfBlendAlpha;
	map->state_texture.transform = sfTransform_Identity;
	map->state_texture.texture = map->textures;
	map->state_texture.shader = NULL;
	return (SUCCESS);
}
