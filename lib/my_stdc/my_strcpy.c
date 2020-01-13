/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** copy a str into another str. Man strcpy
*/

char	*my_strcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
