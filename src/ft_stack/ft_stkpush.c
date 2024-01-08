/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:44:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:08:28 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack.h"
#include <stdlib.h>

/**
 * @brief Pushes an element to the stack.
 *
 * @param stk A pointer to the stack to push to.
 * @param content The element to push.
 * @return The stack after the push. NULL if an error occured.
 */
t_stack	*ft_stkpush(t_stack *stk, void *content)
{
	t_list	*new;

	new = ft_lstaddcontent_front(&stk->top, content);
	if (!new)
		return (NULL);
	stk->size++;
	return (stk);
}
