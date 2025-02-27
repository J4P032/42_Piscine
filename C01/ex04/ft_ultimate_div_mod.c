/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:49:54 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 16:05:49 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	*a = aux1 / aux2;
	*b = aux1 % aux2;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 32;
	b = 10;
	printf("a= %d, b=%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div a/b = %d, Mod a/b = %d\n", a, b);
	return (0);
}*/
