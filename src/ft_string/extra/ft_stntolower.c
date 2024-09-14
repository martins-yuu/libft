/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stntolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:53:42 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string_int.h"
#include <stddef.h>

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
