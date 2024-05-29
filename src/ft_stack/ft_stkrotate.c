/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:15 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/29 00:03:29 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief Shifts the stack up by one. The first element becomes the last one.
 * Does nothing if there is only one or no elements.
 *
 * @param stk A pointer to the stack to rotate.
 * @return `true` if the rotation was successful. `false` otherwise.
 */
bool	ft_stkrotate(t_stack *stk)
{
	void	*content;

	if (ft_stksize(stk) < 2)
		return (true);
	content = ft_stkpop(stk);
	if (!ft_lstaddcontent_front(&stk->top, content))
		return (false);
	return (true);
}
