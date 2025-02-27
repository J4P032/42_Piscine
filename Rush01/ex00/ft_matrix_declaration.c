/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_declaration.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomez-p <cgomez-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:50:16 by cgomez-p          #+#    #+#             */
/*   Updated: 2024/11/17 19:12:21 by cgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_matrix_declaration_row(int *matrix, char *str, int size, int i)
{
	int	j;

	i = 0;
	j = 0;
	while (i < (size * size))
	{
		if ((i == 0) || (i == 5) || (i == 30) || (i == 35))
			matrix[i] = '5';
		if ((i > 5) && (i < 29))
			matrix[i] = 48;
		if ((i > 0) && (i < 5))
		{
			matrix[i] = str[j] - '0';
			j = j + 2;
		}
		if ((i > 30) && (i < 35))
		{
			matrix[i] = str[j] - '0';
			j = j + 2;
		}
		i++;
	}
}

void	ft_matrix_declaration_left_col(int *matrix, char *str, int size, int i)
{
	int	j;
	int	count;

	i = 6;
	j = 16;
	count = 0;
	while (i < (size * size))
	{
		if ((i == (count + size)) && (i < 25))
		{
			matrix[i] = str[j] - '0';
			j = j + 2;
			count = count + size;
			i = i + size - 1;
		}
		i++;
	}
}

void	ft_matrix_declaration_right_col(int *matrix, char *str, int size, int i)
{
	int	j;
	int	count2;

	i = 11;
	count2 = 5;
	while (i < (size * size))
	{
		if ((i == (count2 + size)) && (i < 30))
		{
			matrix[i] = str[j] - '0';
			j = j + 2;
			count2 = count2 + size;
			i = i + size - 1;
		}
		i++;
	}
}

void	ft_matrix_declaration(int	*matrix, char *str, int size)
{
	int	i;

	i = 0;
	ft_matrix_declaration_row(matrix, str, size, i);
	ft_matrix_declaration_left_col(matrix, str, size, i);
	ft_matrix_declaration_right_col(matrix, str, size, i);
}
