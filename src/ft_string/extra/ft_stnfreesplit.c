/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnfreesplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:30:14 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:40 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Frees an array of strings.
 *
 * @param The array to free.
 */
void	ft_stnfreesplit(t_array *arr)
{
	size_t	i;

	i = 0;
	while (i < ft_arrsize(arr))
	{
		ft_stnfree(*(t_string *)ft_arrat(arr, i));
		i++;
	}
	ft_arrfree(arr);
}
