/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkrrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:12 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:36:13 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stdlib.h>

/**
 * @brief Shifts the stack down by one. The last element becomes the first one.
 *
 * @param stk A pointer to the stack to rotate.
 * @return The content of the last element of the stack. The stack itself if
 * there is only one or no elements. NULL if an error occured.
 */
void	*ft_stkrrotate(t_stack *stk)
{
	void	*content;
	t_list	*tmp;

	if (ft_stksize(stk) < 2)
		return (stk);
	tmp = stk->top;
	while (tmp->next->next)
		tmp = tmp->next;
	content = tmp->next->content;
	ft_lstdelone(tmp->next, NULL);
	tmp->next = NULL;
	if (!ft_lstaddcontent_front(&stk->top, content))
		return (NULL);
	return (content);
}
