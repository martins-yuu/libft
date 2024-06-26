/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stntoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:53:42 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:53:58 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Converts the lowercase letters in `s` to uppercase.
 *
 * @param s The string to be converted.
 * @return The converted string.
 */
t_string	ft_stntoupper(t_string s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_stnlen(s);
	while (i < len)
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
