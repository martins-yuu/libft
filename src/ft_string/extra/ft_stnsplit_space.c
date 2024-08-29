/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsplit_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:21:01 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 22:33:41 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_ctype.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Splits a string by white-spaces and returns an array of strings.
 *
 * @param s The string to split.
 * @return The array of strings. NULL if the allocation fails.
 */
t_array	*ft_stnsplit_space(const char *s)
{
	t_array		*arr;
	size_t		i;
	size_t		j;
	t_string	str;

	arr = ft_arrnew(sizeof(t_string));
	if (!arr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		while (ft_isspace(s[i]))
			i++;
		j = i;
		while (s[j] != '\0' && !ft_isspace(s[j]))
			j++;
		str = ft_stnnew_size(s + i, j - i);
		if (!str)
			return (ft_stnfreesplit(arr), NULL);
		if (!ft_arrappend(arr, &str))
			return (ft_stnfree(str), ft_stnfreesplit(arr), NULL);
		i++;
	}
	return (arr);
}
