/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:24 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/17 22:38:47 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

extern int	ft_input_error(char *str, int size);
extern void	ft_matrix_declaration(int *matrix, char *str, int size);
extern void	ft_show_matrix(int *matrix, int size, int i);
extern int	ft_min_check(int	*m);
extern void	ft_fill_matrix(int *matrix, int size);

int	ft_write_input_error(char *str, int size)
{
	int	error_result;

	error_result = ft_input_error(str, size);
	if (error_result == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int	*matrix;
	int	size;
	int	value;

	size = 4;
	size = size + 2;
	matrix = malloc(sizeof(int) * size * size);
	if (argc != 2)
	{
		write(1, "entry format: ./rush-01\"nums spaced nums sequence\"", 50);
		return (0);
	}
	value = ft_write_input_error(argv[1], (size - 2));
	if (value == 1)
	{
		ft_matrix_declaration(matrix, argv[1], size);
		ft_fill_matrix(matrix, size);
		if (ft_min_check(matrix) == 1)
			ft_show_matrix(matrix, size, 7);
	}
	if (ft_min_check(matrix) == 0)
		write(1, "Error\n", 6);
	free(matrix);
	matrix = 0;
	return (0);
}
