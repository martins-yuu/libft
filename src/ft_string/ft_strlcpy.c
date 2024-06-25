/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:21:57 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:51:35 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Copies up to `size - 1` characters from the NUL-terminated string
 * `src` to `dst`, NUL-terminating the result.
 *
 * Takes the full size of the buffer (not just the length) and guarantee to
 * NUL-terminate the result (as long as `size` is larger than 0).
 *
 * @note A byte for the NUL should be included in `size`.
 *
 * @note This function only operates on true "C" strings. This means that `src`
 * must be NUL-terminated.
 *
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create. That means the
 * length of `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	len;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	if (srclen >= size)
		len = size - 1;
	else
		len = srclen;
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (srclen);
}
