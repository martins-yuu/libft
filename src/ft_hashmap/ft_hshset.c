/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:50:51 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/28 11:21:11 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_hashmap.h"
#include <stdlib.h>

/**
 * @brief Sets a key-value pair in the hash map.
 *
 * @param hsh A pointer to the hash map to set the entry in.
 * @param key The key to set the value to.
 * @param value The value to set.
 * @return A pointer to the added entry. NULL if an error occurred.
 */
void	*ft_hshset(t_hashmap *hsh, const char *key, void *value)
{
	struct s_entry	*entry;

	if (hsh->size + 1 > hsh->entries->capacity * HASHMAP_MAX_LOAD_FACTOR
		&& !ft_hshexpand(hsh, hsh->entries->capacity * ARRAY_GROWTH_FACTOR))
		return (NULL);
	entry = ft_hshfind(hsh, key);
	if (entry->key == NULL)
		hsh->size++;
	entry->key = key;
	entry->value = value;
	return (entry);
}
