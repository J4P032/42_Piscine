/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:06:12 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/11 16:06:55 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//a is 97 in ascii and 122 is z so we want to go from 97 to 122 to show all.
void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write (1, &i, 1);
		i++;
	}
}
