/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:50:25 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 20:05:38 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int num_chars;

	char phrase[] = "Hola mundo!";
	num_chars = 0;
	
	while (phrase[num_chars] != '\0')
		num_chars++;
	num_chars = num_chars + 1;
	printf("La frase original es: %s\n", phrase);
	printf("el num de chars es: %i\n", num_chars);

	char phrase_cpy[num_chars];
	
	ft_strcpy(phrase_cpy, phrase);
	printf("La frase copia es: %s\n", phrase_cpy);
	return (0);
}*/
