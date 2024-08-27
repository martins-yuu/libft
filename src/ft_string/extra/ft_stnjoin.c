/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:47:45 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/27 01:11:57 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_string.h"

/**
 * @brief Joins an array of strings into a single string.
 *
 * @param arr The array to join.
 * @param s The separator to use between each string.
 * @return The joined string. NULL if the allocation fails.
 */
t_string	ft_stnjoin(const t_array *arr, const char *s)
{
	t_string	res;
	size_t		i;

	res = ft_stnnew_empty();
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_arrsize(arr))
	{
		res = ft_stncat(res, *(t_string *)ft_arrat(arr, i));
		if (!res)
			return (NULL);
		if (s != NULL && i + 1 < ft_arrsize(arr))
		{
			res = ft_stncat(res, s);
			if (!res)
				return (NULL);
		}
		i++;
	}
	return (res);
}
