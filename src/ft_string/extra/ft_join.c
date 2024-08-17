/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:53:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/17 04:09:20 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Joins an array of strings with a separator.
 *
 * @param arr The array of strings to join.
 * @param s The separator to use.
 * @return The joined string.
 */
t_string	ft_join(char **arr, char *s)
{
	t_string	res;
	size_t		i;

	res = ft_stnnew_empty();
	if (!res)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		res = ft_stncat(res, arr[i]);
		if (!res)
			return (NULL);
		if (s != NULL && arr[i + 1] != NULL)
		{
			res = ft_stncat(res, s);
			if (!res)
				return (NULL);
		}
		i++;
	}
	return (res);
}
