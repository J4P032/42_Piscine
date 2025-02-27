/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:42:17 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 23:28:55 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_dict	*potato;

	if ((argc < 2) || (argc > 3))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		potato = read_dictionary("numbers.dict");
	else
		potato = read_dictionary(argv[1]);
	write_struct(potato);
	return (0);
}
