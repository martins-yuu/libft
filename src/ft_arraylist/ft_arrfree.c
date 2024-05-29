/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:47:38 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 20:56:53 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stdlib.h>

/**
 * @brief Frees the array pointed to by `arr`.
 *
 * @param arr A pointer to the array to be freed.
 */
void	ft_arrfree(t_array *arr)
{
	if (!arr)
		return ;
	free(arr->elements);
	free(arr);
}
