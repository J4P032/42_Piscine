/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:14 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/11 15:52:42 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//if it is negative convert it to positive.
int	ft_is_negative(int nb)
{
	int	numberx;

	if (nb < 0)
	{
		numberx = nb - (nb * 2);
		return (numberx);
	}
	else
		return (nb);
}

//not elegant but return number of digits of nb
int	ft_check_num_digits(int nb)
{
	int	num_digits;

	num_digits = 0;
	if ((nb > -10) && (nb < 10))
		return (1);
	if ((nb >= -99) && (nb <= 99))
		return (2);
	if ((nb >= -999) && (nb <= 999))
		return (3);
	if ((nb >= -9999) && (nb <= 9999))
		return (4);
	if ((nb >= -99999) && (nb <= 99999))
		return (5);
	if ((nb >= -999999) && (nb < 999999))
		return (6);
	if ((nb >= -9999999) && (nb < 9999999))
		return (7);
	if ((nb >= -99999999) && (nb < 99999999))
		return (8);
	if ((nb >= -999999999) && (nb < 999999999))
		return (9);
	return (10);
}

//returns divisor (1 to 1kM) to make extracions of digits
int	ft_divisor(int n_digits)
{
	int	i;
	int	divisor;

	i = 1;
	divisor = 1;
	while (i < n_digits)
	{
		divisor = divisor * 10;
		i++;
	}
	return (divisor);
}

//returns digit by digit the number in char depending on divisor
char	ft_extract_digit(int nb, int divisor)
{
	char	letter;

	nb = (nb / divisor) % 10;
	letter = nb + '0';
	return (letter);
}

void	ft_putnbr(int nb)
{
	int		icount;
	int		num_digits;
	int		divisor;
	char	digit;

	icount = 1;
	num_digits = ft_check_num_digits(nb);
	divisor = ft_divisor(num_digits);
	while (icount <= num_digits)
	{
		if (nb < 0)
		{
			nb = ft_is_negative(nb);
			write(1, "-", 1);
		}
		digit = ft_extract_digit(nb, divisor);
		write (1, &digit, 1);
		divisor = divisor / 10;
		icount++;
	}
}
