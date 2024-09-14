/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 03:53:32 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:04:03 by martins          ###   ########.fr       */
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
t_string	ft_join(const char **arr, const char *s)
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
