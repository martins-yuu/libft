/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:33:04 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/23 01:50:45 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_INT_H
# define FT_QUEUE_INT_H

# include "ft_linkedlist.h"
# include "ft_queue.h"
# include <stddef.h>

struct		s_queue
{
	t_list	*front;
	t_list	*back;
	size_t	size;
};

#endif
