/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:09:35 by jrollon-          #+#    #+#             */
/*   Updated: 2024/12/09 22:45:24 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*if type = b only calculates base. In other case, it calculates power
but until number are included in base. If not will not count those*/
int	ft_strlen(char *str, char *base, char type)
{
	int	i;
	int	j;

	i = 0;
	if (type == 'b')
	{
		while (base[i] != '\0')
			i++;
		return (i);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		if (j == ft_strlen(str, base, 'b'))
			return (i);
		i++;
	}
	return (i);
}

/*1 is error in base, 0 is no error*/
int	ft_error_base(char *s, char *b)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(s, b, 'b') < 2)
		return (1);
	while (b[i] != '\0')
	{
		if ((b[i] == '+') || (b[i] == '-') || (b[i] == ' '))
			return (1);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/*returns value of the character if included in the base
example: numb=TTIAP base=PATI. T=2 because is 3rd place
Starts by 0*/
int	value(char a, char *str, char *base, int n_base)
{
	int	i;

	i = 0;
	if (!ft_error_base(str, base))
	{
		while ((base[i] != a) && (i < n_base))
			i++;
		if (i == n_base)
			return (-1);
		else
			return (i);
	}
	else
		return (-1);
}

int	ft_power(int nb, int power)
{
	if (power > 0)
		nb = nb * ft_power(nb, (power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n_base;
	int	power;
	int	n;
	int	negative;
	int	i;

	i = 0;
	n = 0;
	negative = 1;
	n_base = ft_strlen(str, base, 'b');
	while ((str[0] == ' ') || (str[0] == '+'))
		str++;
	while ((str[0] == '-') || (str[0] == '+'))
	{
		if (str[0] == '-')
			negative = -negative;
		str++;
	}
	power = ft_strlen(str, base, 's') - 1;
	while ((str[i] != '\0') && (power > -1))
		n = n + value(str[i++], str, base, n_base) * ft_power(n_base, power--);
	if (negative < 0)
		return (-n);
	return (n);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nmb;

	if (argc != 3)
	{
		printf("arguments must be: <array> <base>\n");
		return (0);
	}
	nmb = ft_atoi_base(argv[1], argv[2]);
	printf("el numero es: %d\n", nmb);
	return (0);
}*/
