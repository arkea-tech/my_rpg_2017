/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** Do a power of a nbr
*/

int	my_compute_power_rec(int nb, int p)
{
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else
		nb = nb * my_compute_power_rec(nb, p - 1);
	return (nb);
}
