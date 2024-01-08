/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:50:41 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/28 10:05:06 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"

/**
 * @brief Returns the value associated with the key in the hash map.
 *
 * @param hsh A pointer to the hash map to search in.
 * @param key The key to search for.
 * @return The found value.
 */
void	*ft_hshget(const t_hashmap *hsh, const char *key)
{
	return (ft_hshfind(hsh, key)->value);
}
