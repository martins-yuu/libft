/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Strips the binary-safe string `s` from the left side of the character
 * `c`.
 *
 * @param s The string to be stripped.
 * @param c The character to strip.
 * @return The stripped string.
 */
t_string	ft_stnlstrip(t_string s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_stnlen(s);
	while (i < len && s[i] == c)
		i++;
	if (i != 0 && i != len)
		ft_memmove(s, s + i, len - i);
	s[len - i] = '\0';
	ft_stnsetlen(s, len - i);
	return (s);
}
