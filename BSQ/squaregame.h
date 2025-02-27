/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squaregame.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrollon- <jrollon-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:36:17 by jrollon-          #+#    #+#             */
/*   Updated: 2024/11/27 18:24:32 by jrollon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAREGAME_H
# define SQUAREGAME_H

int		ft_strlen(char *str);
char	*read_map_info(int fd);
void	read_map(char *map);
void	terminal_to_matrix(void);
char	**map_to_matrix(int fd, int row_num);
int		ft_check_instruction(char *instruction);
int		ft_atoi(char *str);
int		*ft_count_spaces(char **map, char empty, int num_row);
int		ft_sqrt(int nb);
int		*ft_get_solution(int *m_size, char **matrix, char *instruct, int max);
int		ft_check_matrix(char **matrix, char *instruct, int *m_size);
int		check_map_error(char *str);
void    copy_string(char *dest, char *orig);

#endif
/*
MALLOC FILES:
char *instruct - read_map_info - map_to_matrix.c

*/
