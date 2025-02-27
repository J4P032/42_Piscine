/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:27:06 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/28 15:34:20 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
		{
			dif = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (dif);
		}
	}
	return (0);
}

void	print_str(int argc, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	if (argc > 2)
	{
		i = 1;
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					aux = argv[i];
					argv[i] = argv[j];
					argv[j] = aux;
				}
				j++;
			}
			i++;
		}
	}
	print_str(argc, argv);
	return (0);
}
