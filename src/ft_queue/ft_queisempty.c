/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:45:20 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stdbool.h>

/**
 * @brief Checks if the given queue is empty.
 *
 * @param que A pointer to the queue to check.
 * @return `true` if the queue is empty. `false` otherwise.
 */
bool	ft_queisempty(const t_queue *que)
{
	return (que->size == 0);
}
