/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 05:10:37 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:29:28 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Deletes the element at position `index`.
 *
 * @param arr A pointer to the array to delete the element from.
 * @param index The position of the element to be deleted from the array.
 */
void	ft_arrdel(t_array *arr, size_t index)
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
