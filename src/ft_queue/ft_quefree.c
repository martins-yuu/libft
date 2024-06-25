/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quefree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:44:08 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include "ft_queue_int.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees the queue and its elements using the function `del`
 * and free(3).
 *
 * @param que A pointer to the queue to be freed.
 */
void	ft_quefree(t_queue *que, void (*del)(void *))
{
	if (!que)
		return ;
	ft_lstclear(&que->front, del);
	free(que);
}
