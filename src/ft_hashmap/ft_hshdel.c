/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:27:01 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/16 16:27:02 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

/**
 * @brief TODO: Deletes a key-value pair from the hash map.
 *
 * @param hsh A pointer to the hash map to delete the entry from.
 * @param key The key of the entry to delete.
 */
void	ft_hshdel(t_hashmap *hsh, const char *key)
{
	ft_hshset(hsh, key, NULL);
}
