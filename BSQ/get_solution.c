/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:04:45 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/27 18:04:32 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "squaregame.h"

void	ft_free_mem(char **matrix, int *sl_data, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	free(sl_data);
}

void	ft_print_solution(char **matrix, int *m_size, int *sl_data, char *inst)
{
	int	i;
	int	j;

	i = 0;
	if (ft_check_matrix(matrix, inst, m_size) == 1)
	{
		while (i < m_size[0])
		{
			j = 0;
			while (j < m_size[1])
			{
				if (i >= sl_data[0] && i < sl_data[0] + sl_data[2]
					&& j >= sl_data[1] && j < sl_data[1] + sl_data[2])
					write(1, &inst[2], 1);
				else
					write(1, &matrix[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(2, "map error\n", 10);
	ft_free_mem(matrix, sl_data, m_size[0]);
}

int	is_correct(char **matrix, int *sol_data, char obst)
{
	int	i;
	int	j;

	i = sol_data[0];
	j = sol_data[1];
	while (i - sol_data[0] < sol_data[2])
	{
		while (j - sol_data[1] < sol_data[2] && matrix[i][j] != obst)
			j++;
		if (j - sol_data[1] < sol_data[2])
			return (0);
		j = sol_data[1];
		i++;
	}
	return (1);
}

int	*ft_get_solution(int *m_size, char **matrix, char *instruct, int max)
{
	int	i;
	int	j;
	int	*sol_data;

	i = 0;
	j = 0;
	sol_data = (int *) malloc(sizeof(int) * 3);
	while (i + max <= m_size[0])
	{
		while (j + max <= m_size[1])
		{
			sol_data[0] = i;
			sol_data[1] = j;
			sol_data[2] = max;
			if (is_correct(matrix, sol_data, instruct[1]))
			{
				ft_print_solution(matrix, m_size, sol_data, instruct);
				return (sol_data);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (ft_get_solution (m_size, matrix, instruct, max - 1));
}
