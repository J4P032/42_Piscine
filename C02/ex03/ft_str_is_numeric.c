/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:30:37 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/13 20:43:16 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
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

	char	matrix[] = "0558545d854949";
	//char	matrix[] = "012456432938003";
	//char	matrix[] = "2262664 6464";
	//char	matrix[] = "";
    yes_no = ft_str_is_numeric(matrix);
    if (yes_no == 1)
        printf("La frase:\n%s tiene solo caracteres numericos\n", matrix);
    else
        printf("La frase:\n%s tiene algun caracter no numerico\n", matrix);
    return (0);
}*/
