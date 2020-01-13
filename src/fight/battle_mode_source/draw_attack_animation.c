/*
** EPITECH PROJECT, 2018
** draw attack annimation
** File description:
** draw attack animation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include "game.h"
#include "my_stdc.h"

static void reset_position(game_t *st, sfVector2f pos)
{
    pos.x = pos.x + st->fight.move;
    sfSprite_setPosition(
        st->fight.main_battle->sprite_battle->
        sprite_girl_fight_battle, pos);
    st->fight.move = 0;
}

void draw_attack_anim(sfRenderWindow *UNUSED(window), game_t *st)
{
    sfTime time;
    float seconds;
    sfVector2f pos = sfSprite_getPosition(
        st->fight.main_battle->sprite_battle->sprite_girl_fight_battle);

    time = sfClock_getElapsedTime(st->fight.cl_anim);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.02) {
        pos.x = pos.x - 4;
        st->fight.move = st->fight.move + 4;
        sfSprite_setPosition(
            st->fight.main_battle->sprite_battle->
            sprite_girl_fight_battle, pos);
        sfClock_restart(st->fight.cl_anim);
    }
    if (st->fight.move >= 45) {
        st->fight.attacking = 0;
        reset_position(st, pos);
    }
}
