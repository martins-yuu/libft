/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:39:39 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/04 18:45:55 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

static size_t	get_range_len(ssize_t *start, ssize_t *end, size_t len);

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
	newlen = get_range_len(&start, &end, len);
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

static size_t	get_range_len(ssize_t *start, ssize_t *end, size_t len)
{
	if (*start < 0)
	{
		*start = len + *start;
		if (*start < 0)
			*start = 0;
	}
	if (*end < 0)
	{
		*end = len + *end;
		if (*end < 0)
			*end = 0;
	}
	if (*start > *end)
		return (0);
	return (*end - *start + 1);
}
