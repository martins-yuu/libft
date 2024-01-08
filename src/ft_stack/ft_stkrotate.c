/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:43:15 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:08:01 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack.h"
#include <stdlib.h>

/**
 * @brief Shifts the stack up by one. The first element becomes the last one.
 *
 * @param stk A pointer to the stack to rotate.
 * @return The content of the first element of the stack. The stack itself if
 * there is only one or no elements. NULL if an error occured.
 */
void	*ft_stkrotate(t_stack *stk)
{
	void	*content;

	if (ft_stksize(stk) < 2)
		return (stk);
	content = ft_stkpop(stk);
	if (!ft_lstaddcontent_front(&stk->top, content))
		return (NULL);
	return (content);
}
