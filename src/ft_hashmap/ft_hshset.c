/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 00:22:10 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_hashmap_int.h"
#include <stdbool.h>
#include <stddef.h>

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
