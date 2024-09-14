/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlpad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:27:21 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Pads the string with the specified character on the left side.
 *
 * @param s The string to pad.
 * @param size The total size of the string after padding.
 * @param c The character to pad the string with.
 * @return The padded string. NULL if the allocation fails.
 */
t_string	ft_stnlpad(t_string s, size_t size, char c)
{
	size_t	len;

	len = ft_stnlen(s);
	if (len >= size)
		return (s);
	s = ft_stnexpand(s, size);
	if (!s)
		return (NULL);
	ft_memmove(s + size - len, s, len);
	ft_memset(s, c, size - len);
	return (s);
}
