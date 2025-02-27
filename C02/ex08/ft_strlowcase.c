/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:25:44 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 10:05:17 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			i++;
		else
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	//char	matrix[] = "Esto es una prueba";
	//char	matrix[] = "ESTOESuNAPRUEBA";
	//char	matrix[] = "Esto?esPREUBArueba\n";
	//char	matrix[] = "EStoes1prUEB<a";
	char	matrix[] = "";
	printf("La frase:\n%s convertida a minusculas es:\n", matrix);
	ft_strlowcase(matrix);
	printf("%s\n", matrix);
	return (0);
}*/
