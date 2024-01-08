/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshbegin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:51:29 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/28 11:59:13 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

/**
 * @brief Returns an iterator for the given hash map.
 *
 * @param hsh A pointer to the hash map to iterate.
 * @return An iterator for the hash map.
 */
t_hsh_iterator	ft_hshbegin(const t_hashmap *hsh)
{
	t_hsh_iterator	it;

	it._hsh = hsh;
	it._index = 0;
	it.key = NULL;
	it.value = NULL;
	return (it);
}
