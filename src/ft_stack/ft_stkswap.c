/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:10 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:36:22 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_int.h"
#include <stdlib.h>

/**
 * @brief Swaps the first 2 elements at the top of the stack. Does nothing if
 * there is only one or no elements.
 *
 * @param stk A pointer to the stack to swap the elements in.
 * @return The content of the first element of the stack. The stack itself if
 * there is only one or no elements. NULL if an error occured.
 */
void	*ft_stkswap(t_stack *stk)
{
	void	*first;
	void	*second;

	if (ft_stksize(stk) < 2)
		return (stk);
	first = ft_stkpop(stk);
	second = ft_stkpop(stk);
	if (!ft_stkpush(stk, first))
		return (NULL);
	if (!ft_stkpush(stk, second))
		return (NULL);
	return (first);
}
