/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 05:09:50 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:25:21 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stddef.h>

/**
 * @brief Returns the number of elements the array can hold.
 *
 * @param arr A pointer to the array to be checked.
 * @return The capacity of the array.
 */
size_t	ft_arrcap(const t_array *arr)
{
	return (arr->capacity);
}
