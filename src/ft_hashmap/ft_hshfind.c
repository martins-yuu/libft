/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:54:00 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_hashmap_int.h"
#include "ft_string.h"
#include <stdbool.h>
#include <stddef.h>

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
	index = hsh->hash(key) % ft_arrcap(hsh->entries);
	while (true)
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
		index = (index + 1) % ft_arrcap(hsh->entries);
	}
}
