/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:23:01 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/22 23:24:27 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap_int.h"
#include <stdbool.h>

/**
 * @brief Checks if the hash map is empty.
 *
 * @param map The hash map to check.
 * @return `true` if the hash map is empty. `false` otherwise.
 */
bool	ft_hshisempty(const t_hashmap *hsh)
{
	return (ft_hshsize(hsh) == 0);
}
