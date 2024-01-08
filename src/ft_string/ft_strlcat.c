/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:36:00 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:48:37 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Appends the NUL-terminated string `src` to the end of `dst`. It will
 * append at most `size` - strlen(dst) - 1 bytes, NUL-terminating the result.
 *
 * @note A byte for the NUL should be included in `size`.
 *
 * @note This function only operates on true "C" strings. This means that `src`
 * must be NUL-terminated.
 *
 * @note If this function traverses `size` characters without finding a NUL, the
 * length of the string is considered to be `size` and the destination string
 * will not be NUL-terminated (since there was no space for the NUL). This keeps
 * it from running off the end of a string. In practice this should not happen
 * (as it means that either `size` is incorrect or that `dst` is not a proper
 * "C" string).
 *
 * @param dst The string to append to.
 * @param src The string to be appended.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create. That means the
 * initial length of `dst` plus the length of `src`.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	ft_strlcpy(dst + dstlen, src, size - dstlen);
	return (dstlen + srclen);
}
