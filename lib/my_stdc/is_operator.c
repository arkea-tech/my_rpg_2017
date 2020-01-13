/*
** EPITECH PROJECT, 2018
** is_operator.c
** File description:
** some fonction helpful ot handle str
*/

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\r' || c == '\f' || c == '\v' || c == '\b')
		return (1);
	else
		return (0);
}

int	is_operator(char c)
{
	if (c == '/' || c == '*' || c == '+' || c == '-' || c == '%')
		return (1);
	else
		return (0);
}
