/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:27:09 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 17:16:14 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_int.h"
#include <stddef.h>

/**
 * @brief Returns the number of elements in the stack.
 *
 * @param stk A pointer to the stack to be checked.
 * @return The size of the stack.
 */
size_t	ft_stksize(const t_stack *stk)
{
	return (stk->size);
}
