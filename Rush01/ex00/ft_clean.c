/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:32:08 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/17 21:18:32 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* change i+1 character to i position in a string */

char	*ft_char_to_previous(char *chr)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (chr[i] != '\0')
	{
		while (chr[j] != '\0')
		{
			chr[i] = chr[j];
			i++;
			j++;
		}
		chr[j - 1] = '\0';
		return (chr);
	}
	return (chr);
}
