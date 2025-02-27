/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:16:37 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/10 18:36:01 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writer_cero(int convert, int spaces)
{
	write(1, "0", 1);
	write(1, &convert, 1);
	if (spaces == 1)
		write(1, " ", 1);
	else
		write(1, ", ", 2);
}

void	ft_writer_one(int convert, int spaces, int f_nums, int s_nums)
{
	if (spaces == 1)
	{
		convert = (f_nums / 10) + 48;
		write(1, &convert, 1);
		convert = (f_nums % 10) + 48;
		write(1, &convert, 1);
		write(1, " ", 1);
	}
	else
	{
		convert = (s_nums / 10) + 48;
		write(1, &convert, 1);
		convert = (s_nums % 10) + 48;
		write(1, &convert, 1);
		if (f_nums != 98)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		first_nums;
	int		second_nums;
	char	convert;

	first_nums = 0;
	second_nums = 1;
	while (first_nums <= 98)
	{
		while (second_nums <= 99)
		{
			convert = first_nums + 48;
			if ((first_nums < 10) && (second_nums > first_nums))
				ft_writer_cero(convert, 1);
			else if (second_nums > first_nums)
				ft_writer_one(convert, 1, first_nums, second_nums);
			convert = second_nums + 48;
			if ((second_nums < 10) && (second_nums > first_nums))
				ft_writer_cero(convert, 2);
			else if (second_nums > first_nums)
				ft_writer_one(convert, 2, first_nums, second_nums);
			second_nums++;
		}
		second_nums = 1;
		first_nums++;
	}
}
