/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:32:30 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/09 16:30:46 by jnavalla         ###   ########.fr       */
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

1º if = if we are in (1,1) or (x,1) then returns "A"
2º if = if we are in (1,y) or (x,y) then returns "C"
3º if = any position on any edge is "B" (A or C are already done in 1º and 2º)
else = it is in the middle of the "square" so a blank space.
*/

char	ft_what_character(int x, int y, int num_row, int num_column)
{
	if ((num_row == 1 && num_column == 1) || (num_row == 1 && num_column == x))
	{
		return ('A');
	}
	if ((num_row == y && num_column == 1) || (num_row == y && num_column == x))
	{
		return ('C');
	}
	if (num_column == 1 || num_column == x || num_row == 1 || num_row == y)
	{
		return ('B');
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
