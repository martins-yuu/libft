/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quedequeue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:43:47 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stddef.h>

/**
 * @brief Removes an element from the front of the queue.
 *
 * @param que A pointer to the queue to remove from.
 * @return The element removed from the queue, NULL if the queue is empty.
 */
void	*ft_quedequeue(t_queue *que)
{
	void	*content;
	t_list	*tmp;

	if (ft_queisempty(que))
		return (NULL);
	tmp = que->front;
	content = tmp->content;
	que->front = tmp->next;
	ft_lstdelone(tmp, NULL);
	que->size--;
	return (content);
}
