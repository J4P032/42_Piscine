/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:36:15 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/26 22:02:54 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
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
	number = ft_find_next_prime(atoi(argv[1]));
	printf("el primo siguiente a %s es = %d", argv[1], number);
	return (0);
}*/
