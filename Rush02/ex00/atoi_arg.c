/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:54:08 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 19:22:20 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "numbers.h"

/* 0=noPrint | 1=nums | 2=Print | 3=spaces */
int	ft_fc(char l)
{
	if (l < 31)
		return (0);
	if (l == 32)
		return (3);
	if ((l > 32) && (l < 48))
		return (2);
	if ((l > 47) && (l < 58))
		return (1);
	if ((l > 57) && (l < 127))
		return (2);
	return (0);
}

void	init_str2(char *str)
{
	int	i;

	i = 0;
	while (i < strlengh(str))
	{
		str[i] = '\0';
		i++;
	}
}

char	*print_to_aux(char *str, int i, int j, char *aux)
{
	while (ft_fc(str[i]) == 1)
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	while (str[i] == ' ')
		i++;
	while ((str[i] != ':') && (str[i] != '\0'))
		i++;
	if ((str[i] == ':') && (j == 0))
		aux[0] = '0';
	if (str[i] == ':')
		return (aux);
	else
		aux[0] = '\0';
	return (aux);
}

char	*take_dic_nbr(char *str)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = (char *)malloc(strlengh(str) * sizeof(char));
	init_str2(aux);
	while ((ft_fc(str[i]) == 0) || (ft_fc(str[i]) == 2))
	{
		i++;
		return (aux);
	}
	while ((str[i] == ' ') && (str[i] != '0'))
		i++;
	while ((ft_fc(str[i]) == 0) || (ft_fc(str[i]) == 2))
	{
		i++;
		return (aux);
	}
	while (str[i] == '0')
		i++;
	aux = print_to_aux(str, i, j, aux);
	return (aux);
}
