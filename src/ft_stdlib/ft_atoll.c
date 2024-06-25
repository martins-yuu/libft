/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:01:28 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:50:00 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include <stddef.h>

#define BASE 10

/**
 * @brief Converts the initial portion of the string pointed to by `str` to long
 * long representation.
 *
 * @param str The string to be converted.
 * @return The converted value or 0 on error.
 */
long long	ft_atoll(const char *nptr)
{
	long long	res;
	char		sign;
	size_t		i;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	res = 0;
	while (ft_isdigit(nptr[i]))
	{
		res = res * BASE + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
