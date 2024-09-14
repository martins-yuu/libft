/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:38 by martins          ###   ########.fr       */
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
