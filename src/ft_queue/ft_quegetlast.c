/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quegetlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:17:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:45:15 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stddef.h>

/**
 * @brief Returns the last element of the queue.
 *
 * @param que A pointer to the queue to get the last element from.
 * @return The last element of the queue, NULL if the queue is empty.
 */
void	*ft_quegetlast(const t_queue *que)
{
	if (ft_queisempty(que))
		return (NULL);
	return (que->back->content);
}
