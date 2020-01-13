/*
** EPITECH PROJECT, 2018
** my_strchr_index.c
** File description:
** returns the index of the char in the str
*/

/*
** Locate a character in a str, return the index of the character
*/
int	my_strchr_index(char const *str, char c)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
