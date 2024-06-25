/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshbegin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:51:29 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/10 21:50:00 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stddef.h>

/**
 * @brief Returns an iterator for the given hash map.
 *
 * @param hsh A pointer to the hash map to iterate.
 * @return An iterator for the hash map.
 */
t_hashmap_iterator	ft_hshbegin(const t_hashmap *hsh)
{
	return ((t_hashmap_iterator){
		._hsh = hsh,
		._index = 0,
		.key = NULL,
		.value = NULL,
	});
}
