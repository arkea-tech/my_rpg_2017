/*
** EPITECH PROJECT, 2018
** fight_const.h
** File description:
** fight constants
*/

#ifndef		_FIGHT_CONST_H_
#define		_FIGHT_CONST_H_

static const int NB_BATTLE = 5;
static const int HP_MAX = 100;

static const char HP_BAR_PATH[] = "ressources/img/life_bar.png";
static const char FRAME_HP_PATH[] = "ressources/img/life_bar_contour.png";

static const int HP_FRAME_RECT_VALUES[4] = {
	0,
	0,
	826,
	83
};

static const int HP_RECT_VALUES[4] = {
	0,
	0,
	647,
	30
};

static const float MARGE_BTW_HP_BAR = 100;
static const int FRAME_WIDTH_TO_HP = 90;
static const int FRAME_HEIGHT_TO_HP = 27;

#endif		/* FIGHT_CONST_H_ */
