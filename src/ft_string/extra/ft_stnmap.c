/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 00:19:40 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Substitutes all the occurences of the set of characters specified in
 * the `from` array to the corresponding character in the `to` array.
 *
 * @param s The string to be modified.
 * @param from The set of characters to be replaced.
 * @param to The set of characters to replace with.
 * @return The modified string.
 */
t_string	ft_stnmap(t_string s, const char *from, const char *to)
{
	size_t	len;
	size_t	fromlen;
	size_t	tolen;
	size_t	i;
	size_t	j;

	len = ft_stnlen(s);
	fromlen = ft_strlen(from);
	tolen = ft_strlen(to);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < fromlen && j < tolen)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break ;
			}
			j++;
		}
		i++;
	}
	return (s);
}
