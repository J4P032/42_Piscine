/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:14:32 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/12 17:32:20 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	char 	phrase[12] = "Hola mundo!";
	//int		number;

	printf("El numero de letras del string es: %d", ft_strlen(phrase));
	return (0);
}*/
