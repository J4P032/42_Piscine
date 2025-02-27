/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:36:53 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/27 14:12:24 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 1024
#define INS_SIZE 20
#include <unistd.h>
#include <stdlib.h>
#include "squaregame.h"

char	**allocate_matrix(int rows, int colums)
{
	int		i;
	int		j;
	char	**matrix;

	i = 0;
	matrix = (char **)malloc(rows * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (i < rows)
	{
		matrix[i] = (char *)malloc(colums * sizeof(char));
		if (matrix[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(matrix[j]);
				j++;
			}
			free(matrix);
			return (NULL);
		}
		i++;
	}
	return (matrix);
}

char	*read_map_info(int fd)
{
	unsigned int	bytes_r;
	unsigned int	bytes_i;
	char			*instruct;

	bytes_i = 0;
	instruct = (char *)malloc((INS_SIZE) * sizeof(char));
	bytes_r = read(fd, instruct, 1);
	while (bytes_r > 0)
	{
		if (instruct[bytes_i] == '\n')
		{
			instruct[bytes_i] = '\0';
			bytes_i = 0;
			return (instruct);
		}
		bytes_i += bytes_r;
		bytes_r = read(fd, instruct + bytes_i, 1);
	}
	return (instruct);
}

char	*read_map_line(int fd, char *buffer, int *num_chr)
{
	unsigned int	bytes_r;
	unsigned int	bytes_i;

	bytes_i = 0;
	bytes_r = read(fd, buffer, 1);
	while (bytes_r > 0)
	{
		if (buffer[bytes_i] == '\n')
		{
			buffer[bytes_i] = '\0';
			bytes_i = 0;
			return (buffer);
		}
		*num_chr = *num_chr + 1;
		bytes_i += bytes_r;
		bytes_r = read(fd, buffer + bytes_i, 1);
	}
	bytes_r = read(fd, buffer + bytes_i, 1);
	return (buffer);
}

char	**map_to_matrix(int fd, int row_num)
{
	char	*buffer;
	char	**matrix;
	int		i;
	int		j;
	int		num_columns;

	i = 0;
	num_columns = 0;
	buffer = (char *)malloc(BUF_SIZE * sizeof(char));
	buffer = read_map_line(fd, buffer, &num_columns);
	if (row_num > 0)
		matrix = allocate_matrix(row_num, num_columns);
	while (i < row_num)
	{
		j = -1;
		while (j++ < num_columns)
			matrix[i][j] = buffer[j];
		i++;
		num_columns = 0;
		read_map_line(fd, buffer, &num_columns);
	}
	free(buffer);
	return (matrix);
}
