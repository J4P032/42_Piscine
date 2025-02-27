/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:27:20 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 22:23:33 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include <stdlib.h>
#include <unistd.h>

t_dict	*declare_dictionary(int nlines)
{
	t_dict	*dic;

	dic = malloc(nlines * sizeof(t_dict));
	if (!dic)
		write(1, "Error\n", 6);
	return (dic);
}

void	assign_to_struct(t_dict *dic, char *nb, char *wd)
{
	dic->number = malloc (strlengh(nb) + 1);
	dic->word = malloc (strlengh(wd) + 1);
	copy_string(dic->number, nb);
	copy_string(dic->word, wd);
}
