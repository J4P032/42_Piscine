/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:25:44 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/13 20:45:32 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);
		if ((str[i] > 'Z') && (str[i] < 'a'))
			return (0);
		if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	yes_no;

	//char	matrix[] = "Esto es una prueba";
	//char	matrix[] = "Estoesunaprueba";
	//char	matrix[] = "Esto?esunaprueba";
	//char	matrix[] = "EStoes1prueba";
	char	matrix[] = "";
	yes_no = ft_str_is_alpha(matrix);
	if (yes_no == 1)
		printf("La frase:\n%s tiene solo caracteres alfabeticos\n", matrix);
	else
		printf("La frase:\n%s tiene algun caracter no alfabetico\n", matrix);
	return (0);
}*/
