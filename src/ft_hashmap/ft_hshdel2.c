/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshdel2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:27:01 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:16:57 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees the key-value pair from the hash map using the given
 * cleanup functions.
 *
 * @param hsh A pointer to the hash map to delete the entry from.
 * @param key The key of the entry to delete.
 * @param delkey The address of the function used to delete the key.
 * @param delvalue The address of the function used to delete the value.
 */
void	ft_hshdel2(t_hashmap *hsh, const char *key, void (*delkey)(char *),
		void (*delvalue)(char *))
{
	struct s_entry	*entry;

	entry = ft_hshfind(hsh, key);
	if (!entry->key)
		return ;
	if (delkey)
		delkey((char *)entry->key);
	entry->key = NULL;
	if (delvalue)
		delvalue(entry->value);
	entry->value = (void *)-1;
}
