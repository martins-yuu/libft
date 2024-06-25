/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:06:39 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 17:07:46 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Adds the element `new` at the position `index` in the array.
 *
 * @param arr A pointer to the array to add the element to.
 * @param new The element to be added to the array.
 * @param index The position to insert the element at.
 * @return A pointer to the added element. NULL if an error occurred.
 */
void	*ft_arrinsert(t_array *arr, const void *new, size_t index)
{
	char	*element;

	if (index >= arr->capacity && !ft_arrexpand(arr, index + 1))
		return (NULL);
	element = arr->elements;
	element += index * arr->element_size;
	ft_memcpy(element, new, arr->element_size);
	if (index >= arr->size)
		arr->size = index + 1;
	return (element);
}
