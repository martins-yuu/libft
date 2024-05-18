/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:27:01 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/17 23:07:03 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

/**
 * @brief Deletes a key-value pair from the hash map.
 *
 * @param hsh A pointer to the hash map to delete the entry from.
 * @param key The key of the entry to delete.
 */
void	ft_hshdel(t_hashmap *hsh, const char *key)
{
	struct s_entry	*entry;

	entry = ft_hshfind(hsh, key);
	if (!entry->key)
		return ;
	entry->key = NULL;
	entry->value = (void *)-1;
}
