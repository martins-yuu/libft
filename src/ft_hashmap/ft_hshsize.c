/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:25:05 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/27 16:30:50 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
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
