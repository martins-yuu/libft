/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 01:25:02 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stddef.h>

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
