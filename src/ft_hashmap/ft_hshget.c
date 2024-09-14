/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:50:41 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stddef.h>

/**
 * @brief Returns the value associated with the key in the hash map.
 *
 * @param hsh A pointer to the hash map to search in.
 * @param key The key to search for.
 * @return The found value.
 */
void	*ft_hshget(const t_hashmap *hsh, const char *key)
{
	struct s_entry	*entry;

	if (hsh->size == 0)
		return (NULL);
	entry = ft_hshfind(hsh, key);
	if (entry->key == NULL)
		return (NULL);
	return (entry->value);
}
