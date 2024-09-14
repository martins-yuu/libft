/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:18:44 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
