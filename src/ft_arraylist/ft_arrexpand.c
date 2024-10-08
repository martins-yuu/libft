/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrexpand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 06:19:25 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Expands the capacity of the array to `size`.
 *
 * @param arr A pointer to the array to expand.
 * @param size The new capacity of the array.
 * @return The expanded array. NULL if the allocation fails.
 */
t_array	*ft_arrexpand(t_array *arr, size_t size)
{
	void	*tmp;

	if (size <= arr->capacity)
		return (arr);
	tmp = ft_calloc(size + 1, arr->element_size);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, arr->elements, arr->size * arr->element_size);
	free(arr->elements);
	arr->elements = tmp;
	arr->capacity = size;
	return (arr);
}
