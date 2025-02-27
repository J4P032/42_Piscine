/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Japo32 <mi@email.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:56:39 by Japo32            #+#    #+#             */
/*   Updated: 2024/12/17 00:35:40 by Japo32           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

//# define ABS(value) ((value < 0) ? -value : value)
//la expresion debe ir entre llaves.
# define ABS(value) ({if (value < 0) value = -value; value;})

//si se quiere separar por lineas para leer mejor, poner \ al final de linea.
/*
# define ABS(value) \
	({ \
		if (value < 0) \
			value = - value; \
		value; \
	})
	*/
#endif
