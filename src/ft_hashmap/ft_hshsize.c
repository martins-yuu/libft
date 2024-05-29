/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:25:05 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:18:56 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stdlib.h>

/**
 * @brief Returns the number of entries in the hash map.
 *
 * @param hsh A pointer to the hash map to be checked.
 * @return The size of the hash map.
 */
size_t	ft_hshsize(const t_hashmap *hsh)
{
	return (hsh->size);
}
