/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:12:56 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/27 17:53:06 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "squaregame.h"
#include <stdlib.h>
/*
int array[0] = line length
	array[1] = empty spaces
	array[2] = obstacles
*/
int	*ft_count_spaces(char **map, char empty, int num_row)
{
	int	i;
	int	j;
	int	*counter;

	counter = (int *)malloc(sizeof(int) * 3);
	j = 0;
	counter[0] = 0;
	counter[1] = 0;
	counter[2] = 0;
	while (j < num_row)
	{
		i = 0;
		while (map[j][i] != 0)
		{
			if (map[j][i] == empty)
				counter[1]++;
			else
				counter[2]++;
			if (j == 0)
				counter[0]++;
			i++;
		}
		j++;
	}
	return (counter);
}

int	ft_check_repeat(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		j = i + 1;
		while (str[j] != 0)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_map_legend(char *legend)
{
	int	size;

	size = ft_strlen(legend);
	legend[0] = legend[size - 3];
	legend[1] = legend[size - 2];
	legend[2] = legend[size - 1];
	legend[3] = 0;
}

int	ft_check_instruction(char *instruction)
{
	int		i;
	char	*aux;
	int		num;

	if (instruction[0] == 0)
		return (0);
	aux = (char *)malloc(ft_strlen(instruction) - 3 * sizeof(char));
	i = 0;
	while (i < ft_strlen(instruction) - 3)
	{
		if (instruction[i] >= '0' && instruction[i] <= '9')
			aux[i] = instruction[i];
		else
			return (0);
		i++;
	}
	ft_map_legend(instruction);
	if (ft_check_repeat(instruction) == 0)
		return (0);
	num = ft_atoi(aux);
	free(aux);
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "1235500X";

	printf("%d\n", ft_check_instruction(str));
	printf("%s\n", str);
	return (0);
}
*/
