/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:51:27 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/02 19:32:07 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

/**
 * @brief Advances the iterator to the next entry in the hash map.
 *
 * @param it The iterator to advance.
 * @return A nonzero value if the iterator was advanced, zero otherwise.
 */
_Bool	ft_hshnext(t_hsh_iterator *it)
{
	const t_hashmap	*hsh;
	size_t			i;
	struct s_entry	*entry;

	hsh = it->_hsh;
	while (it->_index < hsh->entries->capacity)
	{
		i = it->_index;
		it->_index++;
		entry = ft_arrat(hsh->entries, i);
		if (entry->key != NULL)
		{
			it->key = entry->key;
			it->value = entry->value;
			return (1);
		}
	}
	return (0);
}
