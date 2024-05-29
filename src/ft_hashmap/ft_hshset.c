/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 00:22:10 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/02 14:23:07 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_hashmap_int.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief Sets a key-value pair in the hash map.
 *
 * @param hsh A pointer to the hash map to set the entry in.
 * @param key The key to set the value to.
 * @param value The value to set.
 * @return `true` if the set was successful. `false` otherwise.
 */
bool	ft_hshset(t_hashmap *hsh, const char *key, void *value)
{
	struct s_entry	*entry;

	if (hsh->size + 1 > ft_arrcap(hsh->entries) * HASHMAP_MAX_LOAD_FACTOR
		&& !ft_hshexpand(hsh, ft_arrcap(hsh->entries) * HASHMAP_GROWTH_FACTOR))
		return (false);
	entry = ft_hshfind(hsh, key);
	if (entry->key == NULL && entry->value == NULL)
		hsh->size++;
	entry->key = key;
	entry->value = value;
	return (true);
}
