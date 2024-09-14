/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncat_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:46:16 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

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
