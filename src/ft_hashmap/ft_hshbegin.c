/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshbegin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:51:29 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
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
