/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:00:12 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/18 09:21:15 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fill_top(int *m, int *pl, int n)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 0;
	i = pl[j];
	while (i < 35)
	{
		while (pl[j] != 0)
		{
			if ((pl[j] > 0) && (pl[j] < 5))
			{
				while (k < 4)
				{
					if ((m[(i + 24) - 6 * k]) == '0')
						m[(i + 24) - 6 * k] = (n - k) + '0';
					k++;
				}
			}
			j++;
			i = pl[j];
		}
		i++;
	}
}

void	ft_fill_left(int *m, int *pl, int n)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 0;
	i = pl[j];
	while (i < 35)
	{
		while (pl[j] != 0)
		{
			if ((pl[j] == 6) || (pl[j] == 12) || (pl[j] == 18) || (pl[j] == 24))
			{
				while (k < 4)
				{
					if ((m[(i + 4) - 1 * k]) == '0')
						m[(i + 4) - 1 * k] = (n - k) + '0';
					k++;
				}
			}
			j++;
			i = pl[j];
		}
		i++;
	}
}

void	ft_fill(int *matrix, int *place, int n)
{
	ft_fill_top(matrix, place, n);
	ft_fill_left(matrix, place, n);
}

void	ft_place(int *matrix, int size, int *pl, int num)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < size * size)
	{
		if (matrix[i] == num)
		{
			pl[j] = i;
			j++;
		}
		i++;
	}
}

void	ft_fill_matrix(int *matrix, int size)
{
	int	i;
	int	place4[16];
	int	place3[16];
	int	place2[16];
	int	place1[16];

	i = 0;
	while (i < 16)
	{
		place4[i] = 0;
		place3[i] = 0;
		place2[i] = 0;
		place1[i] = 0;
		i++;
	}
	ft_place(matrix, size, place4, 4);
	ft_place(matrix, size, place3, 3);
	ft_place(matrix, size, place2, 2);
	ft_place(matrix, size, place1, 1);
	ft_fill(matrix, place4, 4);
}
