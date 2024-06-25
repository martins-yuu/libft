/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quenew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:45:31 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue_int.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new queue.
 *
 * @return The new queue.
 */
t_queue	*ft_quenew(void)
{
	t_queue	*que;

	que = malloc(sizeof(t_queue));
	if (!que)
		return (NULL);
	que->front = NULL;
	que->back = NULL;
	que->size = 0;
	return (que);
}
