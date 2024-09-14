/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpeek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:44:37 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
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
