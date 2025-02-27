/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:36:11 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 20:13:30 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab[j];
		tab[j] = tab[i];
		tab[i] = aux;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	
	int	matrix[6] = {1, 2, 3, 4, 5, 6};
	int i = 0;
	size = 6;
	
	while (i < size)
	{
		printf("%d", matrix[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(matrix, size);
	i = 0;
	while (i < size)
	{
		printf("%d", matrix[i]);
        i++;
	}
}*/
