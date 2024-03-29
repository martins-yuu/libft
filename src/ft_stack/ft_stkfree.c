/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:07:03 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:09:53 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees the stack and its elements using the function `del`
 * and free(3).
 *
 * @param stk A pointer to the stack to be freed.
 */
void	ft_stkfree(t_stack *stk, void (*del)(void *))
{
	ft_lstclear(&stk->top, del);
	free(stk);
}
