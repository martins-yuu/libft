/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:44:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/29 00:05:56 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief Pushes an element to the stack.
 *
 * @param stk A pointer to the stack to push to.
 * @param content The element to push.
 * @return `true` if the push was successful. `false` otherwise.
 */
bool	ft_stkpush(t_stack *stk, void *content)
{
	if (!ft_lstaddcontent_front(&stk->top, content))
		return (false);
	stk->size++;
	return (true);
}
