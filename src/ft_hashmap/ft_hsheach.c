/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hsheach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:56:25 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:36:11 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"

/**
 * @brief Iterates over the hash map `hsh` and applies the function `f` to each
 * key-value pair.
 *
 * @param hsh A pointer to the hash map to iterate.
 * @param f The address of the function to apply to each key-value pair.
 */
void	ft_hsheach(t_hashmap *hsh, void (*f)(const char *key, void *value))
{
	t_hashmap_iterator	it;

	it = ft_hshbegin(hsh);
	while (ft_hshnext(&it))
		f(it.key, it.value);
}
