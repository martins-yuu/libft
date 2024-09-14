/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncpy_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:40:24 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
