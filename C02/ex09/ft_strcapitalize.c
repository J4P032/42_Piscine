/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:07:50 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/14 11:42:09 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_is will say if the char is numeric(1), lowcase(2), upcase(3) or none(0)
we lowcapitalize first the str to safe lines of uppcaps in strcapitalize func*/

int	ft_is(char str)
{
	if (str < '0')
		return (0);
	if ((str >= '0') && (str <= '9'))
		return (1);
	if ((str > '9') && (str < 'A'))
		return (0);
	if ((str >= 'A') && (str <= 'Z'))
		return (3);
	if ((str > 'Z') && (str < 'a'))
		return (0);
	if ((str >= 'a') && (str <= 'z'))
		return (2);
	return (0);
}

char	*ft_lowcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			i++;
		else
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcapitalize(str);
	while (str[i] != '\0')
	{
		if ((i == 0) && (ft_is(str[i]) == 2))
		{
			str[0] = str[0] - 32;
			i++;
		}
		if (ft_is(str[i]) == 0)
			i++;
		if ((ft_is(str[i]) == 2) && (ft_is(str[i - 1])) == 0)
		{
			str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	//char	a[] = "satut, comment tu vas ? 42mots quarante-deus; cinqnte+et+un";
	char	a[] = "HOLA, como VAs en?tu_vida%de_nuevo-programador de SISTEMAS?";
	//char	a[] = "234_fulano es un MUUY$buen aMIGO_quE me alegra la VIDA¡ja!";
	//char	a[] = "esto es un_ejemplo con\nun_salto de LINEA\n:ASI";
	//char a[] = "";
	printf("La frase:\n%s\ncon Mayusculas la primera letra es: \n", a);
	ft_strcapitalize(a);
	printf("%s\n", a);
	return (0);
}*/
