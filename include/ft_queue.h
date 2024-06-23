/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:32:50 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/23 03:16:51 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include <stdbool.h>
# include <stddef.h>

typedef struct s_queue	t_queue;

t_queue					*ft_quenew(void);
void					ft_quefree(t_queue *que, void (*del)(void *));
size_t					ft_quesize(const t_queue *que);
bool					ft_queisempty(const t_queue *que);
void					*ft_quegetfirst(const t_queue *que);
void					*ft_quegetlast(const t_queue *que);
bool					ft_queenqueue(t_queue *que, void *content);
void					*ft_quedequeue(t_queue *que);

#endif
