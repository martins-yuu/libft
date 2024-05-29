/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:47:38 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 20:58:59 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Clears the array pointed to by `arr`.
 *
 * @param arr A pointer to the array to be cleared.
 */
void	ft_arrclear(t_array *arr)
{
	ft_bzero(arr->elements, arr->size * arr->element_size);
	arr->size = 0;
	arr->capacity = ARRAY_DEFAULT_CAPACITY;
}
