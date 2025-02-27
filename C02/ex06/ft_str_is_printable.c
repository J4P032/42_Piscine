/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:13:06 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/13 21:24:18 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
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

    char  matrix[] = "Esto es una prueba";
    //char  matrix[] = "Estoesunaprueba\n";
    //char  matrix[] = "Esto\esunaprueba";
    //char  matrix[] = "EStoes1prueba";
    //char    matrix[] = "";
    yes_no = ft_str_is_printable(matrix);
    if (yes_no == 1)
        printf("La frase:\n%s tiene solo imprimibles\n", matrix);
    else
        printf("La frase:\n%s tiene algun caracter no imprimible\n", matrix);
    return (0);
}*/
