/*
** EPITECH PROJECT, 2018
** char.h
** File description:
** character header
*/

#ifndef		_CHAR_H_
#define		_CHAR_H_

typedef struct char_s {
	int	stats_up;
	int	gender;
	int	level;
	int	attack;
	int	health;
	int	dodge;
	bool	gender_changed;
} char_t;

#endif	/* _CHAR_H_ */
