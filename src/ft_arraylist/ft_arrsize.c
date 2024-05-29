/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:10:07 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:10:08 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stdlib.h>

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
