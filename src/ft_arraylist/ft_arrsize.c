/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:10:07 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stddef.h>

/**
 * @brief Returns the number of elements in the array.
 *
 * @param arr A pointer to the array to be checked.
 * @return The size of the array.
 */
size_t	ft_arrsize(const t_array *arr)
{
	return (arr->size);
}
