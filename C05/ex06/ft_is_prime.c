/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:11:34 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/26 21:31:47 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAX INT is prime 2147483647*/
int	ft_is_prime(int nb)
{
	int	aux;

	aux = nb - 1;
	if (nb < 2)
		return (0);
	while ((nb % aux != 0) && (aux > 1))
		aux--;
	if (aux == 1)
		return (1);
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
	number = ft_is_prime(atoi(argv[1]));
	printf("el  %s es primo = %d", argv[1], number);
	return (0);
}*/
