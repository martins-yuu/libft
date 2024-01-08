/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 04:16:47 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:11:28 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
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
void	*ft_arradd(t_array *arr, const void *new)
{
	char	*element;
	void	*tmp;

	if (arr->size == arr->capacity)
	{
		tmp = ft_calloc(arr->capacity * 2 + 1, arr->element_size);
		if (!tmp)
			return (NULL);
		ft_memcpy(tmp, arr->elements, arr->size * arr->element_size);
		arr->elements = tmp;
		arr->capacity *= 2;
	}
	element = arr->elements;
	element += arr->size * arr->element_size;
	ft_memcpy(element, new, arr->element_size);
	arr->size++;
	return (element);
}
