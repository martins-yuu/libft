/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:29:49 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
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
