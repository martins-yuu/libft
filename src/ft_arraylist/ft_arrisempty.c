/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:28:41 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/22 23:29:39 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include <stdbool.h>

/**
 * @brief Checks if the array is empty.
 *
 * @param arr The array to check.
 * @return `true` if the array is empty. `false` otherwise.
 */
bool	ft_arrisempty(const t_array *arr)
{
	return (ft_arrsize(arr) == 0);
}
