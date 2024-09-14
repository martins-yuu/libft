/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:39:39 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string_int.h"
#include <stddef.h>
#include <sys/types.h>

/**
 * @brief Turns the string into a substring from the index `start` to the index
 * `end`.
 *
 * @param s The string to be modified.
 * @param start The start index of the substring.
 * @param end The end index of the substring.
 * @return The modified string.
 */
t_string	ft_stnrange(t_string s, ssize_t start, ssize_t end)
{
	size_t	len;
	size_t	newlen;

	len = ft_stnlen(s);
	if (len == 0)
		return (s);
	newlen = ft_setrange(&start, &end, len);
	if (newlen != 0)
	{
		if (start >= (ssize_t)len)
			newlen = 0;
		else if (end >= (ssize_t)len)
		{
			end = len - 1;
			newlen = end - start + 1;
		}
	}
	if (start != 0 && newlen != 0)
		ft_memmove(s, s + start, newlen);
	s[newlen] = '\0';
	ft_stnsetlen(s, newlen);
	return (s);
}
