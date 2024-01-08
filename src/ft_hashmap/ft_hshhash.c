/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshhash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:18:14 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/17 03:59:23 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

#define FNV_OFFSET_BASIS 14695981039346656037UL
#define FNV_PRIME 1099511628211UL

/**
 * @brief Returns a hash value for the given key.
 *
 * @param key The key to hash.
 * @return The hash value of the key.
 */
size_t	ft_hshhash(const char *key)
{
	size_t	res;
	size_t	i;

	res = FNV_OFFSET_BASIS;
	i = 0;
	while (key[i] != '\0')
	{
		res ^= (unsigned char)key[i];
		res *= FNV_PRIME;
		i++;
	}
	return (res);
}
