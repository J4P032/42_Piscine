/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:14:31 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/10 12:58:54 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
if logic: number is 3 digits. j is the first one from 0 to 9. The second is i 
from 12 (the first possible number) to 89 (the last possible). BUT only have
to write those i numbers that the second one (i % 10) is bigger than the first
(i / 10) AND those that the first is also bigger than the hundreds j one.

the ft_writer makes the write of the 3 digits and checks last one is not 789
to not print the last comma.
*/

void	ft_writer(int i, int j)
{
	char	conversor;
	int		lastnumber;

	lastnumber = 0;
	conversor = 48;
	conversor = j + 48;
	write(1, &conversor, 1);
	conversor = (i / 10) + 48;
	write(1, &conversor, 1);
	conversor = (i % 10) + 48;
	write(1, &conversor, 1);
	lastnumber = (j * 100) + i;
	if (lastnumber != 789)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;

	i = 12;
	j = 0;
	while (j <= 7)
	{
		while (i <= 89)
		{
			if (((i % 10) > (i / 10)) && ((i / 10) > j))
				ft_writer(i, j);
			i++;
		}
		i = 12;
		j++;
	}
}
