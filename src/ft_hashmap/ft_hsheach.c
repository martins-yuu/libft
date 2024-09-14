/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hsheach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:56:25 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
