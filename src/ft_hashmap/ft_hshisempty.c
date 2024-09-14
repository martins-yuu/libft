/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:23:01 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:51 by martins          ###   ########.fr       */
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
