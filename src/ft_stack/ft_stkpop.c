/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:44:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stddef.h>

/**
 * @brief Pops an element from the stack.
 *
 * @param stk A pointer to the stack to pop from.
 * @return The element popped from the stack, NULL if the stack is empty.
 */
void	*ft_stkpop(t_stack *stk)
{
	void	*content;
	t_list	*tmp;

	if (ft_stkisempty(stk))
		return (NULL);
	tmp = stk->top;
	content = tmp->content;
	stk->top = tmp->next;
	ft_lstdelone(tmp, NULL);
	stk->size--;
	return (content);
}
