/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:54:00 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/17 23:28:05 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Returns the entry with the given key in the hash map.
 *
 * @param hsh A pointer to the hash map to find the entry in.
 * @param key The key of the entry to find.
 * @return A pointer to the entry.
 */
struct s_entry	*ft_hshfind(const t_hashmap *hsh, const char *key)
{
	struct s_entry	*entry;
	struct s_entry	*deleted;
	size_t			index;

	deleted = NULL;
	index = hsh->hash(key) % hsh->entries->capacity;
	while (1)
	{
		entry = ft_arrat(hsh->entries, index);
		if (entry->key == NULL && entry->value == NULL)
		{
			if (deleted != NULL)
				return (deleted);
			return (entry);
		}
		else if (entry->key == NULL && deleted == NULL)
			deleted = entry;
		else if (entry->key != NULL && ft_strncmp(key, entry->key,
				ft_strlen(entry->key) + 1) == 0)
			return (entry);
		index = (index + 1) % hsh->entries->capacity;
	}
}
