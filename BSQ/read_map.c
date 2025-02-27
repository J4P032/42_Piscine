/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:23:47 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/27 17:50:46 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 1024
#include "squaregame.h"
#include <unistd.h>
#include <fcntl.h>

void	collect_data(char **matrix, char *inst, int row_nmb, int *long_spc_obs)
{
	int	ij[2];
	int	square_maxsize;

	ij[0] = row_nmb;
	ij[1] = long_spc_obs[0];
	square_maxsize = ft_sqrt(long_spc_obs[1]);
	if (ij[1] < square_maxsize)
		square_maxsize = ij[1];
	if (row_nmb < square_maxsize)
		square_maxsize = row_nmb;
	ft_get_solution(ij, matrix, inst, square_maxsize);
}

void	terminal_to_matrix(void)
{
	int		row_num;
	char	*instructions;
	char	**matrix;
	int		*long_spc_obs;

	instructions = read_map_info(0);
	row_num = ft_check_instruction(instructions);
	if (row_num > 0)
	{
		matrix = map_to_matrix(0, row_num);
		long_spc_obs = ft_count_spaces(matrix, instructions[0], row_num);
		collect_data(matrix, instructions, row_num, long_spc_obs);
	}
}

void	read_map(char *map)
{
	int		fd;
	int		row_num;
	char	**matrix;
	char	*instructions;
	int		*long_spc_obs;

	fd = open(map, O_RDONLY);
	if (fd == -1)
		write(2, "map error\n", 10);
	else
	{
		instructions = read_map_info(fd);
		row_num = ft_check_instruction(instructions);
		if (row_num > 0)
		{
			matrix = map_to_matrix(fd, row_num);
			long_spc_obs = ft_count_spaces(matrix, instructions[0], row_num);
			collect_data(matrix, instructions, row_num, long_spc_obs);
			close(fd);
		}
		else
			write(2, "map error\n", 10);
	}
	close(fd);
}
