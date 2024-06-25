/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 04:09:07 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:54:52 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Returns the length of the binary-safe string `s`.
 *
 * @param s The string to be checked.
 * @return The length of the string.
 */
size_t	ft_stnlen(const t_string s)
{
	return (ft_stnhdr(s)->size);
}
