/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:02:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/29 01:12:32 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Swaps the values of `a` and `b`
 *
 * @param a The first value.
 * @param b The second value.
 */
void	ft_swap(void *a, void *b, size_t size)
{
	char	*aptr;
	char	*bptr;
	size_t	i;
	char	tmp;

	aptr = a;
	bptr = b;
	i = 0;
	while (i < size)
	{
		tmp = aptr[i];
		aptr[i] = bptr[i];
		bptr[i] = tmp;
		i++;
	}
}
