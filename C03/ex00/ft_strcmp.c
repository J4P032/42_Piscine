/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:35:13 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/18 09:48:31 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if both strings are equal. If they do, it returns a 0, if not it
returns the difference between s1 and s2 in char ascii code numbers.*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
		{
			dif = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (dif);
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "\201";
	char	s2[] = "A";
	
	int valor = ft_strcmp(s1, s2);
	if (valor == 0)
		printf("<str1> and <str2> are equal");
	if (valor < 0)
		printf("<str1> is less than <str2> (%d)", valor);
	if (valor > 0)
		printf("<str1> is greater than <str2> (%d)", valor);
	return (0);
}*/
