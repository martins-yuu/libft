/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:47:45 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:04:32 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Joins an array of strings into a single string.
 *
 * @param arr The array to join.
 * @param s The separator to use between each string.
 * @return The joined string. NULL if the allocation fails.
 */
t_string	ft_stnjoin(const t_array *arr, const char *s)
{
	return (ft_stnjoin_range(arr, s, 0, -1));
}
