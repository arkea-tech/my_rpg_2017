/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** put in lowercase letters a str
*/

char	*my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + (-'A' + 'a');
		i++;
	}
	return (str);
}
