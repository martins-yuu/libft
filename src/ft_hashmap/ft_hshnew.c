/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:29:55 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:39:00 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_hashmap_int.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new hash map with the given
 * hash function. If `hash` is NULL, the default hash function will be used.
 *
 * @param hash The hash function to use.
 * @return The new hash map.
 */
t_hashmap	*ft_hshnew(t_hash_func hash)
{
	t_hashmap	*hsh;

	hsh = malloc(sizeof(t_hashmap));
	if (!hsh)
		return (NULL);
	hsh->entries = ft_arrnew(sizeof(struct s_entry));
	if (!hsh->entries)
		return (free(hsh), NULL);
	hsh->size = 0;
	if (hash)
		hsh->hash = hash;
	else
		hsh->hash = ft_hshhash;
	return (hsh);
}
