/*
** EPITECH PROJECT, 2018
** to attack animation
** File description:
** to attack animation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "game.h"

static void set_pos(fight_t *st)
{
    sfVector2f pos = {817, 120};
    sfVector2f pos2 = {895, 140};
    sfVector2f pos3 = {990, 140};

    sfSprite_setPosition(st->sprite_turn, pos);
    sfText_setPosition(st->turn, pos2);
    sfText_setPosition(st->nb_turn, pos3);
    sfText_setCharacterSize(st->turn, 40);
    sfText_setCharacterSize(st->nb_turn, 40);
    st->cl_anim = sfClock_create();
    st->attacking = 0;
    st->move = 0;
}

void create_attack_animation(fight_t *st)
{

    st->f = sfFont_createFromFile("ressources/font/morpheus.ttf");
    st->sprite_turn = sfSprite_create();
    st->texture_turn = sfTexture_createFromFile(
        "ressources/img/turn.png", NULL);
    sfSprite_setTexture(st->sprite_turn,
        st->texture_turn, sfTrue);
    st->turn = sfText_create();
    st->nb_turn = sfText_create();
    sfText_setString(st->turn, "Turn");
    sfText_setString(st->nb_turn, "0");
    sfText_setFont(st->turn, st->f);
    sfText_setFont(st->nb_turn, st->f);
    set_pos(st);
}
