/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsetlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:04:33 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
