/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:07:03 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_stack_int.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees the stack and its elements using the function `del`
 * and free(3).
 *
 * @param stk A pointer to the stack to be freed.
 */
void	ft_stkfree(t_stack *stk, void (*del)(void *))
{
	if (!stk)
		return ;
	ft_lstclear(&stk->top, del);
	free(stk);
}
