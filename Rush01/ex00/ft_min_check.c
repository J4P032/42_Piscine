/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:16:46 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/17 21:19:21 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min_check(int *m)
{
	if (((m[1] + m[31]) > 5) || ((m[1] + m[31]) == 2))
		return (0);
	if (((m[2] + m[32]) > 5) || ((m[2] + m[32]) == 2))
		return (0);
	if (((m[3] + m[33]) > 5) || ((m[3] + m[33]) == 2))
		return (0);
	if (((m[4] + m[34]) > 5) || ((m[4] + m[34]) == 2))
		return (0);
	if (((m[6] + m[11]) > 5) || ((m[6] + m[11]) == 2))
		return (0);
	if (((m[12] + m[17]) > 5) || ((m[12] + m[17]) == 2))
		return (0);
	if (((m[18] + m[23]) > 5) || ((m[18] + m[23]) == 2))
		return (0);
	if (((m[24] + m[29]) > 5) || ((m[24] + m[29]) == 2))
		return (0);
	return (1);
}
