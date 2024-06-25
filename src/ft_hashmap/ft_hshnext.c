/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:51:27 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:39:24 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_hashmap_int.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Advances the iterator to the next entry in the hash map.
 *
 * @param it The iterator to advance.
 * @return A nonzero value if the iterator was advanced, zero otherwise.
 */
bool	ft_hshnext(t_hashmap_iterator *it)
{
	const t_hashmap	*hsh;
	size_t			i;
	struct s_entry	*entry;

	hsh = it->_hsh;
	while (it->_index < ft_arrcap(hsh->entries))
	{
		i = it->_index;
		it->_index++;
		entry = ft_arrat(hsh->entries, i);
		if (entry->key != NULL)
		{
			it->key = entry->key;
			it->value = entry->value;
			return (true);
		}
	}
	return (false);
}
