/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:02:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
