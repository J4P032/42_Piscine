/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:48:29 by jrollon-          #+#    #+#             */
/*   Updated: 2024/12/09 10:32:43 by japo32           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*matrix;

	i = 0;
	if ((max - min) <= 0)
		return (NULL);
	matrix = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		matrix[i] = min;
		min++;
		i++;
	}
	return (matrix);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*matrix;
	int	i;

	i = 0;
	if (argc != 3)
	{
		write(2, "Arguments has to be <min> <max> integers\n", 40);
		return (0);
	}
	matrix = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d ", matrix[i]);
		i++;
	}
	write(1, "\n", 1);
	free(matrix);
	return (0);
}*/
