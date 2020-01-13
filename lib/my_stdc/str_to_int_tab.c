/*
** EPITECH PROJECT, 2018
** str_to_int_tab.c
** File description:
** str_to_int_tab
*/

#include <stdlib.h>
#include "my_stdc.h"

static int	calc_nb_of_nb(char *str, int index_line)
{
	int i = 0;
	int i2 = 0;
	int counter = 0;

	while (i2 < index_line) {
		if (str[i] == '\n' || str[i] == '\0')
			i2++;
		i++;
	}
	while (str[i] != '\n' && str[i] != '\0') {
		while (is_space(str[i]))
			i++;
		counter++;
		while (!is_space(str[i]) && str[i] != '\0')
			i++;
	}
	return (counter);
}

static int	*fill_int_tab_from_str(int *line, char *str, int index_line)
{
	int i = 0;
	int i2 = 0;

	while (i2 < index_line) {
		if (str[i] == '\n' || str[i] == '\0')
			i2++;
		i++;
	}
	i2 = 0;
	while (str[i] != '\n' && str[i] != '\0') {
		while (is_space(str[i]))
			i++;
		line[i2] = my_atoi(str + i);
		i2++;
		while (!is_space(str[i]) && str[i] != '\0')
			i++;
	}
	return (line);
}

int	**str_to_int_tab(char *str)
{
	int	i = 0;
	int	**tab = NULL;
	int	nb_line = calc_amount_line(str, '\n', 1);
	int	nb_of_nb = 0;

	tab = malloc(sizeof(int *) * (nb_line + 1));
	if (tab == NULL)
		return (NULL);
	while (i < nb_line) {
		nb_of_nb = calc_nb_of_nb(str, i);
		tab[i] = malloc(sizeof(int) * nb_of_nb);
		if (tab[i] == NULL)
			return (NULL);
		tab[i] = fill_int_tab_from_str(tab[i], str, i);
		i++;
	}
	tab[nb_line] = NULL;
	return (tab);
}
