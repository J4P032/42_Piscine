/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:29:18 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/26 16:41:38 by jrollon-         ###   ########.fr       */
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
	number = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("%s elevado a %s es = %d", argv[1], argv[2], number);
	return (0);
}*/
