/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quenew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:54:55 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:34 by martins          ###   ########.fr       */
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
