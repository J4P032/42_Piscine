/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:39:26 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/25 21:33:04 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = (nb - 1);
	if (nb > 1)
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	number;

	number = 0;
	if (argc != 2)
	{
		printf("has to be ./a.out <int number>");
		return (0);
	}
	number = ft_iterative_factorial(atoi(argv[1]));
	printf("El %s! es = %d", argv[1], number);
	return (0);
}*/
