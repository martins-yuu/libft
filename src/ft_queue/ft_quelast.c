/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quelast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:17:32 by martins           #+#    #+#             */
/*   Updated: 2024/10/21 10:59:37 by martins          ###   ########.fr       */
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
void	*ft_quelast(const t_queue *que)
{
	if (ft_queisempty(que))
		return (NULL);
	return (que->back->content);
}
