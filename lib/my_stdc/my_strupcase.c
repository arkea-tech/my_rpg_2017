/*
** EPITECH PROJECT, 2018
** my_strupcase.c
** File description:
** puts a str in caps
*/

char	*my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + (-'a' + 'A');
		i++;
	}
	return (str);
}
