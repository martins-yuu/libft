/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 05:09:50 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:52:16 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include <stdlib.h>

/**
 * @brief Returns the number of elements in the array.
 *
 * @param arr A pointer to the array to be checked.
 * @return The size of the array.
 */
size_t	ft_arrsize(t_array *arr)
{
	return (arr->size);
}
