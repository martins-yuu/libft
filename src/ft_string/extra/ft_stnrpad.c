/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnrpad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:27:21 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/18 01:42:01 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Pads the string with the specified character on the right side.
 *
 * @param s The string to pad.
 * @param size The total size of the string after padding.
 * @param c The character to pad the string with.
 * @return The padded string. NULL if the allocation fails.
 */
t_string	ft_stnrpad(t_string s, size_t size, char c)
{
	size_t	len;

	len = ft_stnlen(s);
	if (len >= size)
		return (s);
	s = ft_stnexpand(s, size);
	if (!s)
		return (NULL);
	ft_memset(s + len, c, size - len);
	return (s);
}
