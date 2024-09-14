/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:33:04 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:40 by martins          ###   ########.fr       */
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
