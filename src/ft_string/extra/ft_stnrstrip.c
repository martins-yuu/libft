/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnrstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Strips the binary-safe string `s` from the right side of the character
 * `c`.
 *
 * @param s The string to be stripped.
 * @param c The character to strip.
 * @return The stripped string.
 */
t_string	ft_stnrstrip(t_string s, char c)
{
	size_t	len;

	len = ft_stnlen(s);
	while (len > 0 && s[len - 1] == c)
		len--;
	s[len] = '\0';
	ft_stnsetlen(s, len);
	return (s);
}
