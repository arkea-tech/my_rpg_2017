/*
** EPITECH PROJECT, 2018
** char_select.h
** File description:
** char_select.h
*/

#ifndef		_CHAR_SELECT_H_
#define		_CHAR_SELECT_H_

#include "button.h"

static const char CHAR_SELECT_BG[] = "ressources/img/char_select_bg.jpg";
static const char CHAR_MALE_BIG[] = "ressources/img/char_male_big.png";
static const char CHAR_FEMALE_BIG[] = "ressources/img/char_female_big.png";
static const char CHAR_SELECTION[] = "CHARACTER SELECTION";
static const char CHAR_MALE_BIG_HOVER[] = \
"ressources/img/char_male_big_hover.png";
static const char CHAR_FEMALE_BIG_HOVER[] = \
"ressources/img/char_female_big_hover.png";
static const char CHAR_SELECT_CONFIRM_BG[] = \
"ressources/img/char_select_confirm_bg.jpg";
static const char CHAR_MALE_MEDIUM[] = "ressources/img/char_male_medium.png";
static const char CHAR_FEMALE_MEDIUM[] = \
"ressources/img/char_female_medium.png";
static const char CONFIRM_TEXT_M[] = "YOU HAVE SELECTED \"TIDUS\"";
static const char CONFIRM_TEXT_F[] = "YOU HAVE SELECTED \"YUNA\"";
static const char CONFIRM_TEXT_W[] = \
"   ONCE YOU START A NEW GAME \nTHIS WILL ERASE THE CURRENT SAVE";
static const char CONFIRM_TEXT_FINAL[] = \
"ARE YOU READY TO START THIS ADVENTURE ?";
static const char BUTTONS_MINI_IDLE[] = \
"ressources/img/buttons_mini_idle.png";
static const char BUTTONS_MINI_HOVER[] = \
"ressources/img/buttons_mini_hover.png";
static const char BUTTONS_MINI_CLICKED[] = \
"ressources/img/buttons_mini_clicked.png";

typedef struct select_s {
	sfSprite	*bg;
	button_t	*char_male;
	button_t	*char_female;
	sfText		*title;
	sfSprite	*confirm_bg;
	button_t	*new;
	button_t	*back;
	sfSprite	*face_f;
	sfSprite	*face_m;
	sfText		*confirm_text_m;
	sfText		*confirm_text_f;
	sfText		*confirm_text_w;
	sfText		*confirm_text_final;
	button_t	*return_b;
	bool		gender;
} select_t;

enum char_chosen_e {
	MALE,
	FEMALE
};

#include "game.h"

bool	launch_char_select(sfRenderWindow *window, game_t *game);
bool	create_char_select(sfRenderWindow *window, game_t *game);
bool	create_char_select_confirm(sfVector2u window_size, game_t *game);
void	destroy_char_select(game_t *game);

#endif /* _CHAR_SELECT_H_ */
