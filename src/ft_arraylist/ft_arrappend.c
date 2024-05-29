/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 04:16:47 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 20:56:22 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Adds the element `new` at the end of the array.
 *
 * @param arr A pointer to the array to add the element to.
 * @param new The element to be added to the array.
 * @return A pointer to the added element. NULL if an error occurred.
 */
void	*ft_arrappend(t_array *arr, const void *new)
{
	char	*element;

	if (arr->size == arr->capacity && !ft_arrexpand(arr, arr->capacity
			* ARRAY_GROWTH_FACTOR))
		return (NULL);
	element = arr->elements;
	element += arr->size * arr->element_size;
	ft_memcpy(element, new, arr->element_size);
	arr->size++;
	return (element);
}
