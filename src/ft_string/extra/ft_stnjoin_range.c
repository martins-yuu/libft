/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnjoin_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:47:45 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * @brief Joins a range of an array of strings into a single string.
 *
 * @param arr The array to join.
 * @param s The separator to use between each string.
 * @param from The start index of the range.
 * @param to The end index of the range.
 * @return The joined string. NULL if the allocation fails.
 */
t_string	ft_stnjoin_range(const t_array *arr, const char *s, ssize_t from,
		ssize_t to)
{
	t_string	res;
	size_t		len;
	size_t		i;

	res = ft_stnnew_empty();
	if (!res)
		return (NULL);
	len = ft_setrange(&from, &to, ft_arrsize(arr));
	if (len == 0)
		return (res);
	i = 0;
	while (i < len)
	{
		res = ft_stncat(res, *(t_string *)ft_arrat(arr, from + i));
		if (!res)
			return (NULL);
		if (s != NULL && i + 1 < len)
		{
			res = ft_stncat(res, s);
			if (!res)
				return (NULL);
		}
		i++;
	}
	return (res);
}
