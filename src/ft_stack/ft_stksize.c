/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:27:09 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:28 by martins          ###   ########.fr       */
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
