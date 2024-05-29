/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:12:27 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:51:58 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdlib.h>

/**
 * @brief Returns the capacity of the binary-safe string `s`.
 *
 * @param s The string to be checked.
 * @return The capacity of the string.
 */
size_t	ft_stncap(const t_string s)
{
	return (ft_stnhdr(s)->capacity);
}
