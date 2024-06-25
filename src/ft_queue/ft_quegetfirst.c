/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quegetfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:17:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:44:44 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stddef.h>

/**
 * @brief Returns the first element of the queue.
 *
 * @param que A pointer to the queue to get the first element from.
 * @return The first element of the queue, NULL if the queue is empty.
 */
void	*ft_quegetfirst(const t_queue *que)
{
	if (ft_queisempty(que))
		return (NULL);
	return (que->front->content);
}
