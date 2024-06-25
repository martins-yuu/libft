/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncpy_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:40:24 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:55:32 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Copies up to `size` characters from the binary-safe string `src` to
 * `dst`.
 *
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param size The number of characters to copy.
 * @return The copied string. NULL if the allocation fails.
 */
t_string	ft_stncpy_size(t_string dst, const char *src, size_t size)
{
	if (ft_stncap(dst) < size)
	{
		dst = ft_stnexpand(dst, size - ft_stnlen(dst));
		if (!dst)
			return (NULL);
	}
	ft_memcpy(dst, src, size);
	dst[size] = '\0';
	ft_stnsetlen(dst, size);
	return (dst);
}
