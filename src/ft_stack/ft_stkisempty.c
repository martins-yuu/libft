/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:18:44 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/23 02:39:45 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_int.h"
#include <stdbool.h>

/**
 * @brief Checks if the given stack is empty.
 *
 * @param stk A pointer to the stack to check.
 * @return `true` if the stack is empty. `false` otherwise.
 */
bool	ft_stkisempty(const t_stack *stk)
{
	return (stk->size == 0);
}
