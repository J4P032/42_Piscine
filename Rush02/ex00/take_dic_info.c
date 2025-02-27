/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_dic_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:27:51 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 22:53:56 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "numbers.h"

#include <stdio.h>

void	init_str(char *str, int lengh)
{
	int	i;

	i = 0;
	while (i < lengh)
	{
		str[i] = '\0';
		i++;
	}
}

static void	process_until_colon(char *str, int *i, int *flag_colon)
{
	while (str[*i] != ':' && str[*i] != '\0' && *flag_colon == 0)
		(*i)++;
	if (str[*i] == ':' && *flag_colon == 0)
	{
		(*i)++;
		*flag_colon = 1;
		while (str[*i] == ' ')
			(*i)++;
	}
}

char	*take_dic_info(char *str)
{
	int		i;
	int		j;	
	int		flag_colon;
	char	*aux;

	aux = (char *)malloc(strlengh(str) * sizeof(char));
	i = 0;
	j = 0;
	flag_colon = 0;
	init_str(aux, strlengh(str));
	while (str[i] != '\0')
	{
		process_until_colon(str, &i, &flag_colon);
		if (str[i] > 31 && str[i] < 127)
			aux[j++] = str[i];
		else
		{
			aux[0] = '\0';
			break ;
		}
		i++;
	}
	aux[j] = '\0';
	return (aux);
}
