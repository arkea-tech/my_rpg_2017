/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** returns 1 if str contains only printable characters
*/

int	is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}

int	my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!is_printable(str[i])) {
			return (0);
		}
		i++;
	}
	return (1);
}
