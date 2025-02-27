/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Japo32 <mi@email.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:13:37 by Japo32            #+#    #+#             */
/*   Updated: 2024/12/14 17:29:06 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int	ft_check_base(char *base);

/* Prev_result is necesary to see overflow as int can be only MAX_INT
MIN_INT values and can overflow. gives -1 to check overflow in logarithm*/
int	ft_power(int nb, int power)
{
	int	result;
	int	prev_result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		prev_result = result;
		result *= nb;
		if (result / nb != prev_result)
			return (-1);
		power--;
	}
	return (result);
}

/*Calculates Log(base)(number) to see how many bytes are necesary to convert
it to the new base. If 0 it will be 1 byte (plus later add the second byte of
\0 i=-1 because if not will return a i+1 valid number
break in  aux == -1 to check overflow of integer numbers
long number is because MIN_INT conversion to -number;*/
int	ft_logarithm(int base, long number)
{
	int	i;
	int	aux;

	i = -1;
	aux = 0;
	if (number < 0)
		number = -number;
	if (number == 0)
		return (1);
	while (aux < number)
	{
		i++;
		aux = ft_power(base, i);
		if (aux == -1)
			break ;
	}
	if (aux == number)
		return (i);
	else
		return (i - 1);
}

void	ft_conversion(long num, int base, char *aux, int size)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	if (num < 0)
		neg = -1;
	while (num / base != 0 && i < (size + 1))
	{
		aux[i] = (num % base) * neg + '0';
		num = num / base;
		i++;
	}
	if (i < (size + 1))
		aux[i] = (num % base) * neg + '0';
	aux[(i + 1)] = '\0';
}

void	ft_putnbr_base(int nbr, char *base, char *aux, int size)
{
	int		j;
	int		index;
	char	*order;

	j = 0;
	index = 0;
	order = (char *)malloc((size + 1) * sizeof(char));
	if (!order)
		return ;
	ft_conversion((long)nbr, ft_check_base(base), order, size);
	if (nbr < 0)
	{
		aux[0] = '-';
		j++;
	}
	while (size >= 0)
	{
		if (order[size] != '\0')
		{
			index = order[size] - '0';
			aux[j++] = base[index];
		}
		size--;
	}
	free(order);
}
