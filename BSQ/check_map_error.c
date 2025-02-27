/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:42:37 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/27 17:55:21 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "squaregame.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_map(int fd2, char *a)
{
	unsigned int	i;
	unsigned int	j;
	int				cont;

	i = 0;
	j = 0;
	cont = 0;
	i = read(fd2, a, 1);
	cont++;
	while (i > 0)
	{
		if (a[j] == '\n')
		{
			j = 0;
			return (cont);
		}
		cont++;
		i = read(fd2, a + j, 1);
	}
	return (cont);
}

int	check_map_error(char *str)
{
	int		fd2;
	char	*a;
	int		line_size;
	int		row_num;

	a = (char *)malloc(1024 * sizeof(char));
	fd2 = open(str, O_RDONLY);
	row_num = ft_check_instruction(read_map_info(fd2));
	if (fd2 == -1)
		return (0);
	else
	{
		if (row_num == 0)
			return (0);
		line_size = check_map(fd2, a);
		while (row_num > 1)
		{
			if (line_size != check_map(fd2, a))
				return (0);
			row_num--;
		}
		if (check_map(fd2, a) != 1)
			return (0);
		return (1);
	}
}
