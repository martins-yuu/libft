/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 01:25:02 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 20:56:27 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stdlib.h>

/**
 * @brief Returns the element at position `index`.
 *
 * @param arr A pointer to the array to be searched.
 * @param index The position of the element.
 * @return A pointer to the element. NULL if an error occurred.
 */
void	*ft_arrat(const t_array *arr, size_t index)
{
	char	*element;

	if (index >= arr->capacity)
		return (NULL);
	element = arr->elements;
	element += index * arr->element_size;
	return (element);
}
