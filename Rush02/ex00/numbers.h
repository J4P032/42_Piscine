/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:14:04 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/24 22:35:10 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

typedef struct s_dictionary
{
	char	*number;
	char	*word;
}	t_dict;

t_dict	*read_dictionary(char *file);
void	create_dictionary(int nlines);
t_dict	*declare_dictionary(int nlines);
void	assign_to_struct(t_dict *dic, char *nb, char *wd);
char	*take_dic_info(char *str);
char	*take_dic_nbr(char *str);
int		strlengh(char *str);
void	copy_string(char *dest, char *orig);
void	write_struct(t_dict *dic);

#endif
