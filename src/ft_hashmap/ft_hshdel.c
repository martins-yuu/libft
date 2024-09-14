/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:27:01 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stddef.h>

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
