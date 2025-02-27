/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:15:43 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/24 14:38:47 by jnavalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	long	num;
	int		minus_count;

	minus_count = 0;
	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	if (minus_count % 2 != 0)
		num = num * -1;
	return ((int)num);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "  +-- 2147483648+48  r 56";

	printf("%d", ft_atoi(str));
	return (0);
}
*/
