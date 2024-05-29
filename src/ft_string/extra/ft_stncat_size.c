/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncat_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:46:16 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:51:56 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdlib.h>

/**
 * @brief Appends up to `size` characters from the binary-safe string `src` to
 * `dst`.
 *
 * @param dst The string to append to.
 * @param src The string to be appended.
 * @param size The number of characters to append.
 * @return The destination string. NULL if the allocation fails.
 */
t_string	ft_stncat_size(t_string dst, const char *src, size_t size)
{
	size_t	len;

	dst = ft_stnexpand(dst, size);
	if (!dst)
		return (NULL);
	len = ft_stnlen(dst);
	ft_memcpy(dst + len, src, size);
	dst[len + size] = '\0';
	ft_stnsetlen(dst, len + size);
	return (dst);
}
