/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:57:56 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/17 21:15:32 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_matrix(int *matrix, int size, int i)
{
	while (i < size * size)
	{
		if ((i > 6 && i < 10) || (i > 12 && i < 16))
		{
			write (1, &matrix[i], 1);
			write (1, " ", 1);
		}
		if ((i == 10) || (i == 16))
		{
			write (1, &matrix[i], 1);
			write (1, "\n", 1);
		}
		if ((i > 18 && i < 22) || (i > 24 && i < 28))
		{
			write (1, &matrix[i], 1);
			write (1, " ", 1);
		}
		if ((i == 22) || (i == 28))
		{
			write (1, &matrix[i], 1);
			write (1, "\n", 1);
		}
		i++;
	}
}
