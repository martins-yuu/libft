/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:18:44 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:09:19 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/**
 * @brief Checks if the given stack is empty.
 *
 * @param stk A pointer to the stack to check.
 * @return A nonzero value if the stack is empty, zero otherwise.
 */
_Bool	ft_stkisempty(t_stack *stk)
{
	return (stk->size == 0);
}
