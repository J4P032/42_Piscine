/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnavalla <jnavalla@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:04:15 by jnavalla          #+#    #+#             */
/*   Updated: 2024/11/27 18:05:21 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_matrix(char **matrix, char *instruct, int *m_size)
{
	int	i;
	int	j;

	i = 0;
	if (m_size[0] == 0 || m_size[1] == 0)
		return (0);
	while (i < m_size[0])
	{
		j = 0;
		while (j < m_size[1])
		{
			if (matrix[i][j] != instruct[0] && matrix[i][j] != instruct[1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
