/*
** EPITECH PROJECT, 2018
** destroy_fight.c
** File description:
** destroy fight structure
*/

#include "game.h"
#include "fight.h"

void freeing_sprites(sfSprite **sprites)
{
	for (int i = 0; sprites[i] != NULL; ++i) {
		sfSprite_destroy(sprites[i]);
	}
	free(sprites);
}

void destroy_fight_sprites(fight_hp_t *fight_hp)
{
	if (fight_hp != NULL) {
		if (fight_hp->hp_enemy != NULL)
			freeing_sprites(fight_hp->hp_enemy);
		sfSprite_destroy(fight_hp->hp_frame_ennemy);
		sfSprite_destroy(fight_hp->hp_frame_player);
		sfSprite_destroy(fight_hp->hp_player);
	}
}

void	destroy_fight(game_t *game)
{
	buttons_destroy(&game->fight.button_tab_spells);
	destroy_spell_fight(&(game->fight.spell_fight));
	destroy_fight_sprites(&game->fight.fight_hp);
}
