/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:58:46 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:50:28 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Copies `n` bytes from memory area `src` to memory area `dest`.
 *
 * @note The memory areas may overlap.
 *
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of bytes to be copied.
 * @return A pointer to `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	i = n;
	while (i > 0)
	{
		i--;
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
