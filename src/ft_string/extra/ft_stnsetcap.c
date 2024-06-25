/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsetcap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:05:54 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:54:14 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Sets the capacity of the binary-safe string to `newcap`.
 *
 * @param s The string to modify.
 * @param newsize The new capacity of the string.
 */
void	ft_stnsetcap(t_string s, size_t newsize)
{
	ft_stnhdr(s)->capacity = newsize;
}
