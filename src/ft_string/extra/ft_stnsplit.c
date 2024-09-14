/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:21:01 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Splits a string by a character and returns an array of strings.
 *
 * @param s The string to split.
 * @param c The character to split by.
 * @return The array of strings. NULL if the allocation fails.
 */
t_array	*ft_stnsplit(const char *s, char c)
{
	t_array		*arr;
	char		**tmp;
	size_t		i;
	t_string	str;

	arr = ft_arrnew(sizeof(t_string));
	if (!arr)
		return (NULL);
	tmp = ft_split(s, c);
	if (!tmp)
		return (ft_arrfree(arr), NULL);
	i = 0;
	while (tmp[i] != NULL)
	{
		str = ft_stnnew(tmp[i]);
		if (!str)
			return (ft_stnfreesplit(arr), ft_freesplit(tmp), NULL);
		if (!ft_arrappend(arr, &str))
			return (ft_stnfreesplit(arr), ft_freesplit(tmp), NULL);
		i++;
	}
	ft_freesplit(tmp);
	return (arr);
}
