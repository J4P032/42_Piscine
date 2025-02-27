/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:42:06 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/25 22:04:37 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	i = power;
	aux = nb;
	if (power > 0)
	{
		while (i > 1)
		{
			aux = aux * nb;
			i--;
		}
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (aux);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	number;

	number = 0;
	if (argc != 3)
	{
		printf("has to be ./a.out <int number> <int power>");
		return (0);
	}
	number = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("%s elevado a %s es = %d", argv[1], argv[2], number);
	return (0);
}*/
