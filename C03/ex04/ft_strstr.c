/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:09:40 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/19 09:01:42 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_findstr(char *s1, char *s2)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	j = 0;
	pos = 0;
	while (s1[i] != '\0')
	{
		while ((s1[i] == s2[j]) && (s1[i] != '\0'))
		{
			if (s2[j] != '\0')
			{
				i++;
				j++;
			}
			pos = i;
		}
		if (s2[j] == '\0')
			return (pos - j);
		j = 0;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	found_position;
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	found_position = ft_findstr(str, to_find);
	if (!found_position)
		return (0);
	else
		return (&str[found_position]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "En un lugar de la Mancha de cuyo...N";
	char	s2[] = "Patata";
	printf("solucion: %s", ft_strstr(s1, s2));
	return (0);
}*/
