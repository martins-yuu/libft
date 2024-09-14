/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:28:41 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
