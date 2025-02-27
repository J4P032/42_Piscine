/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:12:14 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 15:32:30 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 32;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("La división de %d entre %d es: %d\n", a, b, div);
	printf("El resto de %d entre %d es: %d\n", a, b, mod);
}*/
