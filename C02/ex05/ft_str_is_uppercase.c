/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:03:22 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/13 21:11:06 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
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

    char  matrix[] = "ESTO ES UNA PRUEBA";
    //char  matrix[] = "ESTOESUNAPRUEBA";
    //char  matrix[] = "ESTOES1PRUEBA";
    //char  matrix[] = "ESTOESUnAPRUEBA";
    //char    matrix[] = "";
    yes_no = ft_str_is_uppercase(matrix);
    if (yes_no == 1)
        printf("La frase:\n%s tiene solo caracteres mayusculas\n", matrix);
    else
        printf("La frase:\n%s tiene algun caracter no mayuscula\n", matrix);
    return (0);
}*/
