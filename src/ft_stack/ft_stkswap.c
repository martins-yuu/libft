/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:10 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_int.h"
#include <stdbool.h>

/**
 * @brief Swaps the first 2 elements at the top of the stack. Does nothing if
 * there is only one or no elements.
 *
 * @param stk A pointer to the stack to swap the elements in.
 * @return `true` if the swap was successful. `false` otherwise.
 */
bool	ft_stkswap(t_stack *stk)
{
	void	*first;
	void	*second;

	if (ft_stksize(stk) < 2)
		return (true);
	first = ft_stkpop(stk);
	second = ft_stkpop(stk);
	if (!ft_stkpush(stk, first))
		return (false);
	if (!ft_stkpush(stk, second))
		return (false);
	return (true);
}
