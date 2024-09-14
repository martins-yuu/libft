/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queenqueue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stdbool.h>

/**
 * @brief Adds a new element to the end of the queue.
 *
 * @param que A pointer to the queue to add to.
 * @param content The content to add to the queue.
 * @return `true` if the element was added successfully. `false` otherwise.
 */
bool	ft_queenqueue(t_queue *que, void *content)
{
	t_list	*new;

	new = ft_lstnew(content);
	if (!new)
		return (false);
	if (!que->front)
		que->front = new;
	else
		que->back->next = new;
	que->back = new;
	que->size++;
	return (true);
}
