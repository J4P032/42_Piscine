/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:48:04 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/13 21:01:13 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    int yes_no;

   	//char  matrix[] = "Esto es una prueba";
    //char  matrix[] = "estoesunaprueba";
    //char  matrix[] = "Estoesunaprueba";
    char  matrix[] = "estoes1prueba";
    //char    matrix[] = "";
    yes_no = ft_str_is_lowercase(matrix);
    if (yes_no == 1)
        printf("La frase:\n%s tiene solo minusculas\n", matrix);
    else
        printf("La frase:\n%s tiene algun caracter no minuscula\n", matrix);
    return (0);
}*/
