/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** man 3 strlen
*/

int	my_strlen(char const *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	my_strnlen(char const *str, int n)
{
	int i = 0;

	while (str[i] != '\0' && i < n)
		i++;
	return (i);
}
