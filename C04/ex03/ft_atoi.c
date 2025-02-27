/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:57:08 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/21 19:22:23 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* isspace(3) consider spaces (space, \t \n \v \r \f */
/* minus (-) odd = +, even = - */
/* overflow or underflow correct. No need of long int */

/* 1=nums | 2=- | 3=isspaces | 4=+ */
int	ft_fc(char l)
{
	if (l < 9)
		return (0);
	if ((l == 32) || ((l < 14) && (l > 8)))
		return (3);
	if ((l > 13) && (l < 32))
		return (0);
	if ((l > 32) && (l < 43))
		return (0);
	if (l == '+')
		return (4);
	if (l == 44)
		return (0);
	if (l == '-')
		return (2);
	if ((l > 45) && (l < 48))
		return (0);
	if ((l >= '0') && (l <= '9'))
		return (1);
	else
		return (0);
}

int	ft_convert(char *number)
{
	int	i;
	int	convert;
	int	solution;

	i = 0;
	convert = 0;
	if (!number)
		return (0);
	while (number)
	{
		solution = ft_fc(number[i]);
		if (solution == 1)
			convert = (convert * 10) + (number[i] - '0');
		else
			return (convert);
		i++;
	}
	return (convert);
}

int	ft_atoi(char *str)
{
	int	result;
	int	minus_nbr;
	int	i;

	result = 0;
	minus_nbr = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && ft_fc(str[i]) == 3)
		i++;
	while (str[i] != '\0' && (ft_fc(str[i]) == 2 || ft_fc(str[i]) == 4))
	{
		if (str[i] == '-')
			minus_nbr++;
		i++;
	}
	if (minus_nbr % 2 != 0)
		result = -1 * ft_convert(&str[i]);
	else
		result = ft_convert(&str[i]);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char kk[100] = "   --2147483648 45";
//	char kk[100] = "34   +--445";
//	char kk[100] = "  -x32434";
//	char *kk = NULL;
	printf("array:%d", ft_atoi(kk));
//	printf("numero:%d", atoi(kk));
	return 0;

}*/
