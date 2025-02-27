/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:56:44 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/18 11:17:15 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if both strings are equal. If they do, it returns a 0, if not it
returns the difference between s1 and s2 in unsigned char ascii code numbers.
n controls up the the size of the string we want to check*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	dif;

	i = 0;
	dif = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
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
	char			s1[] = "AB";
	char			s2[] = "Afggrgrgrgr";
	unsigned int	n = 2;

	int v = ft_strncmp(s1, s2, n);
	if (v == 0)
		printf("<str1> and <str2> are equal in the first %d bytes", n);
	if (v < 0)
		printf("<str1> is less than <str2> (%d)", v);
	if (v > 0)
		printf("<str1> is greater than <str2> (%d)", v);
	return (0);
}*/
