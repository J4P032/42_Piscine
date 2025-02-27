/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Japo32 <mi@email.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 01:14:58 by Japo32            #+#    #+#             */
/*   Updated: 2024/12/17 02:15:51 by Japo32           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*aux;

	i = 0;
	aux = (t_stock_str *)malloc(ac * sizeof(t_stock_str));
	if (!aux)
		return (NULL);
	while (i < ac)
	{
		aux[i].size = ft_strlen(av[i]) + 1;
		aux[i].str = (char *)malloc((aux[i].size + 1) * sizeof(char));
		aux[i].copy = (char *)malloc((aux[i].size + 1) * sizeof(char));
		if (!(aux[i].str) || !(aux[i].copy))
			return (NULL); //liberar tambien en otra funcion la parte asignada
		j = 0;
		while (j < aux[i].size)
		{
			aux[i].str[j] = av[i][j];
			aux[i].copy[j] = av[i][j]; 
			j++;
		}
		aux[i].str[j] = '\0';
		aux[i].copy[j] = '\0';
		i++;
	}
	return (aux);
}

#include <stdio.h>

int	main (int argc, char **argv)
{
	t_stock_str	*solution;
	int			i;

	if (argc == 1)
		return (0);
	solution = ft_strs_to_tab((argc - 1), argv + 1);
	for (i = 0; i < (argc - 1); i++)
	{
		printf("\n%d", solution[i].size);
		printf("\n%s", solution[i].str);
		printf("\n%s", solution[i].copy);
		printf("\n---------------");
		free(solution[i].str);
		free(solution[i].copy);
	}
	free(solution);
	return (0);
	

}
