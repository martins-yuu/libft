/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:59:31 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:59:36 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#define BASE 10

/**
 * @brief Converts the initial portion of the string pointed to by `str` to int
 * representation.
 *
 * @param str The string to be converted.
 * @return The converted value or 0 on error.
 */
int	ft_atoi(const char *nptr)
{
	return (ft_atoll(nptr));
}
