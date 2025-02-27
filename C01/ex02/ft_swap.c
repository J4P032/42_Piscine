/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:39:18 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 15:47:33 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *b;
	*b = *a;
	*a = change;
}
/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 32;
	b = 42;
	printf("A es: %d y B es: %d\n", a, b);
	ft_swap(&a, &b);
	printf("A ahora es: %d y B es ahora: %d\n", a, b);
	return (0);
}*/
