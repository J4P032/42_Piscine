/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:25:47 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/26 18:49:47 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		nb = nb * ft_recursive_power(nb, (power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (ft_recursive_power(i, 2) < nb)
		i++;
	if (ft_recursive_power(i, 2) == nb)
		return (i);
	else
		return (0);
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
	number = ft_sqrt(atoi(argv[1]));
	printf("raiz cuadrada de %s es = %d", argv[1], number);
	return (0);
}*/
