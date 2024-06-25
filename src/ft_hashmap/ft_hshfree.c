/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:29:49 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:37:58 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_hashmap_int.h"
#include <stdlib.h>

/**
 * @brief Frees the hash map pointed to by `hsh`.
 *
 * @param hsh A pointer to the hash map to be freed.
 */
void	ft_hshfree(t_hashmap *hsh)
{
	if (!hsh)
		return ;
	ft_arrfree(hsh->entries);
	free(hsh);
}
