/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:31:59 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_stdlib.h"
#include <stddef.h>
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
