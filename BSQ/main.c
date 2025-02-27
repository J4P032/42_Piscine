/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:17 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/27 18:18:17 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "squaregame.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		terminal_to_matrix();
	while (i < argc)
	{
		if (check_map_error(argv[i]))
		{
			read_map(argv[i]);
		}
		else
			write(2, "map error\n", 10);
		i++;
	}
	return (0);
}
