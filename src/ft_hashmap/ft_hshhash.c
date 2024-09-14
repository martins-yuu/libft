/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshhash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:18:14 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stddef.h>

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
