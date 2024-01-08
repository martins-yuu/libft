/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:31:59 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/27 11:31:48 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_stdlib.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new array.
 *
 * @param size The size in bytes of the elements to be stored in the array.
 * @return The new array.
 */
t_array	*ft_arrnew(size_t size)
{
	t_array	*arr;

	arr = malloc(sizeof(t_array));
	if (!arr)
		return (NULL);
	arr->elements = ft_calloc(ARRAY_DEFAULT_CAPACITY + 1, size);
	if (!arr->elements)
		return (free(arr), NULL);
	arr->element_size = size;
	arr->size = 0;
	arr->capacity = ARRAY_DEFAULT_CAPACITY;
	return (arr);
}
