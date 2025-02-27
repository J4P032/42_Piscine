/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:36:54 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 23:01:21 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 128
#include "numbers.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>  //

int	number_of_lines(int fd, char *str)
{
	unsigned int	bytes_r;
	unsigned int	total_bytes;
	int				line_count;

	bytes_r = read(fd, str, 1);
	total_bytes = 0;
	line_count = 0;
	while (bytes_r > 0)
	{
		if (str[total_bytes] == '\n')
		{
			line_count++;
			total_bytes = 0;
		}
		else
			total_bytes += bytes_r;
		bytes_r = read(fd, str + total_bytes, 1);
	}
	return (line_count);
}

t_dict	*line_to_struct(int fd, char *str, int nlines)
{
	unsigned int	bytes_r;
	unsigned int	total_bytes;
	int				numline;
	t_dict			*dict;

	dict = declare_dictionary(nlines);
	numline = 0;
	total_bytes = 0;
	bytes_r = read(fd, str + total_bytes, 1);
	while (bytes_r > 0)
	{
		if (str[total_bytes] == '\n')
		{
			str[total_bytes] = '\0';
			assign_to_struct(&dict[numline], take_dic_nbr(str),
				take_dic_info(str));
			numline++;
			total_bytes = 0;
		}
		else
			total_bytes += bytes_r;
		bytes_r = read(fd, str + total_bytes, 1);
	}
	return (dict);
}

t_dict	*read_dictionary(char *file)
{
	int		fd;
	int		fd2;
	char	*buffer;
	int		line_count;
	t_dict	*tomato;

	buffer = (char *)malloc(BUF_SIZE);
	fd = open(file, O_RDONLY);
	fd2 = open(file, O_RDONLY);
	line_count = 0;
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		free(buffer);
	}
	line_count = number_of_lines(fd, buffer);
	tomato = line_to_struct(fd2, buffer, line_count);
	close(fd);
	close(fd2);
	free(buffer);
	return (tomato);
}
