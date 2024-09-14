/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quedequeue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:45 by martins          ###   ########.fr       */
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
