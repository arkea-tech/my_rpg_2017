/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** Does square of a nbr
*/

int	my_compute_square_root_2(int nb, int tmp)
{
	if (tmp == 9586)
		return (0);
	if (tmp * tmp == nb)
		return (tmp);
	if (tmp >= nb / 2)
		return (0);
	return (my_compute_square_root_2(nb, tmp + 1));
}

int	my_compute_square_root(int nb)
{
	return (my_compute_square_root_2(nb, 1));
}
