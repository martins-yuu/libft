/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:50:41 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:18:03 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"

/**
 * @brief Returns the value associated with the key in the hash map.
 *
 * @param hsh A pointer to the hash map to search in.
 * @param key The key to search for.
 * @return The found value.
 */
void	*ft_hshget(const t_hashmap *hsh, const char *key)
{
	struct s_entry	*entry;

	if (hsh->size == 0)
		return (NULL);
	entry = ft_hshfind(hsh, key);
	if (entry->key == NULL)
		return (NULL);
	return (entry->value);
}
