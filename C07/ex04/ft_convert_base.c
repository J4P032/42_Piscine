/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Japo32 <mi@email.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:39:05 by Japo32            #+#    #+#             */
/*   Updated: 2024/12/14 17:30:14 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int	ft_power(int nb, int power);
extern int	ft_logarithm(int base, long number);
extern void	ft_putnbr_base(int nbr, char *base, char *aux, int size);

/*Returns 0 if base is wrong. If not, return length of base in int number*/
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i) != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+') || (base[i] == ' '))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

/*Returns lenght of number - 1 (power to convert) if is ok in base passed, but 
negative if it is negative. Returns 0 if wrong*/
int	ft_check_number(char *number, char *base, int length_base)
{
	int	i;
	int	j;
	int	negative;

	negative = 1;
	while ((*number == ' ') || (*number == '+'))
		number++;
	while ((*number == '-') || (*number == '+'))
	{
		if (*number == '-')
			negative = -negative;
		number++;
	}
	i = 0;
	while (number[i] != '\0')
	{
		j = 0;
		while ((base[j] != '\0') && (number[i] != base[j]))
			j++;
		if (j == length_base)
			return (negative * i);
		i++;
	}
	return (negative * i);
}

/*Finds decimal number based in position of base given*/
int	value(char a, char *str)
{
	int	i;

	i = 0;
	while ((str[i] != a) && (str[i] != '\0'))
		i++;
	return (i);
}

/*num = sum of each digit + base^(n_digits - 1) - i  */
int	ft_convert_to_decimal(char *nbr, char *base, int nbase, int power)
{
	int	n;
	int	i;
	int	negative;

	n = 0;
	if (power < 0)
	{
		negative = -1;
		power = -power;
	}
	else
		negative = 1;
	power = power - 1;
	while (((*nbr == ' ') || (*nbr == '+') || (*nbr == '-')) && (*nbr))
		nbr++;
	i = 0;
	while (i <= power)
	{
		n = n + value(nbr[i], base) * ft_power(nbase, (power - i));
		i++;
	}
	if (negative == -1)
		return (-n);
	return (n);
}

/*power < 0 NULL because if == 0 can be any -9 to 9 digit from ft_check_number
max number to malloc => log(base)(of number) + 1 */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbasef;
	int		nbaset;
	int		power;
	int		number_dec;
	char	*aux;

	nbasef = ft_check_base(base_from);
	nbaset = ft_check_base(base_to);
	if (nbaset < 2 || nbasef < 2)
		return (NULL);
	power = ft_check_number(nbr, base_from, nbasef);
	if (power == 0)
		return (NULL);
	number_dec = ft_convert_to_decimal(nbr, base_from, nbasef, power);
	if (!number_dec)
		return (NULL);
	nbasef = ft_logarithm(nbaset, number_dec) + 1;
	aux = (char *)malloc((nbasef + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	ft_putnbr_base(number_dec, base_to, aux, nbasef);
	return (aux);
}
/*
#include <stdio.h>

int	main (int argc, char **argv)
{
	char	*a;

	if (argc != 4)
	{
		printf("Type arguments <number> <base_number> <base_to_convert>\n");
		return (0);
	}
	a = ft_convert_base(argv[1], argv[2], argv[3]);
	if (!a)
		printf("\nNULL2\n");
	else
		printf("\nEl numero convertido es %s", a);
	free(a);
	return (0);
}*/
