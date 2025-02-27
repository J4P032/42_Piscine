/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:13:22 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 18:00:43 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;
	size = size - 1;
	while (src[i] != '\0')
	{
		src_size++;
		i++;
	}
	i = 0;
	while ((src[i] != '\0') && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (src_size);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	unsigned int	size;
	unsigned int	i;

	i = 0;
	size = 4;	//modificate number to see diferent results.
	char	phrase[] = "Hola mundo!"; //11
	//char	phrase[] = ""; //0
	//char	phrase[] = " holafl1p40%\n"; //13
	char	phrasecpy[100];
	printf("tamaño src es: %i\n", ft_strlcpy(phrasecpy, phrase, size));
	printf("La frase original es: %s\n", phrase);
	write(1, "La copia es: ", 13);
	while ( i < size)
	{
		if (phrasecpy[i] == '\0')
			write(1, "#", 1); // # = \0 to check if everything is ok
		else
			write(1, &phrasecpy[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
