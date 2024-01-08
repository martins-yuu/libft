/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdelat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 05:10:37 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:52:40 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Deletes the element at position `index`.
 *
 * @param arr A pointer to the array to delete the element from.
 * @param index The position of the element to be deleted from the array.
 */
void	ft_arrdelat(t_array *arr, size_t index)
{
	char	*element;

	if (index >= arr->size)
		return ;
	element = arr->elements;
	element += index * arr->element_size;
	ft_memmove(element, element + arr->element_size, (arr->size - index - 1)
		* arr->element_size);
	arr->size--;
}
