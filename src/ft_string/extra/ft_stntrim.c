/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stntrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 04:45:58 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:40 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Removes the characters specified in `set` from the beginning and the
 * end of the string.
 *
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string.
 */
t_string	ft_stntrim(t_string s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	newlen;

	start = 0;
	end = ft_stnlen(s1);
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	newlen = end - start + 1;
	if (start != 0)
		ft_memmove(s1, s1 + start, newlen);
	s1[newlen] = '\0';
	ft_stnsetlen(s1, newlen);
	return (s1);
}
