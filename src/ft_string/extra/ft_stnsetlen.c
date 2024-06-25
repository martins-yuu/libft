/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsetlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:04:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:54:10 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Sets the length of the binary-safe string to `newlen`.
 *
 * @param s The string to modify.
 * @param newsize The new length of the string.
 */
void	ft_stnsetlen(t_string s, size_t newsize)
{
	ft_stnhdr(s)->size = newsize;
}
