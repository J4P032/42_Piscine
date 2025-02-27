/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:25:44 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 09:57:46 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			i++;
		else
		{
			str[i] = str[i] - 32;
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
	//char	matrix[] = "Estoesunaprueba";
	//char	matrix[] = "Esto?esunaprueba";
	char	matrix[] = "EStoes1prueba";
	//char	matrix[] = "";
	printf("La frase:\n%s convertida a mayusculas es:\n", matrix);
	ft_strupcase(matrix);
	printf("%s\n", matrix);
	return (0);
}*/
