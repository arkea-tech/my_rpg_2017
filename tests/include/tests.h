/*
** EPITECH PROJECT, 2018
** tests.h
** File description:
** tests
*/

#ifndef		_TESTS_H_
#define		_TESTS_H_

static const char COMMAND_NM[] = \
"nm ../my_rpg | grep -w 'U' | cut -d 'U' -f2 | cut -c2- > fcts_used.txt";
static const char FCTS_USED_FILE[] = "fcts_used.txt";

#endif /* _TESTS_H_ */
