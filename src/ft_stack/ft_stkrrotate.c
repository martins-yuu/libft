/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkrrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:12 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:47:54 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Shifts the stack down by one. The last element becomes the first one.
 * Does nothing if there is only one or no elements.
 *
 * @param stk A pointer to the stack to rotate.
 * @return `true` if the rotation was successful. `false` otherwise.
 */
bool	ft_stkrrotate(t_stack *stk)
{
	void	*content;
	t_list	*tmp;

	if (ft_stksize(stk) < 2)
		return (true);
	tmp = stk->top;
	while (tmp->next->next)
		tmp = tmp->next;
	content = tmp->next->content;
	ft_lstdelone(tmp->next, NULL);
	tmp->next = NULL;
	if (!ft_lstaddcontent_front(&stk->top, content))
		return (false);
	return (true);
}
