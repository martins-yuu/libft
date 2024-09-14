/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:47:38 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_string.h"

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
