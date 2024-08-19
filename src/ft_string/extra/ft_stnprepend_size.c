/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnprepend_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:59:21 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/19 00:06:45 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Prepends up to `size` characters from the binary-safe string `src` to
 * `dst`.
 *
 * @param dst The string to prepend to.
 * @param src The string to be prepended.
 * @param size The number of characters to prepend.
 * @return The destination string. NULL if the allocation fails.
 */
t_string	ft_stnprepend_size(t_string dst, const char *src, size_t size)
{
	size_t	len;

	dst = ft_stnexpand(dst, size);
	if (!dst)
		return (NULL);
	len = ft_stnlen(dst);
	ft_memmove(dst + size, dst, len);
	ft_memcpy(dst, src, size);
	dst[len + size] = '\0';
	ft_stnsetlen(dst, len + size);
	return (dst);
}
