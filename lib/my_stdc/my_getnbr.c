/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** returns a number, sent to the function as a string.
*/

int	is_number_base_10(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	get_negativ(int negativ)
{
	if (negativ == -1)
		return (1);
	else
		return (-1);
}

int	parse_nbr(char const *nbr, unsigned int i, int negativ)
{
	char	digit = 0;
	long	result = 0;

	while (is_number_base_10(nbr[i])) {
		digit = nbr[i] - '0';
		result = result * 10 + digit;
		if (result * negativ > 2147483647)
			return (0);
		else if (result * negativ < -2147483648)
			return (0);
		i++;
	}
	return ((int)result);
}

int	my_getnbr(char const *str)
{
	unsigned int	i = 0;
	unsigned int	negativ = 1;
	int		result = 0;

	if (!is_number_base_10(str[i]) && str[i] != '-' && str[i] != '+')
		return (0);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negativ = get_negativ(negativ);
		i++;
	}
	if (!is_number_base_10(str[i]))
		return (0);
	result = parse_nbr(str, i, negativ);
	return (result * negativ);
}
