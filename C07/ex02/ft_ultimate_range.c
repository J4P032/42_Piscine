/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:36:43 by jrollon-          #+#    #+#             */
/*   Updated: 2024/12/09 11:55:59 by japo32           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* In this case int **range is not a bidimensional array. It is a pointer to
pointer to be able to change the value of the single array we give it in the
main. if we set int *range, range array would be local in the function so no 
change at all. It is the same as we do function (int *nbr) and we pass a number
to it co change it internally.*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <unistd.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
        int	*int_array;
        int	i;
		int	range;

        i = 0;
		int_array = NULL;
        if (argc != 3)
        {
                write(2, "Arguments has to be <min> <max> integers\n", 41);
                return (0);
        }
        range = ft_ultimate_range(&int_array, atoi(argv[1]), atoi(argv[2]));
		while (i < (atoi(argv[2]) - atoi(argv[1])))
        {
                printf("%d ", int_array[i]);
                i++;
        }
        printf("\nEl valor de range es: %d\n", range);
		free(int_array);
        return (0);
}*/
