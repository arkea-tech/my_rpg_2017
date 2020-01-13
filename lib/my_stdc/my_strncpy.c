/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** cpy n letter of a str into another str. man 3 strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n) {
		dest[i] = src[i];
		i++;
	}
	if (n > i)
		dest[i] = '\0';
	return (dest);
}
