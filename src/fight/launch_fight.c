/*
** EPITECH PROJECT, 2018
** launch_fight.c
** File description:
** launch fight
*/

#include "game.h"
#include "fight.h"
#include "music.h"
#include "my_stdc.h"
#include "csfml_practical.h"

static void display_main_battle(sfRenderWindow *window, game_t *game)
{
	set_rectangle_boss_animation_battle(game->fight.main_battle,
						BOSS_ANIMATION_ENABLE);
	draw_sprite_background_battle(window,
					game->fight.main_battle,
					game->state.chapter);
	draw_sprite_intro_outro_battle(window,
					game->fight.main_battle,
					LETS_FIGHT);
	display_button(window, game->world.help_button);
	if (game->world.help_button->state == CLICKED)
		display_how_to_play(window, game);
}

static void display_fight_hp(sfRenderWindow *window, game_t *game)
{
	sfRenderWindow_drawSprite(window, game->fight.fight_hp.hp_frame_player,
									NULL);
	sfRenderWindow_drawSprite(window, game->fight.fight_hp.hp_frame_ennemy,
									NULL);
	sfRenderWindow_drawSprite(window, game->fight.fight_hp.hp_player, NULL);
	sfRenderWindow_drawSprite(window,
		game->fight.fight_hp.hp_enemy[game->state.chapter], NULL);
}

static void display_turn_nb(sfRenderWindow *window,
fight_t *st, unsigned int turn_nb)
{
	sfText_setString(st->nb_turn, my_itoa(turn_nb));
	sfRenderWindow_drawSprite(window, st->sprite_turn, NULL);
	sfRenderWindow_drawText(window, st->turn, NULL);
	sfRenderWindow_drawText(window, st->nb_turn, NULL);
}

static void	update_character_gender(fight_t *fight, char_t *character)
{
	if (character->gender_changed == false)
		return;
	if (character->gender == MALE) {
		fight->main_battle->texture_battle->texture_girl_battle = \
			sfTexture_createFromFile(CHARACTER_BOY_BATTLE, NULL);
	} else  {
		fight->main_battle->texture_battle->texture_girl_battle = \
			sfTexture_createFromFile(CHARACTER_GIRL_BATTLE, NULL);
	}
	set_texture_battle_heroes(fight->main_battle->texture_battle,
				fight->main_battle->sprite_battle);
	character->gender_changed = false;
}

bool	launch_fight(sfRenderWindow *window, game_t *game)
{
	static unsigned int turn_nb = 1;

	update_character_gender(&game->fight, &game->character);
	display_main_battle(window, game);
	display_fight_hp(window, game);
	draw_spell_buttons(window, game);
	fight_turns(window, game, &turn_nb);
	if (is_end_fight(window, game)) {
		turn_nb = 1;
	}
	display_turn_nb(window, &game->fight, turn_nb);
	return (SUCCESS);
}
