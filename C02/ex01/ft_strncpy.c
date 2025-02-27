/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:10:58 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 13:06:18 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char			phrase[] = "Hola mundo!";
	unsigned int	n;
	unsigned int i = 0;

	printf("La frase original es: %s\n", phrase);
	n = 20; //el numero que truncamos el string
	char	phrase_cpy[100];
	while (i < 100)
	{
		phrase_cpy[i] = '#';
		i++;
	}
	phrase_cpy[i] = '\0';
	i = 0;
	ft_strncpy(phrase_cpy, phrase, n);
	printf("la frase copia es: %s\n", phrase_cpy);
	while (i < sizeof(phrase_cpy))
	{
		if (phrase_cpy[i] == '\0')
			write(1, "f", 1);
		else
			write(1, &phrase_cpy[i], 1);
		i++;
	}
	return (0);
}
*/
/* It has to copy from one string to other, but n is number of chars to
copy. 
1. If n is lower than size of src NOT put \0 chars in dest. 
2. If size src < n it copies \0 up to fill n size.*/
