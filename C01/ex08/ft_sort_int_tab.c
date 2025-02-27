/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:21:58 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 20:46:26 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		if (tab[i] > tab[j])
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int size;

	//int	list[10] = {4, 3, 7, 0, 1, 9, 2, 5, 8, 6};
	int list[10] = {7, 3, 7, 0, 1, 9, 0, 5, 18, 6};
	size = 10;
	i = 0;
	//imprimo para ver si lo ha definido en la matriz
	while (i < size)
	{
		printf("%d", list[i]);
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab(list, size);
	//los imprimo una vez pasados para ver el orden
	i = 0;
	while (i < size)
	{
		printf("%d", list[i]);
		i++;
	}
}*/
