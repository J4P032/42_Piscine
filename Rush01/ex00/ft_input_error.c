/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:48:32 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/17 21:17:45 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1 = nums, 2 = spaces and null, 0 error */
int	ft_find_input_char(char letter)
{
	if (letter == 0)
		return (2);
	if ((letter > 0) && (letter < 32))
		return (0);
	if (letter == 32)
		return (2);
	if ((letter > 32) && (letter < 49))
		return (0);
	if ((letter > 48) && (letter < 58))
		return (1);
	else
		return (0);
}

int	ft_str_size(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_input_error(char *str, int size)
{
	int	i;
	int	value1;
	int	value2;

	i = 0;
	value1 = ft_find_input_char(str[0]);
	if ((value1 != 1) || (ft_str_size(str) != (size * size * 2) - 1))
		return (0);
	if (ft_find_input_char(str[ft_str_size(str) - 1]) != 1)
		return (0);
	while (str[i] != '\0')
	{
		value1 = ft_find_input_char(str[i]);
		value2 = ft_find_input_char(str[i + 1]);
		if (((str[i] - '0') > size) || (str[i] - '0' == 0))
			return (0);
		if (value2 != 2)
			return (0);
		if (i == (ft_str_size(str) - 1))
			i++;
		else
			i = i + 2;
	}
	return (1);
}
