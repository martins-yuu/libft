/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:32:50 by martins           #+#    #+#             */
/*   Updated: 2024/10/21 10:58:09 by martins          ###   ########.fr       */
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
void					*ft_quefirst(const t_queue *que);
void					*ft_quelast(const t_queue *que);
bool					ft_queenqueue(t_queue *que, void *content);
void					*ft_quedequeue(t_queue *que);

#endif
