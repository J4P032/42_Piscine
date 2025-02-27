/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:49:06 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/09 13:25:36 by jnavalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

/*
Checks if the numbers introduced are bigger than 0.
If not prints an error message.
*/

int	ft_error(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "Numbers x and y must be bigger than 0\n", 38);
		return (0);
	}
	return (1);
}

/*
num_row = y and num_column = x

First checks if we are in the first or last row, then if it's
a corner then returns 'o'. If not returns '-'.
If it's not in the 1 or last row, then check if the column is
the first or last, and then return '|'. If not then a blank space. 
*/

char	ft_what_character(int x, int y, int num_row, int num_column)
{
	if (num_row == 1 || num_row == y)
	{
		if (num_column == 1 || num_column == x)
		{
			return ('o');
		}
		else
			return ('-');
	}
	if (num_column == 1 || num_column == x)
	{
		return ('|');
	}
	else
		return (' ');
}

/*
First we check if x and y values are correct using ft_error.
If there is no error it cycles through x and y and calls ft_what_character
to print the correct character in its position.
*/

void	rush(int x, int y)
{
	int	num_row;
	int	num_column;

	if (ft_error (x, y))
	{
		num_row = 1;
		while (num_row <= y)
		{
			num_column = 1;
			while (num_column <= x)
			{
				ft_putchar(ft_what_character(x, y, num_row, num_column));
				num_column++;
			}
			ft_putchar('\n');
			num_row++;
		}
	}
}
