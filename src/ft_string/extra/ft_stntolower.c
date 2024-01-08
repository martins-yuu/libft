/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stntolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:53:42 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/04 14:41:18 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Converts the uppercase letters in `s` to lowercase.
 *
 * @param s The string to be converted.
 * @return The converted string.
 */
t_string	ft_stntolower(t_string s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_stnlen(s);
	while (i < len)
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
