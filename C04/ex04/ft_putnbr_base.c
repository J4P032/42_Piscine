/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:53:43 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/23 10:37:14 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int range -2,147,483,648 - 647*/
/* Will give 0 if not valid, or the base number (length) if valid */

#include <unistd.h>

int	ft_strcheck(char *chr)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (chr[i] != '\0')
	{
		if ((chr[i] == '+') || (chr[i] == '-'))
			return (0);
		while (chr[j] != '\0')
		{
			if (chr[i] == chr[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (i);
}

int	ft_errors(char *str)
{
	int	error_num;

	error_num = ft_strcheck(str);
	if (error_num < 2)
		return (0);
	else
		return (error_num);
}

void	ft_init_array(char *chr)
{
	int				i;

	i = 0;
	while (i < 33)
	{
		chr[i] = '\0';
		i++;
	}
}

void	ft_conversion(int num, int base, char *aux)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	if (num < 0)
		neg = -1;
	while (num / base != 0 && i < 33)
	{
		aux[i] = (num % base) * neg + '0';
		num = num / base;
		i++;
	}
	if (i < 33)
		aux[i] = (num % base) * neg + '0';
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_type;
	int		i;
	int		index;
	char	aux[33];

	i = 32;
	index = 0;
	ft_init_array(aux);
	base_type = ft_errors(base);
	if ((nbr < 0) && (base_type > 1))
		write(1, "-", 1);
	if (base_type != 0)
		ft_conversion(nbr, base_type, aux);
	while (i >= 0)
	{
		if (aux[i] != '\0')
		{
			index = aux[i] - '0';
			write(1, &base[index], 1);
		}
		i--;
	}
}
/*
//#include <stdio.h>

int	main()
{
	int	number;
	char	base[] = "01";
//	char	base[] = "PATI"; //Tiene que salir TPI para num=35
//	char	base[] = "01234567";
//	char	base[] = "0123456789ABCDEF";

	number = -2147483648;
//	number = -35;
	ft_putnbr_base(number, base);
	return (0);
}*/
