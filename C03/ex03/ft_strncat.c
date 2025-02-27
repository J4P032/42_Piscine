/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:28:31 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/18 19:48:26 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	i;

	i = 0;
	size_src = ft_size(src);
	size_dest = ft_size(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(void)
{
	int	i = 0;
	int	n = 2; //num to change
	char	s1[] = "1234";
	char	s2[9] = "ABCD";
	ft_strncat(s2, s1, n);
	while (i <= 20)
	{
		if (s2[i] == '\0')
			write(1, "#", 1);
		else
			write(1, &s2[i], 1);
	i++;
	}

	return (0);
}*/
