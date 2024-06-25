/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpeek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:44:37 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:46:20 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_int.h"
#include <stddef.h>

/**
 * @brief Returns the top element of the stack.
 *
 * @param stk A pointer to the stack to peek.
 * @return The last element pushed to the stack. NULL if the stack is empty.
 */
void	*ft_stkpeek(const t_stack *stk)
{
	if (ft_stkisempty(stk))
		return (NULL);
	return (stk->top->content);
}
